#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v= {1,2,3,4,5,6,7};

    reverse(v.begin(), v.end()); //reverse the vector element

    for(auto u : v)
    {
        cout<<u<<" ";
    }
    cout<<endl;

    cout<<v.back()<<endl; //print the last element of vector , complexity O(1)

    v.pop_back(); //delete the last element, complexity O(1)

    cout<<v.back()<<endl;

    cout<<*v.begin()<<endl; //print the first element. * is used bcz of pointer, complexity O(1)

    v.erase(v.begin()); //delete the first element, complexity O(n)
    cout<<*v.begin()<<endl; //print the first element. * is used bcz of pointer, complexity O(1)
}
