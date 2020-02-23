#include <iostream>
#include <vector>                       //using for vector
#include <iterator>                     //using for iterator

using namespace std;

int main(void)
{

    vector<int> v;                      
    for(int i = 1; i <= 10; i++)
        v.push_back(i+i);


    // cout<<v.size()<<endl;             
    // for(int i = 0; i < v.size(); i++)   
    //     cout << v[i] << " ";           
    // cout << endl;


// // how to initialize a vector with a fixed length
    // vector<int> a(10, 0);               //10 elements size of vector with initialize value "0"
    // for(int i = 0; i < a.size(); i++)
    //     cout << a[i] << " ";
    // cout << endl;

// // how to use iterators
    // vector<int> b;
    // // vector<int>::iterator it;           //Iterator for print the value b
    // for(int i = 1; i <=12; i++)         //Initializing vector b
    //     b.push_back(i);

    // for(auto it = b.begin(); it != b.end(); it++)    //Print vector b using iterator
    //     cout << *(it) << endl;
    // cout << endl;

// //swap()
    // vector<int> f;
    // for(int i = 1; i < 4; i++)
    //     f.push_back(i);
    // vector<int> g;
    // for(int i = 7; i < 10; i++)
    //     g.push_back(i);

    // g.swap(f);                          //a vector swap to another vector


    // cout<<"F vector after swaping: ";
    // for(int i = 0; i < f.size(); i++)
    //     cout << f[i] << " ";
    // cout << endl;
    // cout<<"g vector after swaping: ";
    // for(int i = 0; i < g.size(); i++)
    //     cout << g[i] << " ";
    // cout << endl;


    // vector<int> h{1, 3, 5, 7, 9};       
    // for(size_t i = 0; i < h.size(); i++)
    //     cout << h[i] << " ";

    // cout << "Another way to print" << endl;
    // for(int j : h)
    //     cout << j << endl;
    
    
    
    cout << "Another second way to print" << endl;
    for(auto m : h)                     //using auto for "for loop"
        cout << m << endl;
    cout << endl;

    return 0;
}
