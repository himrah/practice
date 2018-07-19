#include "iostream"
using namespace std;
int main()
{
    int arr[10],j,i,first,last,mid,search;
    bool flag=false;
    cout<<"enter the values in array :";
    for(i=0;i<10;i++)
    {

        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(arr[j-1]>arr[j])
            {
                arr[j-1]=arr[j-1]+arr[j];
                arr[j]=arr[j-1]-arr[j];
                arr[j-1]=arr[j-1]-arr[j];
                
            }

        }
    }
        cout<<"the sorted array is :";
        for(i=0;i<10;i++)
        {
            cout<<arr[i]<<"\n";

        }
        
        first=0;
        last=9;
        mid=(first+last)/2;
        cout<<"enter the value u want to search :";
        cin>>search;
        while(first<=last)
        {
            if(search==arr[mid])
            {
                flag=true;
                break;
            }
            else if(search<arr[mid])
            {
                last=mid-1;
            }
            else if(search>arr[mid])
            {
                first=mid+1;
            }
            else
            {
                cout<<"value is not found in the array ";
            }
            mid=(first+last)/2;
        }
            if(flag)
            {
                cout<<"the value is searched :"<<i+1;

            }
            else{
                cout<<"the value is not searced";
            }
        
        
        
        return 0;

}