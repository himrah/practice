#include "iostream"
#include "stdlib.h"
using namespace std;
struct Node{
    int data;
    Node *next_node;
};

void printlist(Node *n)
{
    while(n!=0)
    {
        cout<<n->data<<endl;
        n=n->next_node;
    }
}

void create(Node **first,int data)
{
    struct Node *new_node = (Node *)malloc(sizeof(Node *));
    new_node->data = data;
    new_node->next_node=*first;
    *first = new_node;
}

void append(Node *last,int data)
{
    struct Node *new_node = (Node *)malloc(sizeof(Node *));
    last->next_node = new_node;
    new_node->data = data;
    new_node->next_node=NULL;
}

void DEL(struct Node *first)
{
    struct Node *temp = first;
    temp = first->next_node;
    first->data = first->next_node->data;
    first->next_node = first->next_node->next_node;
    free(temp);
}


int main()
{
    Node *first;
    Node *mid;
    Node *last;

    first = (Node *)malloc(sizeof(Node *));
    mid = (Node *)malloc(sizeof(Node *));
    last = (Node *)malloc(sizeof(Node *));
    first->data=1001;
    first->next_node=mid;
    mid->data=1002;
    mid->next_node=last;
    last->data=1003;
    last->next_node=NULL;
    int data;
    cout<<"Enter the data for new node ";
    cin>>data;
    create(&first,data);
    //append(last,data);
    DEL(first);
    printlist(first); 
    return 0;
}