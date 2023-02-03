#include<iostream>
#include<stack>

using namespace std;
int main()
{
    stack <string> s;

    s.push("harsh");
    s.push("kumar");
    s.push("pal");

    cout<<"Element at top: "<<s.top()<<endl;
    
    s.pop();
    cout<<"element at top after pop operation: "<<s.top()<<endl;

    cout<<"size of stack: "<<s.size()<<endl;

    cout<<"stack is empty: "<<boolalpha<<s.empty()<<endl;
    return 0;
}