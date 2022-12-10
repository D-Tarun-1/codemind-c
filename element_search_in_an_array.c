#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int z,c=0;
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(a[i]==z)
        {
            c++;
            break;
        }
    }
    if(c!=0)
    {
    printf("True");
    }
    else
    {
    printf("False");
    }
}
    
    