#include <stdio.h>

int max(int a, int b, int c){
    if(a>=b && b>=c){
        return a;
    }
    if(a<=b && b<=c){
        return c;
    }
    return b;
}

int compare(void *a, void *b){

    return (*(int *)a - *(int *)b);
}

/*
void print_exact(int arr[], int n, int i, int prev, int sum){
    
    if(i==n){
        printf("%d\n",sum);
        return;
    }

    if(arr[i] == arr[i+1]){
        if( prev != arr[i] ){
            sum++;
            prev = arr[i];
            print_exact(arr, n, i+1, prev, sum);
            printf("%d\n",arr[i]);
        }
    }
    else{
        print_exact(arr, n, i+1, arr[i], sum);
    }

}
*/

int main(){

    int i,n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    int arr[n1+n2+n3];
    
    for(i=0;i<n1+n2+n3;i++){
        scanf("%d",arr+i);
    }
    
    qsort(arr, n1+n2+n3, sizeof(int), compare);
    
    int arr1[max(n1,n2,n3)];
    //print_exact(arr, n1+n2+n3, 0, -1, 0); 
    int k=0,sum=0,prev = -1;
    for(i=0;i<n1+n2+n3-1;i++){
        if(arr[i] == arr[i+1]){
            if(prev!=arr[i]){
                sum++;
                arr1[k++] = arr[i];    
                prev = arr[i];
            }

        }
    }
    arr1[k] = -1;
    i=0;
    printf("%d\n", sum);
    while(1){
        if(arr1[i] == -1){
            break;
        }
        else{
            printf("%d\n",arr1[i]);
        }
        i++;
    }
    
    return 0;
}
