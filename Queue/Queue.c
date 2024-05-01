#include <stdio.h>
#include <stdlib.h>
int rear = 0;
int front = 0;
int n = 5;
int q[5];
void enqueue(int a)
{
    rear = (rear + 1) % n;
    if (rear == front)
    {
        printf("Overflow Queue front = %d, rear=%d\n", front, rear);
        if (rear == 0)
        {
            rear = n - 1;
        }
        else{
            rear=rear-1;
        }
    }
    else
    {
        q[rear] = a;
    }
}
void dequeue()
{
    if (rear == front)
    {
        printf("Empty Queue front = %d, rear=%d\n", front, rear);
    }
    else
    {
        front=(front+1)%n;
        printf("Queue removed=%d\n",q[front]);
        q[front]=0;
    }
}
int printqueue()
{
    if(rear==front){
        printf("Empty Queue front = %d, rear=%d\n", front, rear);
    }
    else if(rear>front){
        for (int i = front+1; i <= rear; i++)
        {
            printf("%d\n", q[i]);
        }
    }
    else{
        for (int i = front+1; i < n; i++)
        {
            printf("%d\n", q[i]);
        }
        for (int i = 0; i <= rear; i++)
        {
            printf("%d\n", q[i]);
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d\n", q[i]);
    // }
    return 0;
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    // enqueue(5);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    enqueue(1);
    dequeue();
    dequeue();
    enqueue(1);
    enqueue(4);
    enqueue(0);
    enqueue(2);
    enqueue(2);
    enqueue(0);
    enqueue(2);
    enqueue(4);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
  enqueue(1);
    enqueue(1);
      enqueue(0);
        enqueue(1);




    // enqueue(8);
    // enqueue(10);
    // enqueue(11);



    // printf("%d\n", q[0]);
    // printf("%d\n", q[1]);
    // printf("%d\n", q[2]);
    // printf("%d\n", q[3]);
    // printf("%d\n", q[4]);
    // printf("rear=%d\n", rear);
    // printf("front=%d\n", front);
    printqueue();
    return 0;
}