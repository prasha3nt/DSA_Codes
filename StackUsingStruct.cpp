// Stack implementation with Array
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

struct Stack
{
    int item[MAX];
    int top;

    Stack()
    {
        top=-1;
    }

};

void push(struct Stack *st, int data)
{
    if(st->top==MAX-1)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        st->top++;
        st->item[st->top]=data;
    }
}

int pop(struct Stack *st)
{
    if(st->top==-1)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        return st->item[st->top--];
    }
}

void displayStack(struct Stack *st)
{
    if(st->top==-1)
    {
        cout<<"The stack is empty"<<endl;
    }

    else
    {
        cout<<"Stack:"<<endl;

        for(int i=st->top;i>=0;i--)
        {
         cout<<"\t"<<st->item[i]<<endl;
        }
    }
}

int main()
{

    struct Stack *st= new Stack();
    push(st,1);
    push(st,2);
    push(st,3);
    pop(st);
    displayStack(st);

}

