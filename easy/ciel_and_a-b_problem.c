#include <stdio.h>

int main(){

	int a,b,diff;
	scanf("%d%d",&a,&b);
	diff = a-b;
	if(diff%10 == 0)
		printf("%d\n",diff+1);
	else if(diff == 1)
		printf("%d\n",2);
	else 
		printf("%d\n",diff-1);
	return 0;
}