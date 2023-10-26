#include<stdio.h>
#define n 10
int a[] = {79,15,5,27,25,7,17,55,37,69};

int bubble( int a[])
{
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int x = a[j];
                a[j]  = a[j+1];
                a[j+1]= x;
            }
        }
       }
}

int main()
{
    bubble (a);
    printf("shorted array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
