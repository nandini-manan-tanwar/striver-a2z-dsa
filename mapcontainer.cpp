/*map in STL are associative containers where each element 
consists of a key value and a mapped value. Two mapped values 
cannot have the same key value.*/

/* stores
1. unique keys
2. in sorted order*/

#include<bits/stdc++.h>
using namespace std;

void learning_mapcontainer()
{
 map<int,int> mp;
 map<pair<int,int>,int> lp;
 mp[2]=4;
 mp.emplace(6,7);
 mp.insert({1,3});

 lp[{8,9}]=10;
 lp.insert({{7,8},9});

for(auto it: mp)
 {
    cout<<"key-"<<it.first<<":"<<"value-"<<it.second<<endl;
 }
cout<<"2nd typa -------------"<<endl;
for(auto it: lp)
 {
    cout<<"(key-"<<it.first.first<<","<<"key-"<<it.first.second<<")"<<":"<<"value-"<<it.second<<endl;
 }

 cout<<mp[1]<<endl;
 auto it=mp.find(2);
 cout << (*it).first<<"-"<<(*it).second;
}

int main ()
{
    learning_mapcontainer();
}