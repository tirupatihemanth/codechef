#include<stdio.h>
int main(){
	int n,i,ans=0;
	long int val=5,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%ld",&k);
		val=5;
		ans=0;
		while(k/val!=0){
			ans+=(k/val);
		val*=5;
		}
		printf("%d\n",ans);
	}
	return 0;
}