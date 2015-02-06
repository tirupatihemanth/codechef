#include <stdio.h>
#include <math.h>

int main(){

    int testcases;

    scanf("%d",&testcases);
    
    float p,s,l,b,h;
    while(testcases--){
    
        scanf("%f%f",&p,&s);
 
        //actually both +- are possible below i.e -b+-sqrt(b^2-4ac) is the numerator but we know s>0 so if we put - we get the min lengh of l and then b and both should be equal as similar differential equation will be obtained but the third is determined by the conditions given as l and b are min we can surely get the third value as positive
        l = b = (p-sqrt(p*p-24*s))/12;
        h = p/4-2*l;
        printf("%.2f\n",l*b*h);
    }

    return 0;
}
