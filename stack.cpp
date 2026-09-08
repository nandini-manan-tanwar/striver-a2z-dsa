#include<bits/stdc++.h>
using namespace std;
/*time complexity=O(1)*/

void learnstack()
{
   stack <int> st;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.push(5);
   cout<< st.top()<<"\n";
   st.pop();
   cout<< st.top()<<"\n";
   cout<< st.size()<<"\n";
   
   cout<<st.empty()<<"\n";
   
}

int main ()
{
    learnstack();
}