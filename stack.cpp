#include "iostream"
using namespace std;
struct stack{
    int array[10];
    int position ;
};

void push(stack st)
{   
    //cout<<"here";
    if(st.position==9)
    {
        cout<<"stack is full\n";
    }
    else{
        int data;
        cout<<"Enter the value :";
        cin>>data;
        st.position++;

        st.array[st.position]=data;
        for(int i=0;i<=st.position;i++)
        {
            cout<<st.array[i];
        }
    }
    //cout<<st.array[st.position];
}
void pop()
{
    stack st;
    st.position--;
}

int main()
{

    stack st;
    //st.position=0;
    //st.array[0]=9;
    //cout<<st.array[0];
    st.position = -1;
    //cout<<"sdf";

    push(st);
    push(st);
    /*for(int i=0;i<=st.position;i++)
    {
        cout<<st.array[i]<<endl;
    }*/
    cout<<st.array[0];
    return 0;
}

