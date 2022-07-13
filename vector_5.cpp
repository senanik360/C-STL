/* - - Sorting a vector - - */
#include<bits/stdc++.h>
using namespace std;
int main()
{

//   int a[]= {4,3,7,1,2,9,8,0};
    vector<int> v= {4,3,7,1,2,9,8,0};
    cout<<"Before sorting : ";
    for(auto u : v)
    {
        cout<<u<<" ";
    }
    cout<<endl;
    //sort(a,a+8);
    sort(v.begin(),v.end()); //complexity of sort function is O(nlog2(n))
    cout<<"After sorting : ";

    for(auto u : v)
    {
        cout<<u<<" ";
    }
    cout<<endl;

    vector<int> v2= {40,30,70,10,20,90,80,50};
    sort(v2.begin(), v2.begin()+5); //it will sort till index 5

    cout<<"After sorting V2 : ";

    for(auto u : v2)
    {
        cout<<u<<" ";
    }

    cout<<endl;
  //  --  sort in decreasing order --
    vector<int> v3= {40,30,70,10,20,90,80,50};
    sort(v3.begin(), v3.end(), greater<int>()); //it will sort by decreasing order

    cout<<"After sorting V3 by decreasing order : ";

    for(auto u : v3)
    {
        cout<<u<<" ";
    }
    cout<<endl;
   // -- another way to sort in decreasing order --
    vector<int> v4= {40,30,70,10,20,90,80,50};
    sort(v4.rbegin(), v3.rend()); //it will sort in reverse order

    cout<<"After sorting V4 in reverse order : ";

    for(auto u : v4)
    {
        cout<<u<<" ";
    }
}
