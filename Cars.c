#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d",&n);
    if(n>=4)
        {
        if(n%4==0)
       { 
        b=n/4;
        printf("%d",b);
       }
        else if(n%4>0)
      {
        b=(n/4)+1;
        printf("%d",b);
          
      }
    }
    else
    printf("1");
}