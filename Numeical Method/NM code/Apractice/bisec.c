#include<stdio.h>
#include<math.h>
float f(float x){
    float f;
    f = x*x*x-2*x-5;
    return f;
}

int main(){
    float x1,x2,x0;
    float e = 0.0001;

    printf("Enter the value of x1 and x2: ");
    scanf("%f%f",&x1,&x2);

    if(f(x1)*f(x2)>0){
        printf("\nThe values are not valid");
        return 0;
    }

    x0 = (x1+x2)/2;

    while(fabs(f(x0))>e){
        if(f(x0)*f(x1)>0){
            x1 = x0;
        }else{
            x2 = x0;
        }
        x0 = (x1+x2)/2; 
        printf("x1=%f\tx2=%f\tx0=%f\tRoot=%f\n",x1,x2,x0,f(x0));
    }

}