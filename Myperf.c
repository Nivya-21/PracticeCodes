#include<stdio.h>
int main()
{
    int a[10],temp,i,j,centre,n;
    
    scanf("%d",&n);
    int op[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;


          }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
    
        centre=(n-1)/2;
        
    
    op[centre]=a[0];
    j=1;
    for(int i=1;i<=centre;i++)
    {
        op[centre+i]=a[j++];
        
        op[centre-i]=a[j++];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",op[i]);
    }
    
    
}