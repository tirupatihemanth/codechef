#include <stdio.h>
#include <string.h>

void evaluate(char *);
int getholes(char);

int main(){

	int testcases,i;
	char str[100];
	scanf("%d",&testcases);
	for(i=0;i<testcases;i++){
		scanf("%s",str);
		evaluate(str);
	}
	return 0;
}

void evaluate(char *str){
	int i,holes=0;
	for(i=0;i<strlen(str);i++){
		holes+=getholes(str[i]);
	}
	printf("%d\n",holes);
}

int getholes(char alphabet){

	switch(alphabet){

		case 'A':
			return 1;
		case 'B':
			return 2;
		case 'D':
			return 1;
		case 'O':
			return 1;
		case 'P':
			return 1;
		case 'Q':
			return 1;
		case 'R':
			return 1;		
		default:
			return 0;
	}
}