#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print_vector(vector<int> v)
{
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

void dble(int x)
{
    cout<<x<<" ";
}

int main()
{
    vector<int> v{2,4,5,1,3,90,52,35};


    //for_each(start,end,function)
    for_each(v.begin(),v.end(),dble);

    //find(start,end,element)
    cout<<endl<<*find(v.begin(),v.end(),5)<<endl;

    //is_permutation
    vector<int> v2{5,4,3,52,2,1,90,35};
    cout<<is_permutation(v.begin(),v.end(),v2.begin())<<endl;

    //swap
    int a=5,b=9;
    swap(a,b);
    cout<<"a : "<<a<<" b : "<<b<<endl;

    //swap two vectors
    //v.swap(v2);
    swap_ranges(v.begin(),v.end(),v2.begin());
    cout<<"vector v : ";
    print_vector(v);


    cout<<"vector v2: ";
    print_vector(v2);


    // replace(start,end,old,new)
    replace(v.begin(),v.end(),5,52);
    cout<<"vector v : ";
    print_vector(v);    
    
    //unique(start,end)
    unique(v.begin(),v.end());
    cout<<"vector v : ";
    print_vector(v);

    //reverse
    reverse(v.begin(),v.end());
    cout<<"vector v : ";
    print_vector(v);


    //sort(start,end,cmp)
    sort(v.begin(),v.end());
    cout<<"vector v : ";
    print_vector(v);

    //partial_sort
    partial_sort(v2.begin(),v2.begin()+2,v2.end());
    cout<<"vector v2 : ";
    print_vector(v2);

    //is_sorted
    cout<<"issorted : "<<is_sorted(v.begin(),v.end())<<endl;

    //nth element
    nth_element(v2.begin(),v2.begin()+4,v2.end());
    cout<<"vector v2 : ";
    print_vector(v2);


    //binary_sort()
    cout<<" element 55 : "<<binary_search(v.begin(),v.end(),55)<<endl;;


    //max 
    cout<<"Max of 5 and 6 is : "<<max(5,6)<<endl;

    //min
    cout<<"Min of a and  m is : "<<min('a','m')<<endl;


    //max element
    cout<<"Max of v : "<<*max_element(v.begin(),v.end())<<endl;

    //min element
    cout<<"Max of v : "<<*min_element(v.begin(),v.end())<<endl;

}