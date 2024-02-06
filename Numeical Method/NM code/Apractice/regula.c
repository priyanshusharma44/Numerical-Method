#include<stdio.h>
#include<math.h>
float f(float x)
{
    float z;
    z= x*x*x-2*x-5;
    return z;
}
int main(){
    float x0,x1,x2;
    float e=0.001;
    int itr=1;
    
    printf("Enter the value of x1 and x2: ");
    scanf("%f%f",&x1,&x2);

    while(fabs(f(x0))>e){
        x0=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
        if(f(x0)*f(x1)>0){
            x1=x0;
        }else{
            x2=x0;
        }
        printf("%d. Root = %f\n",itr,x0);
        itr++;
    }
}