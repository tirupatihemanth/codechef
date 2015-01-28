#include <stdio.h>

int main(){

	int n,i,s_p1=0,s_p2=0,lead=0,lead_player,temp1,temp2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&temp1,&temp2);
		s_p1+=temp1;
		s_p2+=temp2;
		if(s_p1-s_p2>lead){
			lead = s_p1-s_p2;
			lead_player = 1;
		}
		else if(s_p2-s_p1>lead){

			lead = s_p2-s_p1;
			lead_player = 2;
		}
	}
	printf("%d %d\n",lead_player,lead);
	return 0;
}