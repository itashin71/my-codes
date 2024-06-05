#include <stdio.h>
int main()
{

    int i,j;
    int ara[2][3];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    printf("The transpose matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",ara[j][i]);
        }
        printf("\n");
    }
        return 0;
}
