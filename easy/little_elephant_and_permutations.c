#include <stdio.h>

int main(){
    int testcases;
    scanf("%d",&testcases);
    int n,i,num,num1;
    while(testcases--){
        num=0;
        num1 = 0;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",arr+i);
        }
        
        if(n == 1){
            printf("YES\n");
            continue;
        }

        for(i=0;i<n;i++){
            
            if(i!=n-1){
                if(arr[i]>arr[i+1]){
                    num1++;
                }
            }

            if(arr[i]>i+1){
                num++;
            }
        }

        if(num == num1){
            printf("YES\n");
        }
        else{
            printf("NO\n");   
        }

    }
}
