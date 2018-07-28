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
    printlist(first); 
    return 0;
}