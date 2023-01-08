#include<stdio.h>
int main()
{
    int n,m,sum=0,i,j;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<n;i++)
{
   for(j=0;j<m;j++)
   {
       if(i==0 || j==0 || i==(n-1) ||j==(n-1))
       {
           sum=sum+a[i][j];
       }
   }
}
printf("%d",sum);
}