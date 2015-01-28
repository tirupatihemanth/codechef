#include <stdio.h>
#include <stdlib.h>

int main(){

	int temp,i;
	while(1){

		scanf("%d",&temp);
		int a[temp],b[temp];
		if(temp!=0){
			for(i=0;i<temp;i++)
				scanf("%d",&a[i]);
			for(i=0;i<temp;i++){
				b[a[i]-1]= i+1;
			}
			for(i=0;i<temp;i++){
				if(a[i]!=b[i]){
					printf("not ambiguous\n");
					break;
				}
				else if(a[i] == b[i] && i == temp-1){
					printf("ambiguous\n");
					break;
				}
			}
		}
		else
			break;
	}
	return 0;
}