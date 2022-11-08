#include <bits/stdc++.h>
using namespace std;

struct Node
{
 int data;
 Node *next;
};

void insertFront(Node **head, int val)
{
    struct Node *new_node= new Node();
    new_node->data=val;
    if(head==NULL)
    {
        new_node->next=NULL;
        *head=new_node;
    }
    else
    {
        new_node->next=*head;
        *head=new_node;
    }
}

void displayLinkedList(struct Node *head)
{
   struct Node *ptr=head;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
struct Node *head= new Node();
head->data=6;
head->next=NULL;
insertFront(&head,5);
insertFront(&head,4);
insertFront(&head,3);
insertFront(&head,2);
insertFront(&head,1);

displayLinkedList(head);




}
