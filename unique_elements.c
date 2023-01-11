#include<stdio.h>
int main()
    {
      int n,a[20],i,j,c,k;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
          for(j=i+1;j<n;j++)
          {
              if(a[i]==a[j])
              {
                  for(k=j;k<n;k++)
                  {
                      a[k]=a[k+1];
                  }
                  n--;
                  j--;
              }
          }
      }
      for(i=0;i<n;i++)
      {
          printf("%d ",a[i]);
      }
    }