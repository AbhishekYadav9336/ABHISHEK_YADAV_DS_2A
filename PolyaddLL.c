#include<stdio.h>
#include<stdlib.h>
typedef struct polynode
{
    int coff,expo;
    struct polynode*next;

}node;
node*temp;
node*ptr1;
node*ptr2;
node*ptr3;
node*st1;
node*st2;
node*st3;
void creat(st)
{ int a,b,ch;
printf("enter the choice");
scanf("%d",&ch);
temp=(node*)malloc(sizeof(node));
if(temp==NULL)
{
    printf("overflow");
    return;
}
    printf("enter the coffecient and\nexponent of expression");
    scanf("%d%d",&a,&b);
    temp->coff=a;
    temp->expo=b;
    temp->next=NULL;
    if(st==NULL)
    {
        st=temp;
    }
    else{
        ptr=st;
        while(ptr->next!=NULL)
        {
            prt=ptr->next;
        }
        ptr->next=temp;
    }
    printf("cretead sucessfully");
}
void display()
{
    ptr=st1;

}
void main()

