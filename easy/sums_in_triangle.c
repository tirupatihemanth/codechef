#include <stdio.h>

int main(){

	int n,i;
	scanf("%d",&n);
	int a[n*(n+1)/2];
	for(i=0;i<n*(n+1)/2;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n*(n+1)/2;i++)
		printf("%d",a[i]);
	return 0;

}