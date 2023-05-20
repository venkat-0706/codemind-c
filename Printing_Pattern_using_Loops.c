#include<stdio.h>
int main()
{
    int n,a,i,j;
    scanf("%d", &n);
    
    for(int i=1;i<=(2*n)-1;i++)
    {
        a=n;
        for(int j=1;j<=(2*n)-1;j++)
        {
            printf("%d ",a);
            if(j<i)
            {
                a--;
            }
            if(j>((2*n)-1-i))
            {
                a++;
            }
        }
        printf("
");
    }
}

