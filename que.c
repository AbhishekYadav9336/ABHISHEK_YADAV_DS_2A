#include<stdio.h>
#define max 5
void enque();
void deque();
void display();
struct queue
{
 int rear;
 int front;
 int que[20];
}s;

void main()
{ int i,n,cho,m;
s.front=-1;
s.rear=-1;
do{
    printf("enter the choice 1 forenque,2-deque,3-display");
    scanf("%d",&cho);
    
    switch(cho)
    {
        case 1:
        enque();
        break;
        case 2:
        deque();
        break;
        case 3:
        display();
        return;
       default:
       printf("invailed input");
       break;
    }
    }
    while(1);
}
void enque()
{  
    int element;
    printf("enter the element");
   scanf("%d",&element);
    if(s.rear==max-1)
    {
        printf("que overflow");
        return;
    }
    if(s.front==-1&&s.rear==-1)
    {
        s.front=0;
        s.rear=0;
    
    }
    else{
        s.rear=s.rear+1;
        
    }    s.que[s.rear]=element;
}
void deque()
{
    if(s.front==-1)
    {
        printf("undrflow");
        return;
    }
    int k=s.que[s.front];
    printf("the deleted element is");
    if(s.rear==s.front)
    {
        s.front=-1;
        s.rear=-1;
        printf("%d\n",k);
    }
    else
    {
        s.front=s.front+1;
        printf("%d\n",k);
    }
    
}
void display()
{ int i;
    if(s.front<=s.rear)
    { printf("the element in que are");
for(i=s.front;i<=s.rear;i++)
{
  printf("%d",s.que[i]);
}
    }
}