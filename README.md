# Sorting and Searching Algorithms

## Overview

This repository contains a simple C program that demonstrates the implementation of several common sorting and searching algorithms:

- Bubble Sort
- Insertion Sort
- Quick Sort
- Linear Search

The code showcases these algorithms with example data and includes functions for sorting arrays and searching for elements.

## Files

- `main.c` - Contains the implementation of sorting and searching algorithms and a main function to execute them.

## Sorting Algorithms

### Bubble Sort

The Bubble Sort algorithm repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass-through is repeated until the list is sorted.

### Insertion Sort

The Insertion Sort algorithm builds the final sorted array one item at a time. It picks the next item and inserts it into the correct position within the already sorted part of the array.

### Quick Sort

The Quick Sort algorithm selects a 'pivot' element and partitions the array into two sub-arrays according to whether the elements are less than or greater than the pivot. The sub-arrays are then sorted recursively.

## Search Algorithm

### Linear Search

The Linear Search algorithm scans each element of the array sequentially until the desired element is found or the end of the array is reached.

## Code Explanation

- `void bubblesort(int arr[], int n);` - Function to perform Bubble Sort on the array.
- `void insertionSort(int arr[], int n);` - Function to perform Insertion Sort on the array.
- `void swap(int *x, int *y);` - Utility function to swap two elements.
- `void printArr(int arr[], int n);` - Function to print the elements of the array.
- `int partitioning(int arr[], int low, int height);` - Helper function for Quick Sort that partitions the array.
- `void quickSort(int arr[], int low, int height);` - Function to perform Quick Sort on the array.
- `int linearSearch(int arr[], int n, int key);` - Function to perform Linear Search for a specific key.
