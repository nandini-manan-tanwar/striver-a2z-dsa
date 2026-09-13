/*multiset allows repetition of elements*/

#include<bits/stdc++.h>
using namespace std;

void learning_multiset()
{
    multiset<int> st;
    st.insert(1);
    st.insert(1);
    st.insert(1);
    st.insert(1);
    st.insert(1);
    int cnt=st.count(1);
    cout<<cnt<<"\n";
    /* if we do ms.find(1) it will erase all 1*/
    /*to erase just 1 one*/
    st.erase(st.find(1));
     for (auto it=st.begin();it!=st.end();it++)
        cout<<*it<<"\n";
   
}

int main ()
{
    learning_multiset();
}