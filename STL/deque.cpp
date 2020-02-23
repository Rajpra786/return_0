#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque<int> d;

    // Insert head, index, tail
    d.push_front(5);                 // head   O(1)
    d.push_back(15);                 //back    O(1)
    d.push_back(82);
    d.push_front(20);

    //insert at a given index
    d.insert(d.begin() + 1, 10);     // index O(n)
    

    deque<int>::iterator it;
    cout<<"current elements in deque: ";
    // Iterate
    for(it = d.begin(); it != d.end(); it++) {
        cout << *it << " ";
    }
    cout<<endl;

    // Size    O(1)
    int size = d.size();     
    cout<<"size of the deque is : "<< size<<endl;

    // Access head, index, tail
    int head = d.front();       // head  O(1)
    cout<<"Head of the queue is: "<<head<<endl;    
    int value = d.at(3);    // index   O(1)
    cout<<"element at position 3 is: "<<value<<endl;
    int tail = d.back();        // tail  O(1)
    cout<<"element at last position is: "<<tail<<endl;


    // Remove head, index, tail
    d.pop_front();                  // head  O(1)
    cout<<"current elements in deque: ";
    for(auto i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    d.erase(d.begin() + 2);     // index  O(n)
    
    cout<<"current elements in deque: ";
    for(auto i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    d.pop_back();                   // tail  O(1)
    cout<<"current elements in deque: ";
    for(auto i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<d.empty()<<endl;    //O(1)
    // Clear
    d.clear();       //O(n)
    cout<<d.empty()<<endl;


    return 0;
}