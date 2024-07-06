#include<stdio.h>

#include<stdlib.h>

#include <stdbool.h>

void bubblesort(int arr[], int n);
void insertionSort(int arr[], int n);
void swap(int * , int * );
void printArr(int arr[], int n);
int partitioning(int arr[], int low, int height);
void quickSort(int arr[], int low, int height);

int linearSearch(int arr[], int n, int key);

int main() {
  int count = 0;
  int arr[] = {
    100,
    30,
    60,
    20,
    60,
    170,
    90
  };
  int num = 90;
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Bubbble Sort: ");
  bubblesort(arr, n);
  printArr(arr, n);
  printf("Insertion Sort: ");
  insertionSort(arr, n);
  printArr(arr, n);
  printf("Quick sort: ");
  quickSort(arr, 0, n);
  printArr(arr, n);
  int result = linearSearch(arr, n, num);
  if (result == -1)
    printf("%d was not found. ", num);
  else
    printf("The Number : %d Was Found At Index : %d ", arr[result], result);
  return 0;
}

void bubblesort(int arr[], int n) {
  int c = 0;
  bool sorted = true;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        /*int temp = arr[j];
        arr[j]= arr[j+1];
        arr[j+1] = temp;
        */
        swap( & arr[j], & arr[j + 1]);
        sorted = false;
      }
      c++;
    }
    if (sorted == true) {
      break;
    }

  }
  printf(" Munber of c=  %d ::", c);

}
void printArr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d, ", arr[i]);
  }
  printf("\n");

}

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && key < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }

}

int partitioning(int arr[], int low, int height) {
  int p = arr[low];
  int i = low;
  int j = height;
  while (i < j) {
    do {
      i++;
    } while (arr[i] <= p);
    do {
      j--;
    } while (arr[j] > p);

    if (i < j)
      swap( & arr[i], & arr[j]);
  }
  swap( & arr[low], & arr[j]);
  return j;
}

void quickSort(int arr[], int low, int height) {
  if (low < height) {
    int piv = partitioning(arr, low, height);
    quickSort(arr, low, piv);
    quickSort(arr, piv + 1, height);
  }
}

void swap(int * x, int * y) {
  int t = * x;
  * x = * y;
  * y = t;
}

int linearSearch(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key)
      return i;
  }
  return -1;
}
