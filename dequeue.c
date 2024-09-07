#include <stdio.h>
#include<stdlib.h>
  
#define N 5
int front=-1;
int rear=-1;
 int dequeue[N];
     void enqueueFront (int x)
    {
      if ((front==0 && rear==N-1)||(front==rear+1))
       {
      printf("the dequeue is full\n");
	}
    else if (front==-1 && rear==-1)
	{
      front=0;
     rear=0;
    dequeue[front]=x;
	}
    else if(front==0)
	{
     front=N-1;
  dequeue[front]=x;
	}
  else
         {
         front--;
       dequeue[front]=x;
	}
}
   void enqueueRear(int y)
	{
      if ((front==0&& rear==N-1)||(front==rear+1))
         {
            printf("the dequeue is full\n");
       }
       else if (front==-1 && rear==-1){
           front=rear=0;
        dequeue[rear]=y;
     }
       else if (rear==N-1){
         rear=0;
      dequeue[rear]=y;
      }
     else {
     rear++;
      dequeue[rear]=y;
    }
}
     void dequeueFront(){
     if(front==-1&&rear==-1){
      printf("the dequeue is empty\n");
         }
      else if(front==N-1){
       printf("the deleted item is %d",dequeue[front]);
        front=0;
      }
      else{
                printf("the deleted item is %d",dequeue[front]);
                front++;
            }
}
       void dequeueRear(){
       if (front==-1 && rear==-1){
         printf("the dequeue is empty\n");
       }
           else if (rear==0){
                 rear=N-1;
      }
       else {
                printf("the deleted queue is%d\n",dequeue[rear]);
              rear--;
              }
         }
  void display()
   {
       int i=front;
     if( front==-1 && rear==-1)
     {
        printf("dequeue is empty\n");
      }
   else{
      printf("the element are\n");
      while(i!=rear){
         printf("%d\n",dequeue[i]);
         i=(i+1)%N;
    }
       printf("%d\n",dequeue[rear]);
   }
}
    void main() 
     {
    int choice ,x, y;
    while(1){
  printf("enter the choice from the following\n");
  printf("1: enqueue in front\n");
  printf(" 2: enqueue in rear\n");
  printf(" 3: dequeue in front\n");
  printf("4:dequeuein rear\n");
  printf(" 5: dispaly\n");
  printf(" 6: exit\n");
scanf("%d",&choice);
       switch(choice)
        {
             case 1:
                       printf("enter the queue\n");
                       scanf("%d",&x);
                       enqueueFront(x);
                        break;
            case 2:
                         printf("enter the queue\n");
                         scanf("%d",&y);
                        enqueueRear(y);
                        break;
           case 3:
                 dequeueFront();
                 break;
           case 4:
                dequeueRear();
                break;
            case 5:
                display();
               break;
           case 6:
                    exit(0);
             default:
                    printf("Please choose the correct option\n");
        }
  }
}
   
       