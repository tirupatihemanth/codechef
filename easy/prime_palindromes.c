#include <stdio.h>
#include <math.h>
#include <string.h>

int isprime(n){

	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i == 0)
			return 0;
	}
	return 1;

}

int ispalindrome(n){

	char str[7];
	int i;
	sprintf(str,"%d",n);
	//printf("%d %s size\n",strlen(str),str);
	for(i=0;i<=strlen(str)/2;i++){
		if(str[i]!=str[strlen(str)-1-i])
			return 0;
	}
	return 1;

}


int main(){
	int n;
	scanf("%d",&n);
	while(1){
		if(n%2!=0 && n%3!=0 && n%4!=0){
			if(ispalindrome(n)){
				if(isprime(n)){
					printf("%d\n",n);
					break;
				}
			}
		}
		n++;
	}

	return 0;
}
