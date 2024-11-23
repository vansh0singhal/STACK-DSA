#include<iostream>
#include<stdio.h>
using namespace std;
class stack{
    private:
      int lastIndex;
      int *ptr;
      int size;
    public:
    stack(int);
    void push(int);
    void pop();
    int getSize();
    bool isEmpty();
    int top();
    void print();

};
stack::stack(int c)
{
     size=c;
    ptr=new int[c];
    lastIndex=-1;
   
}
void stack::push(int data)
{
    if(lastIndex==size-1)
    cout<<"stack overflow";
    else{
    lastIndex++;
    ptr[lastIndex]=data;
    }

}
void stack::pop()
{
    if(lastIndex==-1)
    cout<<"stack underflow";
    else{
    lastIndex--;
    }
}
int stack::getSize()
{
    return lastIndex+1;
}
bool stack::isEmpty()
{
    return lastIndex==-1;
}
int stack::top()
{
    if(lastIndex==-1){
        cout<<"stack underflow";
        return -1;
    }
    else
    return ptr[lastIndex];
}
void stack::print()
{
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i];
    }
}
int main()
{
    stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top();
    s.print();
    cout<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;
    
    return 0;

}
