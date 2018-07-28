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
    printlist(first);

    return 0;
}
