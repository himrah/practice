#include "iostream"
using namespace std;
int main()
{
        int a[10],i,j;
        cout<<"enter the values ";
        for(i=0;i<10;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<10;i++)
        {

            a[i]=a[i]*2;

        }

        for(i=0;i<10;i++)
        {
            cout<<a[i]<<"\n";
        }
        return 0;

} 