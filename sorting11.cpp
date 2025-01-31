#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
// C++ program to find the smallest number in an array

using namespace std;

int main()
{
    // Initialize the array
    int arr[] = { 1, 45, 54, 71, 76, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find the smallest element in the array
    int min_num = *min_element(arr, arr + n);

    cout << "Smallest number in the array is: " << min_num
         << endl;

    return 0;
}
