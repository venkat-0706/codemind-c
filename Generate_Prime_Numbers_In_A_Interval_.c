#include<stdio.h>
int main()
{
    int n1,n2,i,j,temp;
    scanf("%d %d",&n1,&n2);
    for(i=n1+1;i<n2;i++)
    {
        temp=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
        {
            printf("%d
",i);
        }
    }
    return 0;
}