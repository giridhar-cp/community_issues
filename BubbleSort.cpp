#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
   for(int i = 0; i < n-1; i++) {     
       for (int j = 0; j < n-i-1; j++) { 
           if (arr[j] > arr[j+1]) {
              // Swap arr[j] and arr[j+1]
              int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
           }
       }
   }
}

void printArray(int arr[], int size) {
   for (int i = 0; i < size; i++)
       cout << arr[i] << " ";
   cout << endl;
}

int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];   // Create an array with given number of elements
   cout << "Enter elements:" << endl;
   
   for(int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   
   cout << "Array before sorting: ";
   printArray(arr, n);
   
   bubbleSort(arr, n);
   
   cout << "Array after sorting: ";
   printArray(arr, n);
   
   return 0;
}
