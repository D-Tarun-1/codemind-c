#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d%d",&n,&x);
    for(i=1;i<=x;i++)
    {
        if(i%2!=0)
        {
           printf("%d x %d = %d
",n,i,n*i);
        }
    }
}