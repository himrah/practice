#include "iostream"
#include "stdlib.h"
using namespace std;
struct node 
{
    int data;
    node *next_node;
};
void printlist(node *n)
{
    while(n!=0)
    {
        cout<<n->data<<endl;
        n=n->next_node;
    }
}
void create(node **first,int data)
{
    struct node *new_node=(node*)malloc(sizeof(node*));
    new_node->data=data;
    new_node->next_node=*first;
    *first=new_node;
}
int main()
{
    node *first;
    node *mid;
    node *last;
    first=(node*)malloc(sizeof(node*));
    mid=(node*)malloc(sizeof(node*));
    last=(node*)malloc(sizeof(node*));
    first->data=15215;
    first->next_node=mid;
    mid->data=24754;
    mid->next_node=last;
    last->data=5835;
    last->next_node=NULL;
    printlist(first);
    return 0;
}