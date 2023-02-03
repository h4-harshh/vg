#include<iostream>
#include<queue>

using namespace std;
int main()
{
    queue <string> q;

    q.push("harsh");
    q.push("kumar");
    q.push("pal");

    cout<<"the top element is: "<<q.front()<<endl;

    q.pop();

    cout<<"the top element after pop: "<<q.front()<<endl;

    cout<<"the size of queue: "<<q.size()<<endl;

    cout<<"queue is empty: "<<q.empty()<<endl;

    return 0;
}