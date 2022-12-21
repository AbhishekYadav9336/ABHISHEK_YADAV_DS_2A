#include<stdio.h>
# define maxsize 4
struct data 
{
    int cqueue[maxsize];
    int front;
    int rear ;
}s;
void cqinst(void);
void cqdel(void);
void cqdisplay(void);
void main()
{
    int ch=1,choice;
    s.front=-1;
    s.rear =-1;
    while (ch)
    {
        printf("enter 1 for insert,2 for delet,3 for display,4 for exit");
        printf ("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            cqinst();
            break;
        case 2:
            cqdel();
            break;
        case 3:
            cqdisplay();
            break;
        case 4:
            printf("Program Exits");
            return;
        default:
            printf("Wrong Choice\n");
        }
        printf ("Do you want to continue(enter 0 or 1)?\n");
        scanf    ("%d", &choice);
    }
}

void cqinst()
{   
    int n;
   if(s.front==(s.rear+1)%maxsize)
   {
    printf("Stack Overflow\n");
    return;
   }
   printf("Enter the element= ");
   scanf("%d",&n);
   if(s.front==-1)
   {
    s.front=0;
    s.rear=(s.rear+1)%maxsize;
    s.cqueue[s.rear]=n;
   }
   else
   {
    s.rear=(s.rear+1)%maxsize;
    s.cqueue[s.rear]=n;
   }
   cqinst();
}

void cqdel()
{
    int n;
    if (s.front==-1)
    {
        printf ("Queue Underflow\n");
        return;
    }
    n = s.cqueue[s.front];
    if(s.front==s.rear)
    {
        s.front=s.rear=-1;
    }
    else
    {
        s.front = (s.front+1)%maxsize;
    }
    printf ("Deleted element is = %d \n",n);
    return;
}

void cqdisplay()
{
    int i=s.front;
    if (s.front == -1)
    {
        printf ("Queue is empty\n");
        return;
    }
    else
    {
        printf ("\nThe elements of queue are=\n");
        while (i!=s.rear)
        {
            printf("%d ",s.cqueue[i]);
            i=(i+1)%maxsize;
        }
        printf("%d",s.cqueue[s.rear]);
    }
    printf ("\n");
}