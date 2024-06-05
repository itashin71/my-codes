#include <stdio.h>
int main()
{

    int i,j;
    int a[2][3];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("your matrix is: \n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
            printf("\n");
    }
    int sum1=0,sum2=0,sum3=0;
    for(j=0;j<1;j++)
    {
        for(i=0;i<2;i++)
        {
            sum1 = sum1 + a[i][j];
        }
    }
printf("the sum of first column's elements are: %d\n",sum1);

for(j=1;j<2;j++)
    {
        for(i=0;i<2;i++)
        {
            sum2 = sum2 + a[i][j];
        }
    }
      printf("the sum of 2nd column's elements are: %d\n",sum2);
for(j=2;j<3;j++)
    {
        for(i=0;i<2;i++)
        {
            sum3 = sum3 + a[i][j];
        }
    }
  printf("the sum of 3rd column's elements are: %d\n",sum3);
}
