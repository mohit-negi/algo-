#ifndef List_H
#define List_H

class List{
    private:
        typedef struct node{
            int data;
            node* next;
        }* nodePtr;

        nodePtr head;
        nodePtr curr;
        nodePtr temp;
    public:
        List();
        void addNode(int addData);
        void delNode(int dltData);
        void printScreen();
};

#endif