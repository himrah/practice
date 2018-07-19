#include "iostream"
using namespace std;
int main()
{

    int mat1[10][10],mat2[10][10],i,j,diff[10][10],m,n;
    cout<<"enter the elements of row and column :";
    cin>>m>>n;
    cout<<"enter the values in first matrix";
    for(i=0;i<m;i++)
    {
        cout<<"enter "<<i+1<<"th element";
        for(j=0;j<n;j++)
        {

            cin>>mat1[i][j];

        }

    }
    cout<<"enter the values in second matrix ";
    for(i=0;i<m;i++)
    {
        cout<<"enter "<<i+1<<"th element";
        for(j=0;j<n;j++)
        {

            cin>>mat2[i][j];

        }

    }
    for(i=0;i<m;i++)
    {
    
        for(j=0;j<n;j++)
        {

        diff[i][j]=mat1[i][j]-mat2[i][j];

        }

    }
    cout<<"the difference is :\n";
       for(i=0;i<m;i++)
    {  
        for(j=0;j<n;j++)
        {

            cout<<diff[i][j]<<"\t";

        }
        cout<<endl;
    }
    
}
    
