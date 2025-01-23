#include <iostream>
#include <algorithm>
#include <vector>

// Merges two subarrays of arr[].
// First subarray is arr[left..mid]
// Second subarray is arr[mid+1..right]

void merge(std::vector<int>& arr, int left, int mid, int right)
{
  int n1 = mid - left + 1;
  int n2 = right - mid;

  // Create temp vectors
  std::vector<int> L(n1), R(n2);

  // Copy data to temp vectors L[] and R[]
  for (int i = 0; i < n1; i++)
    L[i] = arr[left + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[mid + 1 + j];

  int i = 0, j = 0;
  int k = left;

  // Merge the temp vectors back 
  // into arr[left..right]
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    }
    else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of L[], 
  // if there are any
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  // Copy the remaining elements of R[], 
  // if there are any
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(std::vector<int>& arr, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

// Function to print a vector
void printVector(std::vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
      std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main()
{
  //bubble sort
  int n = 8;
  int array[n] = {1,3,8,2,9,7,5,6};
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n-1; j++)
	{
	  if (array[j] > array[j+1])
	    {
	      std::swap(array[j],array[j+1]);
	    }
	}
    }
  for (int i = 0; i < n; i++){
    
    std::cout << array[i] << ' ';
  }
  std::cout << std::endl;

  //mergesort Сортировка слиянием

  std::vector<int> arr = { 12, 11, 13, 5, 6, 7 };
  int n1 = arr.size();

  std::cout << "Given vector is \n";
  printVector(arr);

  mergeSort(arr, 0, n1 - 1);

  std::cout << "\nSorted vector is \n";
  printVector(arr);
  return 0;
}
