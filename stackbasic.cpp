#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top;
 public:
 bool flag;
    Stack(int s)
    {
  size=s;
  top=-1;
  arr=new int[s];
  flag=1;
    }
// push
//pop
//peek
// isSize()
// is empty()
void push(int value)
{
if(top==size-1)
    {
        cout<<"Stack overflow"<<endl;
        return;
    }
    else
    {
        top++;
        arr[top]=value;
        cout<<"Pushed"<< value <<" into the stack\n";
    }
    }
//pop
void pop()
{
if(top==-1)
{
    cout<<"Stack underflow"<<endl;
    return;
}
else
{
    cout<<"Popped element is "<<arr[top]<<endl;
    top--;
}
}
//peek
int peek()
{
if(top==-1)
{

  cout<<"Stack is empty\n"<<endl;
  return -1;
}
else
{
    return arr[top];
}
    }
     //isempty
bool isEmpty()
{
    return top==-1;
}


//IsSize
int isSize()
{
    return top+1;
}
};
int main()
{
// Stack S(5);
// S.push(10);
// S.push(20);
// S.push(30);
// //S.pop();
// S.push(40);
// S.push(50);
// S.push(60);
// S.push(70);
// // S.pop();
// // S.pop();
// // S.pop();
// // S.pop();
// // S.pop();
// cout<<S.peek()<<endl;
// S.pop();
// cout<<"Size of stack is "<<S.isSize()<<endl;
// cout<<"Is stack empty? "<<(S.isEmpty() ? "Yes" : "No")<<endl;
// S.pop();
// cout<<"Top element is "<<S.peek()<<endl;
// }
Stack S(5);
//S.push(-1);
int value=S.peek();
if(S.flag==0)
cout<<value<<endl;

}
