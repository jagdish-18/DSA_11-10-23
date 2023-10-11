#include<stdio.h>
int main()
{
    int a[5],b[5],i,j,merge[10];
    for(i=0;i<5;i++)
    {
        printf(" enter array one is:");
        scanf("%d",&a[i]);
        merge[i]=a[i];
    }
    for(j=0;j<5;j++)
    {
        printf("enter array two is:");
        scanf("%d",&b[j]);
        merge[i]=b[j];
        i++;
    }
    printf("merge array is:\n");
    for(j=0;j<10;j++)
    {
        printf("%d ",merge[j]);
    }
}