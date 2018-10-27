#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int top;
    int data[1000];
};

void push(Stack *st,int num)
{
    if(st->top<1000)
    {
        st->data[st->top]=num;
        st->top++;
    }
}

int pop(Stack *st)
{
    if(st->top!=0)
    {
    st->top--;
    return st->data[st->top];
    }
}

int main()
{
    int item;
    Stack mystack;
    mystack.top=0;

    push(&mystack,12);
    push(&mystack,20);
    push(&mystack,40);

    item=pop(&mystack);
    cout << item << " ";

    item=pop(&mystack);
    cout << item << " ";
    return 0;
}
