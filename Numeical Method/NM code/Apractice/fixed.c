#include<stdio.h>
#include<math.h>
float f(float x)
{
  float z;
  z=x*x*x+x*x-1;
  return z;
}
float g(float x)
{
  return (1/sqrt(1+x));
}

int main(){
    float x1, x0;
    float e = 0.0001;
    int itr=1;

    printf("Enter initial guess of x0: ");
    scanf("%f",&x0);

    while(fabs(f(x0))>e){
        x1=g(x0);
        x0=x1;

        printf("Root x%d = %f\n",itr,x0);
        itr++;
    }
    printf("Final root = %f",x0);

}