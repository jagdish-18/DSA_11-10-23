//simple queue
#include<stdio.h>
#define n 5
int a[n],f=-1,r=-1; 
int display()
{
    if(f<0)
    {
        printf("array is empty....");
    }
    else
    {
        for(int i=f;i<=r;i++)
        printf("%d ",a[i]);
    }
}
int insert()
{
    int data;
    printf("enter your data:");
    scanf("%d",&data);
    if(r>n-1)
    {
        printf("\nfull queue\n");
    }
    else
    {
        if(f<0)
        {
            f=r=0;
            a[r]=data;
        }
        else
        {
            r++;
            a[r]=data;
        }
    }
}
int delet()
{
    if(f<0)
    {
        printf("array.......");

    }
    else
    {
        if(f==r)
         {
            f=-1;
            r=-1;
         }
         else
         {
            f++;
         }
         printf("\nvalue deleted:");

    }
}
int main()
{
    int ch;
    printf("1.display\n");
    printf("2.insert\n");
    printf("3.delet\n");
    printf("0.the end\n");
    do
    {
        printf("\nenter your ch:");
        scanf("%d",&ch);
        int data;
        switch(ch)
        {
            case 1:
            display();
            break;

            case 2:
            insert();
            break;

            case 3:
            delet();
            break;

            case 0:
            printf("close:");
            break;

            default:
            printf("wrong ch:");
            break;

        }
    }
    while(ch!=0);
    
}



