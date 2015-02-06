#include<stdio.h>
int main(){
	long int n,k,val,ans=0;
	scanf("%ld%ld",&n,&k);
	long int i;
	for(i=0;i<n;i++){
		scanf("%d",&val);
		if(val%k==0)
			ans++;
	}
	printf("%ld",ans);
	return 0;
}