
#include <iostream>
using namespace std;

// Implementing Stack using Array.

class Stack
{
    int top;
    public:
    Stack()
    {
        top=-1;
    }
    int a[100];
    
    void push(int val);
    int pop();
    int peek();
    bool isEmpty();
    
};
void Stack :: push(int val)
    {
        if(top>=99)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
        a[++top]=val;
        cout<<val<<" pushed into stack."<<endl;
        }
    }
int Stack :: pop()
            {
              if(top<0)
              {
                  cout<<"Stack Underflow. "<<endl;
                  return 0;
              }
              else
              {
                  int x=a[top--];
                  return x;
              }
            }
int Stack:: peek()
{
    if(top<0)
    {
        cout<<"Stack Empty."<<endl;
    }
    else
    {
        int x= a[top];
        cout<<x<<endl;
        return x;
    }
}
bool Stack :: isEmpty()
{
    return (top<0);
}

int main()
{

    Stack Stack1;
    Stack1.push(5);
    Stack1.push(6);
    Stack1.pop();
    Stack1.peek();

    return 0;
}
