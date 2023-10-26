#include<stdio.h>
#define n 10
int a[]={12,23,32,34,55,45,22,10,7,5};

int selection(int a[])
{
    for(int i=0;i<n;i++)
    {
        for( int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int x = a[i];
                a[i]  = a[j];
                a[j]  = x;
             }
        }
    }
}
int main()
{
    selection(a);
    printf("selection array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}