/* Continue taking input. Break while taking 0 as input */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        v.push_back(n);
    }

    for(auto u : v)
    {
        cout<<u<<" ";
    }
    cout<<endl;

}
