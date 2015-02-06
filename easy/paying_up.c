#include <stdio.h>
#include <math.h>

int main(){

	int testcases,i,j,notes,amount,sum,a[20];
	scanf("%d",&testcases);
	while(testcases){
		scanf("%d%d",&notes,&amount);
		
		for(i=0;i<notes;i++){
			scanf("%d",(a+i));
		}

		for(i=1;i<pow(2,notes);i++){
			sum = 0;
			for(j=0;j<notes;j++){

				if((i&(1<<j)) > 0){
					//printf("value %d %d\n",i, i&(1<<j));
					sum+=a[j];
				}

			}
			if(sum == amount){
				printf("Yes\n");
				break;
			}

		}

			if(sum != amount)
				printf("No\n");
		
		testcases-=1;

	}
	return 0;

	}