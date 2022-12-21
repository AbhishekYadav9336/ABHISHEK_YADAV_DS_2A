//creation of doubllylinklist
#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    struct nodetype*prev;
    int info;
    struct nodetype*next;
}node;
node*start;
node*ptr;
node*temp;
node*prev;
void creat()
{
int ch;
printf("enter the choice  1 for exit and any other to continue");
scanf("%d",&ch);
while(ch!=1)
{
temp=(node*)malloc(sizeof(node));
if(temp==NULL)
{
    printf("overflow");
    return;
}
printf("enter the info");
scanf("%d",&temp->info);
temp->next=NULL;
if(start==NULL)
{
    start=temp;
    temp->prev=NULL;
    printf("first node is create sucessfully\n");
}
else{
    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
    }
    printf("enter 1 to exit and any no. to continue further");
    scanf("%d",&ch);
}
}

void main()
{
    int ch;
    printf("enter 1 for creat");
    scanf("%d",&ch);
    
        switch(ch)
        {
            case 1:
             creat();
             break;
             default:
             printf("invailed syntex");
        }
    }