#include <stdio.h>
#include <math.h>
int main(){

	int testcases,menu,n,i,value;
	scanf("%d",&testcases);
	while(testcases){
		menu = 0;
		scanf("%d",&n);
		while(n>0){
			for(i=0;i<=11;i++){
				if(n/(int)pow(2,i)== 1){
						value = (int)pow(2,i);
						//printf("value1 %d\n",value);
						menu++;
						break;
				}
				else if(n/(int)pow(2,i) == 0){
						value = (int)pow(2,i-1);
						//printf("value2 %d\n",value);
						menu++;
						break;
				}
				else if(i==11){
					value = 2048;
					menu++;
					break;
				}
			}
			n-=value;
			//printf("value of n is %d\n",n);
		}
		printf("%d\n",menu);

		testcases-=1;
	}

}