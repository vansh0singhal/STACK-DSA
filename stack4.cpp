#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&s,int value)
{
    if(s.empty())
    {
        s.push(value);
        return;
    }
    int v=s.top();
    s.pop();
    insertAtBottom(s,value);
    s.push(v);
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    int size=s.size();
    int value=5;
    insertAtBottom(s,value);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}