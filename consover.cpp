#include "iostream"
using namespace std;
class Example{
    int a,b,c;
    //float a,b,c;
public:
    Example(){
        
        a=0,b=0,c=0;
    }
    Example(int x,int y){
        a=x;
        b=y;
    }
    void sum(){
        c=a+b;
        cout<<"sum is "<<c<<endl;
    }
};
int main()
{
    Example e;
    Example ex(4,3);
    e.sum();
    ex.sum();
}