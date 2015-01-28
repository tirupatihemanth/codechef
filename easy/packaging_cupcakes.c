#include <stdio.h>


int myscanf_int(){

	register int temp,input=0;
	while(1){
		temp = getchar_unlocked();
		if(temp == '\n' || temp == ' ')
			break;
		else
			input = input*10+temp-'0';
	}
	return input;

}


int main(){

	int testcases,i,n,left,size;
	testcases = myscanf_int();
	while(testcases){
		left = 0;
		n = myscanf_int();

		printf("%d\n",n/2+1);
		testcases-=1;
	}	
	return 0;
}