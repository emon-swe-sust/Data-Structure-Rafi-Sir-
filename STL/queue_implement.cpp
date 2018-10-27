#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    int Front,rear;
    int qu[1000];
};

void enqueue(Queue *q,int a)
{
    q->qu[q->Front]=a;
    q->Front++;
    q->Front=(q->Front)%1000;
}

int dequeue(Queue *q)
{
    int item;
    item=q->qu[q->rear];
    q->rear++;
    q->rear=(q->rear)%1000;
    return item;
}

int main()
{
    int item;
    Queue myq;
    myq.Front=0;
    myq.rear=0;

    enqueue(&myq,45);
    enqueue(&myq,58);
    enqueue(&myq,75);
    enqueue(&myq,55);

    item=dequeue(&myq);
    cout << item << " ";

    item=dequeue(&myq);
    cout << item << " ";

    item=dequeue(&myq);
    cout << item << " ";

    return 0;
}
