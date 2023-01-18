#include<stdio.h>
int main()
{
    int n,r,q,c=0;
    scanf("%d",&n);
    q=n;
    while(n!=0)
    {
        r=n%10;
        c=c*10+r;
        n=n/10;
    }
    printf("%d",c);
}