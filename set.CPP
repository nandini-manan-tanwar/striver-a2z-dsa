/*A set in STL is a container that stores unique elements in a 
particular order. Every operation on a set takes O(1) complexity
 in the average case and takes O(n) in the worst case.*/

#include<bits/stdc++.h>
using namespace std;

void learning_set()
{
    set<int> st;
    st.insert(4);
    st.insert(2);
    st.insert(7);
    st.insert(9);
    st.insert(5);
    cout<<st.count(2)<<"\n";
    
    for (auto it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<"\n";
    }
    
   auto rt=st.find(4);
   cout<<(*rt)<<"\n";
   auto lt=st.find(3);
    cout<<(*lt)<<"\n";
    auto it1=st.find(2);
    auto it2=st.find(5);
    st.erase(it1,it2);
    for (auto it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<"\n";
    }
}

int main()
{
    learning_set();
}