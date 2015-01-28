#include <stdio.h>

//This program calculates factorial for any integer but it doesn't calculate factorial for a big integer(i.e out of range for int)
void factorial(int);

int main(){

	int i,n,testcases;
	scanf("%d",&testcases);

	for(i=0;i<testcases;i++){
		scanf("%d",&n);
		factorial(n);
	}
	return 0;
}

void factorial(int n){

	int a[200],x,length = 1,temp=0,i;
	a[0] = 1;
	while(n>=2){
		for(i=0;i<length;i++){
			x = a[i]*n+temp;
			a[i] = x%10;
			temp = x/10;
		}
		while(temp!=0){
			a[i] = temp%10;
			temp/=10;
			length++;
			i++;
		}
		n = n-1;
	}
	for(i=length-1;i>=0;i--){
		printf("%d",a[i]);
	}
	printf("\n");
}