#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        for (int i=n;i>=1;i--){
            printf("%d ",i);
        }
        printf("
");
    }
    
    return 0;
}