#include <iostream>
using namespace std;

#define MAX 10
class userStack
{
    private:
    int top=0;
    int x[MAX];
    
    public:
    userStack()
    {
        int top = -1;
    }
    bool push(int item)
    {
        if (top == MAX -1)
        {
            cout<<"stack is full" <<"\n";
        
            return false;
        }
        else
        {
            top++;
            x[top]=item;
            std::cout<<"item added" << "\n";
            
            return true;
        }
    }
    int pop()
    {
        if (top==-1)
        {
            std::cout<<"no items in stack"<< "\n";
        }
        int c= x[top];
        x[top]=0;
        top --;
        return c;
    }
    int peek()
    {
        if (top==-1)
        {
            std::cout<<"No element" <<"\n";
        }
        return x[top];
    }
    
    
};

int main()
{
    //cout<<"Hello World ";

userStack st = userStack();

//std::cout<<"user stack initilised "<< st.pop();
st.push(10);
st.push(9);
st.push(7);
std::cout<<"the latest added item is=" << st.peek()<<"\n";
std::cout<<"the last added item is =" <<st.pop()<<"\n";
std::cout<<"the last added item is =" <<st.pop()<<"\n";
std::cout<<"the last added item is =" <<st.pop()<<"\n";
return 0;
}
