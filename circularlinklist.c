// simple linklist
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertEnd(int val)
{
    
     struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        return;  
    }
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=head;
    return;

    
}

void deleteEnd()
{
    struct node *ptr = head;
    struct node *prev;
    if(head == NULL)
    {
        printf("list is Already empty.....");
        return;
    }
    else if(head->next == head)
    {
        head = ptr;
        free(ptr);
        return;
    }
    while(ptr->next!=head)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    
    prev->next=head;
    free(ptr);
    return;
}

void display()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("list is empty.....\n");
    }
    else
    {
        while(ptr->next!=head)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;

        }
        printf("%d ",ptr->data);
    }
    printf("\n");
}

void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        return;  
    }
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=head;
    head=temp;
    return;

}


void deletefirst()
{
    struct node *ptr = head;
    struct node *prev=head;

    if(head == NULL)
    {
        printf("list is Already empty.....");
        return;
    }
    else if(ptr->next == head)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=head->next;
    head=prev->next;
    free(prev);
    return;

}

void midinsert(int val,int position)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next =NULL;
    while(ptr->data!=position)
    {
        ptr=ptr->next;
    
    }
    temp->next=ptr->next;
    ptr->next=temp;
    return;
    
}

void middelete(int position)
{
      struct node *ptr=head;
      struct node *prev;

      while(ptr->data!=position)
      {
        prev=ptr;
        ptr=ptr->next;
      }
      prev->next=ptr->next;
      free(ptr);
      return;
      
}

int main()
{
    int ch;
    printf("1.display\n");
    printf("2.insertEnd\n");
    printf("3.deleteEnd\n");
    printf("4.insertfirst\n");
    printf("5.deletefirst\n");
    printf("6.midinsert\n");
    printf("7.middelete\n");
    printf("0.the end\n");
    do
    {
        printf("\nEnter your ch:");
        scanf("%d",&ch);
        int data,position;
        switch(ch)
        {
            case 1:
            display();
            break;

            case 2:
            printf("enter your data:");
            scanf("%d",&data);
            insertEnd(data);
            break;
            
            case 3:
            deleteEnd();
            break;

            case 4:
            printf("enter your data:");
            scanf("%d",&data);
            insertfirst(data);
            break;

            case 5:
            deletefirst();
            break;

            case 6:
            printf("enter mid insert:");
            scanf("%d",&data);
            printf("enter position:");
            scanf("%d",&position);
            midinsert(data,position);
            break;

            case 7:
            printf("enter position:");
            scanf("%d",&position);
            middelete(position);
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