#include<iostream>
#include<stack>
using namespace std;
void findMiddle(stack<int>&s,int m)
{

    if(s.size()==m)
    {
        cout<<s.top();
        return;
    }
    int value=s.top();
    s.pop();
    findMiddle(s,m);
    s.push(value);

    

}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    
    int size=s.size();
    int m=(size/2)+1;
    cout<<m<<endl;
    findMiddle(s,m);
    
    return 0;
}