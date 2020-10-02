#include <iostream>
using namespace std;

void print_kadane(int values[], int size)
{
    int max = values[0];
    int sum = 0;
    int i = 0;
    while (values[i] <= 0 and i < size) {
        if (values[i] > max) {
            max = values[i];
        }
        i++;
    }
    while (i < size) {
        sum += values[i];
        if (sum > max) {
            max = sum;
        }
        i++;
        if (sum < 0) {
            sum = 0;
        }
    }
    std::cout << max << std::endl;
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
        print_kadane(values, size);
    }
    return 0;
}
