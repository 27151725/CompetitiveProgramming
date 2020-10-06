#include <iostream>

using namespace std;

// https://practice.geeksforgeeks.org/problems/trapping-rain-water/0

void print_total_unit_water(int values[], int size)
{
    int start = 0;
    int end = size - 1;
    int total_unit_water = 0;
    int level = 0;
    while (start != end) {
        if (values[start] <= values[end]) {
            level = max(level,values[start]);
            total_unit_water += (level - values[start]);
            start++;
        }
        else {
            level = max(level,values[end]);
            total_unit_water += (level - values[end]);
            end--;
        }
    }
    std::cout << total_unit_water << std::endl;
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
        print_total_unit_water(values, size);
    }
    return 0;
}
