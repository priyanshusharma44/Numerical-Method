#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x) {
    float z;
    z = x * x * x + 2;
    return z;
}

int main() {
    int i, a, b, k;
    float c, h, v;

    printf("Enter the value of lower limit: ");
    scanf("%d", &a);
    
    printf("Enter the value of upper limit: ");
    scanf("%d", &b);
    
    printf("Enter the value of k: ");
    scanf("%d", &k);
    
    h = (float)(b - a) / k;

    c = f(a) + f(b);
    for (i = 1; i < k; i++) {
        c += 2 * f(a + i * h);
    }
    
    v = (h / 2) * c;
    printf("The value of integration is: %f\n", v);

    return 0;
}