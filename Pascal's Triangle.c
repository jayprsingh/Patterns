#include<stdio.h>

int main()
{
    int rows,i,j,k,coef=1;
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(j=1;j<=rows-i;j++)
            printf("   ");
        for(k=0;k<=i;k++)
        {
            if(k==0||i==0)
                coef=1;
            else
                coef=coef*(i-k+1)/k;
            printf("%4d  ",coef);
        }
        printf("\n");
    }
    return 0;
}
