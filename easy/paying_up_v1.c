// This program shows a better way to solve this question(paying_up.c) or any general question where we have n numbers given 
// we can choose any r numbers without repetition and check whether we can get the required sum
// Think your selves other applications possible

#include <stdio.h>

int a[20], notes;

int sumamount(int idx, int sum){

	if(sum == 0)
		return 1;
	if(idx>=notes || sum<0)
		return 0;
	return(sumamount(idx+1, sum) || sumamount(idx+1, sum-a[idx]));
}



int main(){

	int testcases, amount,i,status;
	scanf("%d",&testcases);
	while(testcases){
		scanf("%d%d", &notes, &amount);
		for(i=0;i<notes;i++)
			scanf("%d",&a[i]);

		if(sumamount(0,amount))
			printf("Yes\n");
		else
			printf("No\n");
		testcases-=1;
	}
	return 0;
}

