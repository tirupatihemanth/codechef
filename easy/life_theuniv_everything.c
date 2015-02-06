#include<stdio.h>
// NZEC is non zero exit code which happens in c when your main function does not return 0
int main(){
	int i,d=0;
	while(1){
		scanf("%d",&d);
		if(d!=42)
			printf("%d\n",d);
		else
			break;
	}
	return 0;
}