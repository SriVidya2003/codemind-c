#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++){
            if(i==j){
                printf("0");
            }
            else
            printf("x");
        }
        printf("
");
    }
    return 0;
}