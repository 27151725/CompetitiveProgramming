#include <iostream>
#include <string>
#include <vector>

using namespace std;

// exercise at https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0
// the output of the third test case is incorrect
/*
Correct Answer.Correct Answer
Execution Time:0.69
*/

// function printing all leaders of array of positive integer
void print_leaders(int values[], int size)
{
    int max = values[size - 1];
    std::vector<int> leaders;
    leaders.reserve(size);
    leaders.push_back(values[size - 1]);
    for (int i = size - 2; i >= 0; i--) {
        if (values[i] >= max) {
            max = values[i];
            leaders.push_back(max);
        }
    }
    for (auto it = leaders.rbegin(); it != leaders.rend(); it++) {
        std::cout << *it << " ";
    }
    std::cout << endl;
}

int main()
{
    int num_test_cases = 0;
    std::cin >> num_test_cases;
    for (int i = 0; i < num_test_cases; i++) {
        int size = 0; // size of i th test case
        std::cin >> size;
        int values[size]; // array of elements of i th test case
        int value = 0;
        for (int j = 0; j < size; j++) {
            std::cin >> value;
            values[j] = value;
        }
        print_leaders(values, size);
    }
    return 0;
}
