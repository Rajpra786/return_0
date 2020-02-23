#include<iostream>
#include<set>
using namespace std;
int main()
{
    std::set<int> s;
    // Insert
    s.insert(20);
    s.insert(5);
    s.insert(9);
    s.insert(85);
    s.insert(20);

    // Size
    int size = s.size();
    cout<<size<<endl;
    // Iterate

    for(auto it = s.begin(); it != s.end(); it++) {
        std::cout << *it << " ";
    }
    cout<<endl;
    // Remove
    s.erase(20);

    for(auto it = s.begin(); it != s.end(); it++) {
        std::cout << *it<< " ";
    }
    cout<<endl;


    // Find if an element exists
    bool exists = (s.find(9) != s.end());
    cout<<exists<<endl;

    // Clear
    s.clear();
}