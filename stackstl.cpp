#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>S;
    S.push(10);
    S.push(20);
    S.push(30);     
cout<<S.size()<<endl;  
//top
S.pop();
cout<<S.top()<<endl;
cout<<S.empty()<<endl;
}