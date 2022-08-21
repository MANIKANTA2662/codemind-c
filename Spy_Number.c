#include<stdio.h>
int main()
{
    int n,d,n1,sum=0,pro=1;
    n1=n;
    printf("");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        pro=pro*d;
        n=n/10;
    }
    if(sum==pro)
    {
        printf("Spy Number",n1);
    }
    else{
        printf("Not Spy Number",n1);
    }
}