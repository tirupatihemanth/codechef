//problem seems to be lengthy but it can be donw within time limit using generalisation

#include <stdio.h>

int main(){
	register int testcases=0,n,player,k,temp;
	while(1){
		temp = getchar_unlocked();
		if(temp == '\n')
			break;
		else
			testcases = testcases*10+temp-'0';
	}

	while(testcases){
		n=0;
		while(1){
			temp = getchar_unlocked();
			if(temp == '\n')
				break;
			else{
				n = n*10+temp-'0';
			}
		}
		if(n%2 == 0)
			printf("ALICE\n");
		else
			printf("BOB\n");
		testcases-=1;	
	}
	return 0;
}