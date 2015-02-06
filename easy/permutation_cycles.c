#include <stdio.h>

int main(){

    int n,i,k,l;
    scanf("%d",&n);
    int permutation[n+1];
    int stat[n+1],j;
    permutation[0] = stat[0] = 0;
    int ans=0;
    int cycles[n][n];
    for(i=1;i<=n;i++){
        scanf("%d",&permutation[i]);
        stat[i] = 0;
    }

    k=0;l=0;
    for(i=1;i<=n;i++){
        if(stat[i]==0){
            l=0;
            j = i;
            do{
                cycles[k][l++] = j;
                //printf("%d ",j);
                stat[j] = 1;
                j = permutation[j];
            }
            while(i!=j);
            cycles[k][l++] = i;
            cycles[k][l] = -1;
            //printf("%d\n",i);
            ans++;
            k++;
        }
    }
    printf("%d\n",ans);

    for(i=0;i<ans;i++){
        l=0;
        while(cycles[i][l]!=-1){
            printf("%d ",cycles[i][l++]);
        }
        printf("\n");
    }
    return 0;
}
