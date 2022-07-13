#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v= {12,23,45,65,76};

    //-- print elements using vector iterator --
    vector<int>::iterator it;

    for(it = v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";   //using * bcz of pointer 'it'
    }
    cout<<endl;
    //-- print elements using for each loop --

    for(int u : v)
    {
        cout<<u<<" ";
    }
    cout<<endl;
    for(auto u : v)   //auto will detect automatically type of the data
    {
        cout<<u<<" ";
    }
    cout<<endl;
}
