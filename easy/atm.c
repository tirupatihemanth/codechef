#include<stdio.h>
float balance(int,float);
int main(){
	int i;
	float j;
	scanf("%d%f",&i,&j);
	printf("%.2f",balance(i,j));
	return 0;
}

float balance(int i,float j){
	if(i==0)
		return j;
	if(i%5!=0)
		return j;
	if(i>=j-0.5)
		return j;
	else
		return j-i-0.5;
}