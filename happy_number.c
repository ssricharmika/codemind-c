#include<stdio.h>
int main()
{
    int n,temp,r,sum=0,i;
    scanf("%d",&n);
    temp=n;
    while(sum!=1 && sum!=4){
        sum=0;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+(r*r);
            temp=temp/10;
        }
        temp=sum;
    }
    if(sum==1)
    {
        printf("True");
    }
    else{
        printf("False");
    }
}