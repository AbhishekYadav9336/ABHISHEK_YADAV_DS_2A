#include<stdio.h>
#include<stdlib.h>
typedef struct stacknode
{
    struct stacknode*next;
    int info;
}node;
node*front=NULL;
node*rear=NULL;
node*ptr;
node*temp;
void enque()
{ int ch;
front=rear;
    printf("enter the 1 for exit and any other to continue");
    scanf("%d",&ch);
    while(ch!=1)
    {
      temp=(node*)malloc(sizeof(node));
      if(temp==NULL)
      {
        printf("overflow\n");
        return;
      }
       printf("enter the info\n");
      scanf("%d",&temp->info);
      temp->next=NULL;
      if(rear==NULL && front==NULL)
      {
        rear=temp;
        front=temp;
      }
        rear->next=temp;
        rear=temp;
       printf("enter the 1 for exit and any other to continue\n");
    scanf("%d",&ch);
    }
    printf("enque operation has been completed\n");
}
void deque()
    {
        if(front==NULL)
        {
            printf("queunderflow\n");
            return;
        }
        ptr=front;
        printf("the deleted element is\n%d\n",front->info);
        front=front->next;
        free(ptr);
    }
void display()
{ ptr=front;
    if(ptr==NULL)
    {
        printf("queue over flow\n");
        return;
    }
    printf("the the element in que are\n");
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->info);
        ptr=ptr->next;
    }
}
void main()
{
    int ch;
    do{
    printf("enter 0 for exit,1 for enque opr,2 for deque opr,3 for display\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 0:
          printf("exited sucessfully\n");
          break;
        case 1:
         enque();
         break;
        case 2:
         deque();
         break;
        case 3:
         display();
         break;
        default:
         printf("invailed syntex");
         
    }
    }while(ch!=0);
}