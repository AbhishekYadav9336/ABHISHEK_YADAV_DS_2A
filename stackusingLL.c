#include<stdio.h>
#include<stdlib.h>
typedef struct stacknode
{
    struct stacknode*next;
    int info;
}node;
node*top=NULL;
node*ptr;
node*temp;
void push()
{ int ch;
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
      temp->next=top;
            top=temp;
       printf("enter the 1 for exit and any other to continue\n");
    scanf("%d",&ch);
    }
    printf("push operation has been completed\n");
}
void pop()
    {
        if(top==NULL)
        {
            printf("stackunder flow\n");
            return;
        }
        ptr=top;
        top=top->next;
        printf("the deleted element is\n%d\n",ptr->info);
        free(ptr);
    }
void display()
{ ptr=top;
    if(ptr==NULL)
    {
        printf("stack over flow\n");
        return;
    }
    printf("the the element in stack are\n");
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
    printf("enter 0 for exit,1 for push opr,2 for pop opr,3 for display\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 0:
          printf("exited sucessfully\n");
          break;
        case 1:
         push();
         break;
        case 2:
         pop();
         break;
        case 3:
         display();
         break;
        default:
         printf("invailed syntex");
         
    }
    }while(ch!=0);
}