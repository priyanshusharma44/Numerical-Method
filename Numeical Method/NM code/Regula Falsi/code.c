// bisecton
// raphson
// regula falsi
// secant
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float x)
{
    float z;
    z= x*x*x-2*x-5;
    return z;
}
int main()
{
    float x1, x2, x0;
    float e=0.001;
    int itr=1;
    printf("Enter the value of x1 and x2:\n");
    scanf("%f%f", &x1, &x2);
    while(fabs(f(x0))>e)
    {
        x0=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
        if (f(x1)*f(x0)>0)//positive vayo vana x1 ko value x0 hunxa
        {
            x1=x0;
        }
        else //negative x2 value x0
        {
            x2=x0;
        }
        printf("Root=%f\n",x0 );
    }
    return 0;
}