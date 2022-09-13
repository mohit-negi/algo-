// Inserting a node at the beginning of a linked list 
#include<iostream>

using namespace std;

//Lets create a new linked list 
typedef struct node{
    int data; //type of the data the node will store
    node* next; //nodeptr that will store the address the node that it will point at
}* nodeptr;

//Global variable 
nodeptr head;   //this will help the node address the struct

void addNode(int addData)//This will help us add data to the beginning of the node
{
    nodeptr temp = new node; //creates a new node that will be temporary 
    temp -> data = addData;    //This will create a new 
    temp -> next = head;    //This will point the next to head
    head = temp;    
}
void displayNode()
{
    nodeptr temp = new node;
    cout<<"The list is like this :";
    if(temp != NULL)
    {
        cout<<temp -> data;
    }
    cout<<'\n';
}
int main()
{
    head = NULL;    //creating an empty list
    cout<<"How much numbers :";
    int i,n,x;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter the number :";
        cin>>x;
        addNode(x);
        displayNode();
    }
    
    return 0;
}