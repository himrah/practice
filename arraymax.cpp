#include "iostream"
using namespace std;
class example{
public:
    int sum(int arr[],int arr2[]);
};
int example::sum(int arr[],int arr2[])
{
    int res[5],i;
    for(i=0;i<5;i++)
    {
        res[i]=arr[i]+arr2[i];

    }
    for(i=0;i<5;i++)
    {
        cout<<res[i]<<" ";
    }
    

    return 0;

}
int main()
{   int a[5],b[5],c[5],i;
    example ex;
    cout<<"enter the values for 1st array ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<5;i++)
    {

        cin>>b[i];

    }
    cout<<"sum of array is "<<ex.sum(a,b);
    return 0;

}