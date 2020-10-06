// #include <iostream>
// #include <string>
// using namespace std;

// // problem: https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k/0

// void print_max_all_subarray(int values[], int size, int k)
// {
//     int maximum = 0;
//     int i;
//     for (i = 0; i < k; i++){
//         maximum = max(maximum, values[i]); // the maximum of the first three elements
//     }
//     std::cout << maximum << " ";
//     for (i = k; i < size; i++){
//         maximum = max(maximum, values[i]);
//         std::cout << maximum << " "; // the maximum between the maximum and the i-th element
//     }
//     std::cout << std::endl;
// }

// int main()
// {
//     int num_test_cases = 0;
//     std::cin >> num_test_cases;
//     for (int i = 0; i < num_test_cases; i++) {
//         int size = 0; // size of i th test case
//         std::cin >> size;
//         int k = 0; // the length of the subarray
//         std::cin >> k;
//         int values[size]; // array of elements of i th test case
//         int value = 0;
//         for (int j = 0; j < size; j++) {
//             std::cin >> value;
//             values[j] = value;
//         }
//         print_max_all_subarray(values, size, k);
//     }
//     return 0;
// }
