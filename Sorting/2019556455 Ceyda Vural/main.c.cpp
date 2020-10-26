#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*Ceyda Vural
 2019556455 */
 
 void printArray(int arr[], int size){
      int i;
      for(i = 0; i < size ; i++)
      printf("%d ",arr[i]);
}
 
//Insertion Sort 
void InsertionSort(int arr[], int n) 
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

void Insertionchar(char arr[], int n
){
	int a,b;
	char key;
	for (a=1; a<n; a++){
		key = arr[a];
		b = a-1;
		while(b >= 0 && arr[b] > key){
			arr[b+1] = arr[b];
			b = b-1;
		}
		arr[b+1] = key;
	}
}

//Selection Sort
void SelectionSort(int *p, int size)
{
   int   i, j, temp, min;
 
   for (i = 0; i < size - 1; i++) {
      min = i;
      for (j = i + 1; j < size; j++)
         if (p[min] > p[j])
            min = j;
      temp = p[min];
      p[min] = p[i];
      p[i] = temp;
   }
}

void Selectionchar(char arr[], int n) 
{
      int  i, j, min;
      char temp;
 
 
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
         if (arr[min] > arr[j])
            min = j;
      temp = arr[min];
      arr[min] = arr[i];
      arr[i] = temp;
}
}

//Merge Sort
void merge(int *Arr, int start, int mid, int end) {
	
	int temp[end - start + 1];
	int i = start, j = mid+1, k = 0;

	while(i <= mid && j <= end) {
		if(Arr[i] <= Arr[j]) {
			temp[k] = Arr[i];
			k += 1; i += 1;
		}
		else {
			temp[k] = Arr[j];
			k += 1; j += 1;
		}
	}
	while(i <= mid) {
		temp[k] = Arr[i];
		k += 1; i += 1;
	}

	while(j <= end) {
		temp[k] = Arr[j];
		k += 1; j += 1;
	}

	for(i = start; i <= end; i += 1) {
		Arr[i] = temp[i - start];
	}
}
void mergeSort(int *Arr, int start, int end) {

	if(start < end) {
		int mid = (start + end) / 2;
		mergeSort(Arr, start, mid);
		mergeSort(Arr, mid+1, end);
		merge(Arr, start, mid, end);
	}
}

 void mergesort(char *Arr, int start, int mid, int end) {
	
	int temp[end - start + 1];
	int i = start, j = mid+1, k = 0;

	while(i <= mid && j <= end) {
		if(Arr[i] <= Arr[j]) {
			temp[k] = Arr[i];
			k += 1; i += 1;
		}
		else {
			temp[k] = Arr[j];
			k += 1; j += 1;
		}
	}
	while(i <= mid) {
		temp[k] = Arr[i];
		k += 1; i += 1;
	}

	while(j <= end) {
		temp[k] = Arr[j];
		k += 1; j += 1;
	}

	for(i = start; i <= end; i += 1) {
		Arr[i] = temp[i - start];
	}
}
void mergesortchar(char *Arr, int start, int end) {

	if(start < end) {
		int mid = (start + end) / 2;
		mergesortchar(Arr, start, mid);
		mergesortchar(Arr, mid+1, end);
		mergesort(Arr, start, mid, end);
	}
}

//Bubble sort
void bubbleSort(int arr[], int size){
     int temp;
     int i, j;
     for (i=1; i<size; i++)
     {
        for (j=0; j<size-i; j++)
         {
            if(arr[j] > arr[j+1])
             {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
             }
         }
    }
}

void bubblechar(char arr[], int size){
     char temp;
     int i, j;
     for (i=1; i<size; i++)
     {
       for (j=0; j<size-i; j++)
       {
          if(arr[j] > arr[j+1])
           {
            temp = arr[j];
            arr[j] = arr[j+1];
             arr[j+1] = temp;
             }
         }
    }
}

 int main(){
     printf("Unsorted number:2019556455\n");
     printf("Unsorted name:ceyda vural\n");
     clock_t t;
     
 	  //InsertionSort
 	  int arr[] = {2,0,1,9,5,5,6,4,5,5};
      int n = sizeof(arr)/sizeof(arr[0]);
      char name[] = "ceyda vural";
      int charS = strlen(name);
      
      t = (double)clock();
      InsertionSort(arr, n);
      t = (double)clock()-t;
      printf("\nSorted numbers in InsertionSort:");
      printArray(arr,n);
      printf("\nRunning time of Insertion Sort for number: %f\n",((double)t) / CLOCKS_PER_SEC);
      Insertionchar(name,charS);
      t = (double)clock()-t;
      printf("Sorted name in Insertion Sort : %s\n",name);
      printf("Running time of Insertion Sort for char: %f\n",((double)t) / CLOCKS_PER_SEC);
      
      //SelectionSort
 	  int arr1[] = {2,0,1,9,5,5,6,4,5,5};
      int n1 = sizeof(arr)/sizeof(arr1[0]);
      char name1[] = "ceyda vural";
      int charS1 = strlen(name1);
      
      SelectionSort(arr1, n1);
      t =(double)clock()-t;
      printf("\nSorted numbers in Selection Sort:");
      printArray(arr1,n1);
      printf("\nRunning time of Selection Sort for number: %f\n",((double)t) / CLOCKS_PER_SEC);
      Selectionchar(name1,charS1);
      t =(double)clock()-t;
      printf("Sorted name in Selection Sort : %s\n",name1);
      printf("Running time of Selection Sort for char: %f\n",((double)t) / CLOCKS_PER_SEC);
      
      //MergeSort
      int arr2[] = {2,0,1,9,5,5,6,4,5,5};
      int n2 = sizeof(arr)/sizeof(arr2[0]);
      char name2[] = "ceyda vural";
      int charS2 = strlen(name2);
    
      mergeSort(arr2,0, n2-1);
      t = (double)clock()-t;
      printf("\nSorted numbers in Merge Sort:");
      printArray(arr2,n2);
      printf("\nRunning time of Merge Sort for number: %f\n",((double)t) / CLOCKS_PER_SEC);
      mergesortchar(name2,0,charS2-1);
      t = (double)clock()-t;
      printf("Sorted name in Merge Sort : %s\n",name2);
      printf("Running time of Merge Sort for char: %f\n",((double)t) / CLOCKS_PER_SEC);
      
      //BubbleSort
      int arr3[] = {2,0,1,9,5,5,6,4,5,5};
      int n3 = sizeof(arr)/sizeof(arr3[0]);
      char name3[] = "ceyda vural";
      int charS3 = strlen(name3);
    
      bubbleSort(arr3, n3);
      t = clock()-t;
      printf("\nSorted numbers in Bubble Sort:");
      printArray(arr3,n3);
      printf("\nRunning time of Bubble Sort for number: %f\n",((double)t) / CLOCKS_PER_SEC);
      bubblechar(name3,charS3);
      t = clock()-t;
      printf("Sorted name in Bubble Sort : %s\n",name3);
      printf("Running time of Bubble Sort for char: %f\n",((double)t) / CLOCKS_PER_SEC);
      return 0;
 }
