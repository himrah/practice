#include "iostream"
#include<string.h>
using namespace std;
int main()
{
    int a[5][5],b[5][5],j,c[5][5],i,res;
    cout<<"enter the values in first array :";
     for(i=0;i<4;i++){
        cout<<"\nenter "<<i+1<<" row values";
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }


    }
    cout<<"enter the values in second array :";
    for(i=0;i<4;i++)
    {
        cout<<"\nenter "<<i+1<<"th row values";
        for(j=0;j<3;j++)
        {

            cin>>b[i][j];
        }

    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {

            c[i][j]=a[i][j]+b[i][j];

        }


    }

    for(i=0;i<4;i++)
    {   cout<<"\n"<<i+1<<" row\n";
        for(j=0;j<3;j++)
        {
            //cout<<a[i][j]<<"   "
            cout<<c[i][j]<<"   ";
        }


    }
    return 0;
}