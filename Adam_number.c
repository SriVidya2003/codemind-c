#include<stdio.h>
int main()
{
    int n,r,s,sum=0,prod=0,temp,a=0;
    scanf("%d",&n);
    s=n*n;
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    prod=sum*sum;
    while(prod>0)
    {
    r=prod%10;
    a=a*10+r;
    prod=prod/10;
}
if(a==s)
printf("True");
else
printf("False");
return 0;
}