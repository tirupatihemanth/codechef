#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void reorder(int *, int, int, int);
void quicksort(int *, int, int);

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

int main(){

	int testcases, jobs, comjobs,i,j,k;
	scanf("%d",&testcases);
	while(testcases){
		scanf("%d%d",&jobs, &comjobs);
		
		int a[jobs-comjobs];
		if(comjobs>0){
			int b[comjobs];

			for(i=0;i<comjobs;i++){
				scanf("%d",&b[i]);
			}
			quicksort(b,0,comjobs-1);
			j=0;
			k=0;
			for(i=1;i<=jobs;i++){
				if(i==b[j])
					j++;
				else{
					a[k] = i;
					k++;
				}

			}
		}
		else{
			for(i=1;i<=jobs;i++){
				a[i-1] = i;
			}
		}

		for(i=0;i<jobs-comjobs;i+=2)
			printf("%d ",a[i]);
		printf("\n");
		for(i=1;i<jobs-comjobs;i+=2)
			printf("%d ",a[i]);
		printf("\n");
		testcases-=1;

	}
}