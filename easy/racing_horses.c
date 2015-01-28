#include <stdio.h>
#include <limits.h>
int compare_function(void *a, void *b){

    return *(int *)a - *(int *)b;

}

int main(){

    int testcases;
    scanf("%d",&testcases);
    int n,i;
    int min;
    while(testcases--){
        min = INT_MAX;
        scanf("%d",&n);
        int skill[n];
        for(i=0;i<n;i++){
            scanf("%d",skill+i);
        }

        qsort(skill,n,sizeof(int),compare_function);
        for(i=0;i<n-1;i++){
            if(skill[i+1]-skill[i]<min){
                min = skill[i+1]-skill[i];
            }
        }

        printf("%d\n",min);
    }
    return 0;
}
