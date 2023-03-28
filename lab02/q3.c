#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) { 
		key = arr[i]; 
		j = i - 1; 

		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
}  
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 
 
int main() 
{ 
	int n;
	int arr[50];
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	srand(time(0)); 
	for (int i=0;i<n;i++)
	{
		arr[i]=rand()%100;
	} 
	printf("Array before sorting: \n"); 
	printArray(arr, n); 
	insertionSort(arr, n); 
	printf("\nArray after sorting: \n"); 
	printArray(arr, n); 
	printf("\n"); 
	int start_s=clock();
	insertionSort(arr, n);
	int stop_s=clock();
	printf("\nTime Complexity of Insertion Sort for %d elements is %f ms",n,(stop_s-start_s)/(CLOCKS_PER_SEC)*1000);	
	printf("\n\n");
    return 0;
}