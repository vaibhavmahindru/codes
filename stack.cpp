#include<iostream>
using namespace std;
const int SIZE = 10;
template< class stacktype>
class stack
{
    stacktype stck[SIZE];
    int top;
    public:
    stack()
    {
        top = 0;
        }
    void push(stacktype ob);
    stacktype pop();
};
template< class stacktype>
void stack< stacktype> :: push(stacktype ob)
{
    if(top==SIZE)
    {
        cout<<"Stack is full" << endl;
        return;
    }
    stck[top] = ob;
    top++;
}
template< class stacktype>
stacktype stack< stacktype> :: pop()
{
    if(top == 0)
    {
        cout<<"Stack is empty" << endl;
        return 0;
    }
    top--;
    return stck[top];
}
int main()
{
    stack<int> s1;
    stack<float> s2;
    int i;
    s1.push(1);
    s2.push(2.6);
    s1.push(3);
    s2.push(3.2);
    s1.push(7);
    s2.push(4.2);
    for(i=0; i<3; i++)
    {
        cout<<"Pop s1: " << s1.pop() << "\n";
    }
    for(i=0; i<3; i++)
    {
        cout<<"Pop s2: " << s2.pop() << "\n";
    }
    return 0;
}

