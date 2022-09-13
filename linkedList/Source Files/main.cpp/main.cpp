#include<iostream>
#include<cstdlib>

#include "List.h"

using namespace std;
List::List()    //constructor to access the objects     
{
    head = NULL;
    curr = NULL;
    temp = NULL;
}
List::addNode(int addData)
{
    nodePtr n = new node;
    n -> next = NULL;
    n -> data = addData;

    if(head != NULL)
    {
        
    }

}
int main()
{   
    
    
    return 0;
}