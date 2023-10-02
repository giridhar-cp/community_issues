#include <iostream>
#include <algorithm>
using namespace std;

// Function to partition the array according to the given pivot
int partition(int arr[], int low, int high) {
  int pivot = arr[high];  // Choose the last element as the pivot
  int i = low - 1;  // Index of the smaller element
  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;  // Increment the index of the smaller element
      swap(arr[i], arr[j]);  // Swap the smaller element with the current element
    }
  }
  swap(arr[i + 1], arr[high]);  // Place the pivot in its correct position
  return i + 1;  // Return the index of the pivot element
}

// Function to sort the array using the Dutch National Flag algorithm
void dutchNationalFlagSort(int arr[], int low, int high) {
  if (low < high) {
    int pivot = partition(arr, low, high);  // Partition the array
    dutchNationalFlagSort(arr, low, pivot - 1);  // Recursively sort the left partition
    dutchNationalFlagSort(arr, pivot + 1, high);  // Recursively sort the right partition
  }
}

// Function to print the array elements
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {0, 1, 2, 0, 2, 1, 1, 0, 1, 2, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Unsorted array: ";
  printArray(arr, n);

  dutchNationalFlagSort(arr, 0, n - 1);

  cout << "Sorted array: ";
  printArray(arr, n);

  return 0;
}
