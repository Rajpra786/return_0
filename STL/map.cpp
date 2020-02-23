#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> m;

    // Insert
    m.insert({"key","value"});

    // Access by key
    string value = m.at("key");
    cout<<value<<endl;

    // Size
    unsigned int size = m.size();


    // Iterate

    for(auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first <<" : "<<it->second << endl;
    }

    // Remove by key
    m.erase("key");

    // Clear
    m.clear();

    //---------------------------------
    // Container-Specific Operations
    //---------------------------------

    // Find if an element exists by key
    bool exists = (m.find("key") != m.end());

    // Count the number of elements with a certain key
    unsigned int count = m.count("key");
}