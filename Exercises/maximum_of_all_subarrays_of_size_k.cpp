#include <iostream>
#include <deque>

using namespace std;

// problem: https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k/0

void print_max_all_subarray(int values[], int size, int k)
{
    std::deque<int> indexes;
    int maxs_length = size - k + 1;
    int maxs[maxs_length];
    for (int i = 0; i < size; i++) {
        while (!indexes.empty() && indexes.front() <= i - k) {
            indexes.pop_front(); // remove index of element that not is in the subarray
        }
        while (!indexes.empty() && values[i] >= values[indexes.back()]) {
            indexes.pop_back(); // remove index of element that is minor than the current
        }
        indexes.push_back(i);
        if (i >= k - 1) {
            maxs[i - k + 1] = values[indexes.front()];
        }
    }
    for (int j = 0; j < maxs_length; j++) {
        std::cout << maxs[j] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int num_test_cases = 0;
    std::cin >> num_test_cases;
    for (int i = 0; i < num_test_cases; i++) {
        int size = 0; // size of i th test case
        std::cin >> size;
        int k = 0; // the length of the subarray
        std::cin >> k;
        int values[size]; // array of elements of i th test case
        int value = 0;
        for (int j = 0; j < size; j++) {
            std::cin >> value;
            values[j] = value;
        }
        print_max_all_subarray(values, size, k);
    }
    return 0;
}
