#include "iostream"
using namespace std;
int main()
{
    int arr[15]={8,9,4,6,8,6,17,8,10,8,10,20,10,7,8,},i,n=15,j,s;
    cout<<"enter the value u want to delete ";
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            for(j=i;j<n;j++)
            {
                if(j==n-1)
                 {
                    arr[j]=0;
                }
                else
                {
                    arr[j]=arr[j+1];
                }

            }

        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}