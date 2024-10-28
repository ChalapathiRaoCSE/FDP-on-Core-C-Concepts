#include<stdio.h>
int main()
{
    int n;
    printf("\n Enter range of pattern: ");
    scanf("%d",&n);
    printf("\n Square Pattern\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("\n Rombus Pattern 2\n");
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            printf("  ");
        }
        for(int j=0;j<i;j++)
        {
            printf(" *");
        }
        for(int j=0;j<i-1;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(int i=n;i>0;i--)
    {
        for(int j=i;j<n;j++)
        {
            printf("  ");
        }
        for(int j=0;j<i;j++)
        {
            printf(" *");
        }
        for(int j=0;j<i-1;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    int star=1;
    int space=n-1;
    printf("\n Rombus Pattern 3\n");
    for(int i=1;i<=((2*n)-1);i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)
        {
            printf("* ");
        }
        if(i<n)
        {
            star++;
            space--;
        }
        else
        {
            star--;
            space++;
        }
        printf("\n");
    }

    return 0;
}
