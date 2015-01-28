#include <stdio.h>

int main(){

	int testcases,i;
	scanf("%d",&testcases);
	while(testcases>0){
		scanf("%d",&i);
		if(i%2==0)
			printf("%d\n",i);
		else
			printf("%d\n",i-1);
		testcases-=1;
	}
	return 0;
}