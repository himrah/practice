#include "iostream"
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i,p=0,l;
    char arr[20],s;
    cout<<"enter words";
    gets(arr);
    l=strlen(arr);
    l=l-1;
    cout<<"enter the character you want to search ";
    cin>>s;
    for(i=0;i<l;i++)
    {
        if(s==arr[i])
        {   p=i+1;
            break;
        }
    }
    if(p){
        cout<<"Char found at "<<p<<" position";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}