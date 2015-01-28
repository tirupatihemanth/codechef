#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j;
	for(i=1;i<8;i++){
		for(j=0;j<3;j++){
			printf("the value after left shift is %d %d\n", i, i&(1<<j));
		}
	}		
	return 0;
}
