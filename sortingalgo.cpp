#include<bits/stdc++.h>
using namespace std;
/* a,n,i,j,v,k,l,m,b*/
void learning_sorting()
{
    int a[]={4,5,3,8};
    int n = 4;
    sort(a,a+n);
    int i=0;
  
       while (i<n)
        {
          cout<<a[i]<<endl;
          i++;
        } 

    cout<<"------------------------"<<endl;
    vector<int> v = {4,5,3,8};
    sort(v.begin(),v.end());
    for (auto it:v)
  {
      cout<<it<<endl;

  }
  cout<<"------------------------"<<endl;
 
  int k[]={4,5,3,8};
  sort(k+1,k+(n-1));
   int j=0;
      while (j<n)
        {
          cout<<k[j]<<endl;
          j++;
        } 
 cout<<"------------------------"<<endl;
 
  int l[]={4,5,3,8};
    
    sort(l,l+n,greater<int>());
    int m=0;
  
       while (m<n)
        {
          cout<<l[m]<<endl;
          m++;
        } 
 cout<<"------------------------"<<endl;

  pair<int,int> c[]={{2,3},{1,2},{2,2}};
  for(auto ct:c)
  {
    cout<<"{"<<ct.first<<" "<<ct.second<<"}"<< endl;
  }
   
}

    
    
    /* a fun way
    sort the c[] in ascending order according to 2nd element
    if same then according to first element but in descending */
    bool comp(pair<int,int>p1,pair<int,int>p2)
    {
      if(p1.second<p2.second)
      return true;
      else if (p1.second=p2.second)
      {
        if(p1.first>p1.second)
          return true;
      }
     
      return false;
    }
  
  int built_in_popcount()
  {
    cout<<"------------------------"<<endl;
   int num=2;
  
   int jnt= __builtin_popcount(num);
   cout<<jnt<<endl;
   return jnt;
  }

void permutating()
{
  cout<<"------------------------"<<endl;
  string s="564";
  sort(s.begin(),s.end());
  
  do 
  {
   cout<<s<<endl;
  }while (next_permutation(s.begin(),s.end()));
  
}
 


int main()
{
    learning_sorting();
    pair<int,int> c[]={{2,3},{1,2},{2,2}};
    built_in_popcount();
    permutating();
    return 0;
    
}