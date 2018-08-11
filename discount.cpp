#include "iostream"
#include<conio.h>
using namespace std;
int main()
{
    float value,dis,result;
    cout<<"value:";
    cin>>value;
    cout<<"dis:";
    cin>>dis;
    result=value*dis/100;
    cout<<"The discount is:"<<result<<"\nFinal price is  "<<value-result;
    return 0;
}