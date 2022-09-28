#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
    
};
struct node* head=NULL;

void insert(int val)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=head;
    head=new_node;
    
}

void display()
{
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr= ptr->next;
    }
}
int main() {
    
    insert(9);
    insert(8);
    insert(7);
    insert(6);
    insert(5);
    insert(4);
    display();

    return 0;
}
