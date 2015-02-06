#include <stdio.h>

int main(){
    
    int a,n,k;
    scanf("%d%d%d",&a,&n,&k);
    int i;

    /*
    while(a--){
        for(i=0;i<k;i++){
            if(chamber[i]<n){
                chamber[i]++;
                break;
            }
            else{
                chamber[i] = 0;
            }
        }
    }
    */


    for(i=0;i<k;i++){
        if(a !=0){
            printf("%d ",a%(n+1));
            a /= n+1;
        }
        else{
            printf("0 ");
        }
    }

}
