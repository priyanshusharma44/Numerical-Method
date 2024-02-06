#include<stdio.h>
#include<math.h>
float f(float x){
     float z;
     z=x*x*x-2*x-5;
     return z;
}

int main(){
    float x1,x2,x0;
    float e=0.0001;

    to:
    printf("Enter the value of x1 and x2: ");
    scanf("%f %f",&x1,&x2);

    if(f(x1)*f(x2)>0){
        printf("Wrong initial guess of x1 and x2");
        goto to;
    }
    x0 = (x1+x2)/2;
    while(fabs(f(x0))>e){
        if(f(x1)*f(x0)>0){
            x1=x0;
        }else{
            x2=x0;
        }
        x0 = (x1+x2)/2;
        printf("x1=%f\tx2=%f\tx0=%f\tf(x0)=%f\n",x1,x2,x0,f(x0));
    }
    printf("Root = %f",x0);
}