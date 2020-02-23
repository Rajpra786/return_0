#include<iostream>
#include<stack>
using namespace std;

int main()
{
    std::stack<int> s;
    cout<<s.empty()<<endl;
    // Push
    s.push(20);
    s.push(5);
    s.push(85);
    // Size
    int size = s.size();
    // Top
    cout<<s.top()<<endl;
    // Pop
    s.pop();

    cout<<s.top()<<endl;

}
