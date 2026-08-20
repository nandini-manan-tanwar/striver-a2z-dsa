/*
Vectors-in STL are basically dynamic arrays that have the ability
to change size whenever elements are added or deleted from them.

1.Vector elements can be easily accessed and traversed using 
iterators

declaration---> vector<data_type>name;
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int> vet;
    vet.push_back(2);
    vet.push_back(3);
    vet.emplace_back(4);
   
    cout<<vet[0]<<"\n";
    cout<<vet[1]<<"\n";
    cout<<vet[2]<<"\n";
    
    /*vectors&pairs*/
    vector<pair<int,int>>vec;
    vec.push_back({3,4});
    cout<<vec[0].first<<"\n";
    vector<int>v(6,100);
    for (int i=0;i<6;i++)
    {
       cout<<v[i]<<"\n";
    }
    vector<int>v1(v);
    cout<<"v1"<<"\n";
    for (int i=0;i<6;i++)
    {
       cout<<v1[i]<<"\n";
    }
    
    /* vector and iterators */
    /* 
    1. iterators points to memory address 
    */
   vector<int>::iterator it=vet.begin();
   cout<<*(it)<<"\n";
   it++;
   cout<<*(it)<<"\n";
   vector<int>::iterator rt=vet.end();
    rt--;
   cout<<*(rt)<<"\n";
   cout<<"----the printing----"<<"\n";
   for(vector<int>::iterator it=vet.begin();it!=vet.end();it++)
        cout<<*(it)<<"\n";
    /*instead of vector<int>::iterator we can write auto*/
     cout<<"--------"<<"\n";
     for(auto it=vet.begin();it!=vet.end();it++)
          cout<<*(it)<<"\n";
    cout<<"--------"<<"\n";
   /* deleting an element in vector */
   vet.erase(vet.begin()+1);
   for(auto it:vet)
          cout<<it<<"\n";
   
   cout<<"--------"<<"\n";
  /* insertion in vector */ 
  vector<int>nandu;
  nandu.push_back(50);
  nandu.push_back(60);
  nandu.push_back(70);
  nandu.push_back(80);
  nandu.insert(nandu.begin(),40);
  nandu.insert(nandu.end(),90);
  for (auto it:nandu)
  {
      cout<<it<<"\n";

  }
  cout<<"--------"<<"\n";
  cout<<nandu.empty();
  cout<<"--------"<<"\n";
  cout<<nandu.size();
  cout<<"--------"<<"\n";
  nandu.swap(vet);
  for (auto it:vet)
  {
      cout<<it<<"\n";

  }
  cout<<"--------"<<"\n";
  nandu.clear();
   for (auto it:nandu)
  {
      cout<<it<<"\n";

  }


   return 0;
}