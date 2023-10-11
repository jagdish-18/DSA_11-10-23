#include<stdio.h>
int main()
{
    int i,x,n;
    printf("enter size of Array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);

    }
    printf("\nswapping number is..");
        x = a[0];
        a[0] = a[n-1];
        a[n-1] = x;
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    

}