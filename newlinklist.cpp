#include "iostream"
#include "stdlib.h"
using namespace std;
struct block
{

    int list;
    block *successiveblock;

};
void display(block *n)
{   while(n!=0) 
    {
    cout<<n->list<<endl;
    n=n->successiveblock;
    }
}
int main()
{
    block *first;
    block *mid;
    block *last;
    first=(block *)malloc(sizeof(block));
    mid=(block *)malloc(sizeof(block));
    last=(block *)malloc(sizeof(block));
    first->list=1234;
    first->successiveblock=mid;
    mid->list=2345;
    mid->successiveblock=last;
    last->list=6574;
    last->successiveblock=NULL;
     display(first);
    return 0;
}