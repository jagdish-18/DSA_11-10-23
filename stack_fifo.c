// stack -> fifo
#include<stdio.h>
#define n 5
int a[n],top=-1;

int display()
{
    if(top<0)
    {
        printf("Array is empty.....");
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            printf("%d ",a[i]);
        }
    }
     
}
int insertend(int val)
    {
        if(top>=n-1)
        {
            printf("stack is overflow\n");
        }
        else
        {
            top++;
            a[top] =val;
        }
    }

 int deletend()
 {
    if(top<0)
    {
        printf("Array ........");
    }
    else
    {
        top--;
    }

 }

int insertfirst(int val) 
{
    if(top>=n-1)
    {
        printf("stack is overflow\n");
    }
    else
    {
        top++;
        for(int i=top;i>=0;i--)
        {
            a[i] = a[i-1];
        }
            a[0] = val;
    }
} 
 int deletfirst()
 {
    if(top<0)
    {
        printf("araay .....");
    }
    else
    {
        for(int i=0;i<top;i++)
        a[i] = a[i+1];
        top--;
    }
 } 


int main()
{
     int ch;
     {
        printf("================");
        printf("\n1.display:");
        printf("\n2.insertend:");
        printf("\n3.deletend:");
        printf("\n4.insertfirst:");
        printf("\n5.deletfirst:");
        printf("\n thank you ");
        printf("\n===================");
         
       do
       {
          printf("\n enter your choice:");
          scanf("%d",&ch);
          int val;
  
          switch(ch)
          {
              case 1:
              display();
              

              case 2:
              printf("enter your array:");
              scanf("%d",&val);
              insertend(val);
              break;

              case 3:
              deletend();
              break;
              

              case 4:
              printf("enter your array:");
              scanf("%d",&val);
              insertfirst(val);
              break;

              case 5:
              deletfirst();
              break;


              case 6:
              printf("thank you:");
              break;

              default:
              break; 
          }  

       }
       while(ch!=0);
       return 0;
         
    
     }   
}

        
       