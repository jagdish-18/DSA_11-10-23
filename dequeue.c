//dequeue
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
int rearinsert()
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
int frontdelet()
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
int frontinsert()
{
    int data;
    printf("enter your data:");
    scanf("%d",&data);
    if(f==0)
    {
        printf("do not insert this position...\n");

    }
    else
    {
        if(f<0)
        {
            f=r=0;
            a[r] = data;
        }
        else
        {
            --f;
            a[f] = data;
        }
    }
}
int reardelet()
{
    if(f<0)
    {
        printf("array is.....");

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
            --r;
         }
         printf("\nvalue deleted:");       
    }
}

int main()
{
    int ch;
    printf("1.display\n");
    printf("2.rearinsert\n");
    printf("3.frontdelet\n");
    printf("4.frontinsert\n");
    printf("5.reardelet\n");
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
            rearinsert();
            break;

            case 3:
            frontdelet();
            break;

            case 4:
            frontinsert();
            break;

            case 5:
            reardelet();
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



