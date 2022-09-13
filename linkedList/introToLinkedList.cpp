#include<iostream>

using namespace std;

typedef struct node{
    int data;
    node* next;
}* nodeptr;

nodeptr head;   //Global variable 

void addNode(int addData)
{
    nodeptr temp = new node;
    temp -> data = addData;
    temp->next = head;
    head = temp;
}
void printNodes()
{
    nodeptr temp = head;
    cout<<"List is :";
    while(temp != NULL)
    {
        cout<<temp->data;
        temp = temp -> next;
    }
    cout<<'\n';     
}

int main()
{
    head = NULL;    //empty list
    cout<<"How many numbers :";
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the number:";
        cin>>x;
        addNode(x);
        printNodes();
    }
    

    return 0;
}