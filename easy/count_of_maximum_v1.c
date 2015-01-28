//faster approach of the count_of_maximum

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

	int testcases, a[100],count,val,n,i;
	testcases = myscanf_int();
	while(testcases){
		n = myscanf_int();
		int freq[10001] = {};
		count = 0;
		val = 0;
		for(i=1;i<=n;i++){
			a[i] = myscanf_int();
			freq[a[i]]++;
			if(freq[a[i]]>count || (freq[a[i]] == count && a[i] == val)){
				count = freq[a[i]];
				val = a[i];
			}
			else if(freq[a[i]] == count && a[i]<val){
				count = freq[a[i]];
				val = a[i];
			}
		}
		printf("%d %d\n", val, count);

		testcases--;
	}
	return 0;
}