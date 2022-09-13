#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void printNodes(node* head)
{
    while(head != NULL)
    {
        cout<<head -> data<<"-->";
        head =  head -> next;
    }
    cout<<'\n';
}
void insertAtHead(node*& head,int data)
{
    if(head == NULL)
    {
        head = new node(data);
        return;
    }
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
}
void insertAtTail(node*& head,int data)
{
    if(head == NULL)
    {
        head = new node(data);
        return;
    }
    node* tail = head;
    while(tail -> next != NULL)
    {
        tail = tail -> next;
    }
    tail -> next = new node(data);
    return;
}

void insertAtMiddle(node*& head,int data,int pos)
{
    if(head == NULL && pos < 0)
    {
        insertAtHead(head,data);
    }else if (head -> next == NULL)
    {
        insertAtTail(head,data);
    }
    //to reach at the reqd position
    int jump{};
    node* prev = head;
    while(jump < pos-2)
    {
       prev = prev -> next; 
       jump++;
    }
    node* temp = new node(data);
    temp -> next = prev -> next;
    prev -> next = temp; 
}
void deleteAtHead(node* head)
{
    if(head == NULL)
    {
        return;
    }
    node* temp = head -> next;
    delete head;
    head = temp;
}
void deleteTail(node* head)
{
    if(head == NULL)
    {
        return;
    }
    node* temp = head;
    node* prev = NULL;
    while(temp -> next != NULL)
    {
        prev = temp;
        temp = temp -> next;
    }
    delete temp;
    prev -> next = NULL;
    return;
}
void deleteMiddle(node* head,int pos)
{
    if(head == NULL && pos < 0)
    {
        return ;
    }else if(pos == 0)
    {
        deleteAtHead(head);
    }else if(head -> next == NULL)
    {
        deleteTail(head);
    }
    //hopefully taken care of all the edge cases
    int jump{};
    node* curr = head;
    while(jump < pos-2)
    {
        curr = curr -> next;
        jump++;
    }
    node* prev = curr -> next;
    prev = curr -> next -> next;
    delete curr;
}
int main()
{
    node* head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    printNodes(head);
    insertAtTail(head,6);
    printNodes(head);
    insertAtMiddle(head,9,3);
    printNodes(head);
    deleteTail(head);
    printNodes(head);
    deleteAtHead(head);
    printNodes(head);
    return 0;
}
