/*  - - Max-Min element from a vector - - */
#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v= {3,2,5,4,5,7,8,1,7};

    vector<int> :: iterator it = max_element(v.begin(), v.end());
    cout<<"Max element is "<<*it<<endl;
    int n = max_element(v.begin(), v.end()) - v.begin();

    cout<<"Max element at index "<<n<<endl;
    vector<int> :: iterator it2 = min_element(v.begin(), v.end());
    cout<<"Min element is "<<*it2<<endl;
    vector<int> :: iterator it3 = min_element(v.begin()+1, v.begin()+4); //check from index 1 to index 4
    cout<<"Max element from index 1 to index 4 is "<<*it3<<endl;
}
