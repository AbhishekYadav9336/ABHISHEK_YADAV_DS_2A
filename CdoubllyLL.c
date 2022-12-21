//creation of circulardoubllylinklist
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
printf("enter the choice  1 for exit and any other to continue\n");
scanf("%d",&ch);
while(ch!=1)
{
temp=(node*)malloc(sizeof(node));
if(temp==NULL)
{
    printf("overflow\n");
    return;
}
printf("enter the info");
scanf("%d",&temp->info);
temp->next=NULL;
if(start==NULL)
{
    start=temp;
    temp->prev=start;
    temp->next=start;
    printf("first node is create sucessfully\n");
}
else{
    ptr=start->prev;
    ptr->next=temp;
    temp->next=start;
    temp->prev=ptr;
    start->prev=temp;
    }
    printf("enter 1 to exit and any no. to continue further\n");
    scanf("%d",&ch);
}
}
void display()
{
    if(start==NULL)
    {
        printf("under flow\n");
        return;
    }
    else{
        ptr=start;
        printf("the entered elements are\n");
        while(ptr->next!=start)
        {
            printf("%d\n",ptr->info);
            ptr=ptr->next;
        }
        //printf("%d",ptr->info);
    }
}

void main()
{
    int ch;
do{
    printf("enter 0 for exit 1 for creat,2 for display\n");
    scanf("%d",&ch);
        switch(ch)
        {
            case 0:
             printf("you have exited sucessfully\n");
             break;
            case 1:
             creat();
             break;
            case 2:
             display();
             break;
             default:
             printf("invailed syntex\n");
        }
    }while(ch!=0);
}