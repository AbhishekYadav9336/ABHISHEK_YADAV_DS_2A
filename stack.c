#include<stdio.h>
#define maxs 5
void push();
void pop();
void display();
struct s 
 {
 int top;
 int data[20];
}st;
void main()
{st.top=-1;
 int choice;
do{
 printf("enter the choice between 1 to 3 and 4 for exit");
 scanf("%d",&choice);
 switch(choice)
 { case 1:
    push();
    break;
    case 2:
    pop();
    break;
    case 3:
    display();
    break;
    case 4:
     printf("exiting");
     break;
    default:
     printf("invailed choice");
}
 }
  while(choice!=4);
}
int i;
void push()
{ int item;

    if(st.top==maxs-1)
    {
        printf("stack full");
        return;
    }
else
    { 
        
     printf("enter the item");
     scanf("%d",&item);
     st.top=st.top+1;
     st.data[st.top]=item;
        
    }
 }

void pop()
{ int x;
    if(st.top==-1)
    {
printf("empty");
    }
    else
    {
        x=st.data[st.top];
        st.top=st.top-1;
        printf("the top pop element of stack is %d\n",x);
    }
}
void display()
{
if(st.top>=0)
{
printf("the element in stack are");
    for(i=st.top;i>0;i--)
    {
        printf("%d",st.data[i]);
    }
 return;
}
else
{
    printf("empty set\n");
}

}
