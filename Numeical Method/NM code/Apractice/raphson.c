#include<stdio.h>
#include<math.h>
float f(float x)
{
    float z;
    z= x*x+2*x-2;
    return z;
}
float df(float x)
{
    float p;
    p=2*x+2;
    return p;
}

int main(){
    float x0, x1;
    float e = 0.0001;
    int itr=1;
    printf("Enter initial guess: ");
    scanf("%f",&x0);
    while(fabs(f(x0))>e){
        x1=x0 - (f(x0)/df(x0));
        x0 = x1;
        printf("Root x%d = %f\n", itr,x0);
        itr++;
    }
    printf("Final root = %f",x0);
}