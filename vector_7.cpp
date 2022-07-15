/* Unique value from a vector */
#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v= {3,2,5,4,5,7,8,1,7};
    sort(v.begin(), v.end());  //O(nlog2(n))
    int sz = unique(v.begin(), v.end()) - v.begin(); //O(n)
    for(int u=0; u<sz; u++)
    {
        cout<<v[u]<<" ";
    }
    cout<<endl;
}
