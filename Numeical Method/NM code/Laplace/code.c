#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float fx1(float u2, float u4){
    float u1;
    u1 = (125+u2+u4)/4;
    return u1;
}
float fx2(float u3, float u1){
    float u2;
    u2 = (150+u3+u1)/4;
    return u2;
}
float fx3(float u2, float u4){
    float u3;
    u3 = (400+u2+u4)/4;
    return u3;
}
float fx4(float u1, float u3){
    float u4;
    u4 = (375+u1+u3)/4;
    return u4;
}
int main(){
    int itr=0;
    float u1,u2,u3,u4,e1,e2,e3,e4,tempu1,tempu2,tempu3,tempu4;
    float e = 0.0001;
    printf("Enter initial guess: ");
    scanf("%f %f %f",&u2,&u3,&u4);
    printf("itr \tu1 \t\tu2 \t\tu3 \t\tu4 \t\te1 \te2 \te3 \te4");
    do
    {
        tempu1 = u1;
        tempu2 = u2;
        tempu3 = u3;
        tempu4 = u4;

        u1 = fx1(u2,u4);
        u2 = fx2(u1,u3);
        u3 = fx3(u2,u4);
        u4 = fx4(u1,u3);

        ++itr;

        e1 = fabs((u1-tempu1)/u1);
        e2 = fabs((u1-tempu1)/u2);
        e3 = fabs((u1-tempu1)/u3);
        e4 = fabs((u1-tempu1)/u4);

        printf("\n%d\t%0.4f \t%0.4f \t%0.4f \t%0.4f \t%0.4f \t%0.4f \t%0.4f \t%0.4f",itr,u1,u2,u3,u4,e1,e2,e3,e4);
    } while (e1>e && e2>e && e3>e && e4>e);

    printf("\n\n=====================Output=====================\n");
    printf("u1 = %f\t u2 = %f\t u3 = %f\t u4 = %f\t",u1,u2,u3,u4);
    printf("Iteration = %d",itr);
    return 0;
    
}