#include <stdio.h>
#include "q5.h"

int* sortArray_A(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i; (arr[j] > arr[j + 1]) && j < size - 1; j++)
			swap(&arr[j], &arr[j + 1]);
	}
	return arr;
}

int* sortArray_B(int arr[], int size)
{
	int i = 0, j;

	while (i < size)
	{
		j = i;
		while (arr[j] > arr[j + 1] && j < size - 1)
		{
			swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
	return arr;
}

int* sortArray_C(int arr[])
{
	if (arr[1] < arr[0])
		swap(&arr[1], &arr[0]);
	if (arr[2] < arr[1]) {
		swap(&arr[2], &arr[1]);
		if (arr[1] < arr[0])
			swap(&arr[1], &arr[0]);
	}
	if (arr[3] < arr[2])
	{
		swap(&arr[3], &arr[2]);
		if (arr[1] < arr[0])
			swap(&arr[1], &arr[0]);
		if (arr[2] < arr[1]) {
			swap(&arr[2], &arr[1]);
			if (arr[1] < arr[0])
				swap(&arr[1], &arr[0]);
		}
	}
	if (arr[4] < arr[3])
	{
		swap(&arr[4], &arr[3]);
		if (arr[3] < arr[2]) {
			swap(&arr[3], &arr[2]);
			if (arr[1] < arr[0])
				swap(&arr[1], &arr[0]);
			if (arr[2] < arr[1]) {
				swap(&arr[2], &arr[1]);
				if (arr[1] < arr[0])
					swap(&arr[1], &arr[0]);
			}
		}
	}
	return arr;
}

int* sortArray_D(int arr[], int size)
{
	int counter = 0;
BottomUp:
	if (size == 1)
		return arr;
	counter++;
	if (arr[counter] < arr[counter - 1])
		swap(&arr[counter], &arr[counter - 1]);

	if (counter < size - 1)
		goto BottomUp;
	counter++;
TopDown:
	counter--;
	if (arr[counter] < arr[counter - 1])
		swap(&arr[counter], &arr[counter - 1]);

	if (counter > 1)
		goto TopDown;
	else
	{
		counter = 0;
		size--;
		goto BottomUp;
	}
}

void q5_A()
{
	int arr[] = { 34, 12, 24, 65, 63 };
	int* sortedArray = sortArray_A(arr, SIZE);

	printArray(sortedArray, SIZE);
}

void q5_B()
{
	int arr[] = { 34, 12, 24, 65, 63 };
	int* sortedArray = sortArray_B(arr, SIZE);

	printArray(sortedArray, SIZE);
}

void q5_C()
{
	int arr[] = { 34, 12, 24, 65, 63 };
	int* sortedArray = sortArray_C(arr);

	printArray(sortedArray, SIZE);
}

void q5_D()
{
	int arr[] = { 34, 12, 24, 65, 63 };
	int* sortedArray = sortArray_D(arr, SIZE);

	printArray(sortedArray, SIZE);
}

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int* arr, int size) {
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);

	puts("");
}