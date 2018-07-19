#include "iostream"
using namespace std;
int main()
{
    int matrix[3][3],i,j;
    for(i=0;i<3;i++)
    {
        cout<<"Enter "<<i+1<<"th row elements";
        for(j=0;j<3;j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<"before transpose\n";
    for(i=0;i<3;i++)
    {
        //cout<<"Enter "<<i+1<<"th row elements";
        for(j=0;j<3;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"After transpose\n";

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<matrix[j][i]<<"\t";
        }
        cout<<endl;
    }
}