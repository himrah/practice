#include "iostream"
using namespace std;

int main()
{
    int i,n,array[10],first,last,mid,search;
    bool flag=false;
    //cout<<"enter the number of elements:";
    //cin>>n;
    cout<<"enter the 10 sorted values:";
    for(i=0;i<10;i++)
    {
        cin>>array[i];
    }
    cout<<"Enter search value ";
    cin>>search;
    
    first=0;
    last=9;
    mid=(first+last)/2;
    cout<<mid<<"\n";
    cout<<first<<"\n";
    cout<<last<<"\n";
    while(mid)
    {
        if(array[mid]==search)
        {
            flag = true;
            break;
        }
        else if(search<array[mid])
        {
            last=mid-1;
        }
        else{
            first=mid+1;
        }
        
        mid=(first+last)/2;
        if(mid==last){
            mid=0;
        }
    }
    if(flag){
        cout<<"term is searched";
    }
    else{
        cout<<"searach is not array";
    }
    return 0;
}