#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->data=val;
        this->next=NULL;
        this->prev=NULL;
    }

};

    void addAtFront(int val, Node **head)
    {
        Node *node= new Node(val);
        node->next= *head;
        (*(*head)).prev=node;
        *head= node;
    }

    void addAtEnd(int val, Node **head)
    {
        Node *node= new Node(val);
        Node *ptr= *head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next= node;
        node->prev=ptr;
        
    }

    void display(Node *head)
    {
        Node *ptr= head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }

int main()
{
    Node *head= new Node(5);
    
    addAtFront(6,&head);
    addAtFront(7,&head);
    addAtFront(8,&head);
    addAtEnd(1,&head);
    display(head);

    return 0;
}
