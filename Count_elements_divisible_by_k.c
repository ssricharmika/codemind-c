A#include<stdio.h>
int main()
{
    int n,i,k,c=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%k==0)
        {
            c+=1;
        }
    }
    printf("%d",c);
}