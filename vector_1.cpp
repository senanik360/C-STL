/* vector dynamic*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    cout<<v[3]<<endl;

    v[3]=9; //changing the value of index 3
    cout<<v[3]<<endl;

    cout<<"Size : "<<v.size()<<endl;  //return the size of vector

    cout<<"V elements : ";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // --- taking input ---

    vector<int> v2;
    int a,n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v2.push_back(a);
    }
    cout<<"\nV2 : ";

    for(int i=0; i<n; i++)
    {
        cout<<v2[i]<< " ";
    }

    vector<int> v3 = {10,20,30,40,50,60}; //another way to store value in a vector
    cout<<"\nV3 : ";
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<< " ";
    }

    v3.clear(); //clear elements form v3 vector
    cout<<"\nAfter using clear function V3 size : "<<v3.size()<<endl;
    cout<<v3.empty()<<endl;//its a boolean function, so return 0/1
    v3 = {34,54,23};
    cout<<v3.empty()<<endl;//its a boolean function, so return 0/1

     v3.resize(10); //now vector size is 10 and rest of the elements is 0

      for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<< " ";
    }
    /*   vector<int> v;
       v.push_back(2);
       v.push_back(3);
       v.push_back(5);
       v.push_back(7);

       v[3]=9;

       for(int i=0; i<v.size(); i++)
       {
           cout<<v[i]<<" ";
       }
       cout<<endl;
       vector<int> v1;
       int n,a;
       cin>>n;
       for(int i=0; i<n; i++)
       {
           cin>>a;
           v1.push_back(a);
       }
       for(int i=0; i<v1.size(); i++)
       {
           cout<<v1[i]<<" ";
       }
       cout<<endl;
       vector <int> v2 = {101,102,103,104};
       for(int i=0; i<v2.size(); i++)
       {
           cout<<v2[i]<<" ";
       }
       cout<<endl;
       v2.clear(); // vector elements clear
       cout<<v2.empty()<<endl; //boolean function, print 0/1 whether its empty or not
       v2.resize(10); // vector resize kore dibe & zero print korbe

       vector <int> v3(10); //works exactly like array
       vector <int> v4(10,3); //shob gula index a 3 assign kore dibe
    */
}
