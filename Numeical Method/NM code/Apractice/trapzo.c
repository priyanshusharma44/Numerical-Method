#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x) {
    float z;
    z = x * x * x + 2;
    return z;
}

int main(){
    float a, b, k, h, c, v;
    printf("Enter the value of upper limite: ");
    scanf("%f",&b);
    printf("Enter the value of lower limite: ");
    scanf("%f",&a);
    printf("Enter the value of k: ");
    scanf("%f", &k);

    h = (float)(b-a)/k;

    c = f(a) + f(b);

    for (int i = 1; i < k; i++)
    {
        c+= 2*f(a + h * i);
    }

    v = (h/2)*c;
    
    printf("\nAnswer = %f", v);

}