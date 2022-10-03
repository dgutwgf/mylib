#include<stdio.h>

void sort(int a[],int len)
{
    for(int i=0;i<len;i++)
        for(int j=0;j<len-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]^a[j+1];
                a[j+1]=a[j]^a[j+1];
                a[j]=a[j]^a[j+1];
            }
        }
}

int main()
{
    int a[5]={3,4,2,6,0};
    sort(a,5);
    for(int i=0;i<5;i++)
    {
        printf("%d-",a[i]);
    }
}