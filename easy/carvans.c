#include <stdio.h>
#include <limits.h>

int scanf_int(){
    register int num=0;
    register var;
    while(((var = getchar_unlocked())!=' ' )&& var!='\n'){
        num= num*10+var-'0';
    }
    return num;
}
int main(){
    int testcases;
    testcases = scanf_int();
    int n,i,ans,min;

    while(testcases--){
        min = INT_MAX;
        ans=0;
        n = scanf_int();
        int speed[n];
        
        for(i=0;i<n;i++){
            speed[i] = scanf_int();
        }
        
        for(i=0;i<n;i++){
            if(speed[i]<=min){
                min = speed[i];
                ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
