
#include <stdio.h>
int main()
{
    int i,j;
    int a[3][3];
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("your matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        } printf("\n");
    }
    for(i=0,j=0;i<3,j<3;i++,j++)
    {
        if(i==j)
        {
            sum= sum + a[i][j];
        }
    }
    printf("trace is %d",sum);









}
