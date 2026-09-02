#include<iostream>
using namespace std;
#define Max 5
class Stack
{
  public:
  int A[Max];
  int top;
  Stack()
  {
    top=-1;
  }
  void push(int value)
  {
    if(top==Max-1)
    {
      cout<<"the stack is overflow\n";
    }
    else
    {
      top++;
      A[top]=value;
      cout<<value<<"is pushed into stack\n"; 
    }  
  }
  void pop()
  {
    if(top==-1)
    {
      cout<<"the stack is underflow\n";
    }
    else
    {
      cout<<A[top]<<"the element is popped\n";
      top--;
    }
  }
  void display()
  {
    if(top==-1)
    {
      cout<<"the stack is empty\n";
    }
    else
    {
      for(int i=top;i>=0;i--)
      {
        cout<<A[i]<<endl;
      }  
    }
  }  
};

int main()
{
  Stack s1;
  s1.push(30);
  s1.push(40);
  s1.push(50);
  s1.push(60);
  s1.display();
  s1.pop();
  s1.push(70);
  s1.display();
  
  return 0;
}  

  
