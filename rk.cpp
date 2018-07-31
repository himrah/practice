#include "iostream"
#include "stdlib.h"
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
void printlist(struct Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n = n->next;
    }
}
void push(struct Node **ref,int data)
{
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *ref;
    *ref = new_node;
}
int main()
{
    struct Node *first = NULL;
    struct Node *mid = NULL;
    struct Node *last =NULL;
    //first->data=1;
    //first->next=mid;
    first  = (struct Node*)malloc(sizeof(struct Node));
    //first = (struct Node*)malloc(sizeof(struct Node));   
    mid = (struct Node*)malloc(sizeof(struct Node));
    last = (struct Node*)malloc(sizeof(struct Node));

    first->data=1;
    first->next=mid;
    mid->data=2;
    mid->next=last;
    last->data=3;
    last->next=NULL;
    int d;
    cout<<"Enter data for new list";
    cin>>d;
    push(&first,d);
    printlist(first);

    return 0;
}
