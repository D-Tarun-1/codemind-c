#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,x;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    x=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",x);
}