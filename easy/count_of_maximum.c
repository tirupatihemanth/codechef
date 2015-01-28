
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void reorder(int *, int, int, int);
void quicksort(int *, int, int);
int pivot(int *, int, int );

// Implementation of the base function which calls reorder function or itself for proper recursion

void quicksort(int *ptr, int left, int right){

	srand(time(NULL));
	int pivot_ind, pivot, temp_index;
	pivot_ind = (rand() % (right+1-left)) + left;
	pivot = ptr[pivot_ind];

	if( left != right){

		reorder(ptr, pivot, left, right);
		temp_index = pivot_index(ptr,pivot,left,right);

		if(temp_index > left){
			quicksort(ptr, left, temp_index-1);
		}

		if(temp_index < right){
			quicksort(ptr, temp_index+1, right);
		}


	}

}

// Implementation of reorder function which sets all the elements greater than the pivot to the right of it and all the functions less than it to the left

 void reorder(int *ptr, int pivot, int left, int right){
 	
 	int temp;
 	
 	while(1){

 		if(left == right)
 			break;

 		if(ptr[left] < pivot && ptr[left]!= pivot){
 			left ++;
 			continue;
 		}

 		if(ptr[right] > pivot && ptr[right]!= pivot){
 			right --;
 			continue;
 		}


 		if(ptr[left] >= pivot && ptr[right] <= pivot){
 			temp = ptr[left];
 			ptr[left] = ptr[right];
 			ptr[right] = temp;
 			if(ptr[left]!= pivot)
 				left ++;
 			if(ptr[right]!= pivot)
 				right --;
 			if(ptr[left] == pivot && ptr[right] == pivot && left!= right)
 				right--;
 		}
 	}


}

// Implementation of a private function for getting the position of the pivot at any given time

int pivot_index(int *ptr, int pivot, int left, int right){

	int i=left;
	while(i<=right){
		if(ptr[i] == pivot)
			return i;
		i++;
	}
}

int myscanf_int(){

	register int temp,input=0;
	while(1){
		temp = getchar_unlocked();
		if(temp == '\n' || temp == ' ')
			break;
		else
			input = input*10+temp-'0';
	}
	return input;

}

int main(){

	int testcases, n, a[100], prevcount, prescount, presvalue, prevvalue, i;
	testcases = myscanf_int();

	while(testcases){

		n = myscanf_int();
		for(i=0;i<n;i++)
			a[i] = myscanf_int();
		quicksort(a, 0, n-1);
		prevcount = 0;
		prevvalue = 0;
		prescount = 0;
		presvalue = a[0];
		for(i=0;i<n;i++){

			if(a[i] == presvalue)
				prescount++;

			else{
				if(prescount > prevcount){
					prevcount = prescount;
					prevvalue = presvalue;
				}
				prescount = 1;
				presvalue = a[i];
			}

		}
		if(prescount<=prevcount)
			printf("%d %d\n",prevvalue,prevcount);
		else
			printf("%d %d\n",presvalue,prescount);
		testcases-=1;
	}

	return 0;
}