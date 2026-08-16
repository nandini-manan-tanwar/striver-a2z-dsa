/*
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=4;
    for (char i='A';i<='D';i++)
    {
        
     for (int space=1;space<=cnt;space++)
      {
        cout <<"  ";
      }
      
       for (char j='A';j<=i;j++)
      {
        cout <<" "<<j;
      }
       for (char k=i-1;k>='A';k--)
      {
        cout <<" "<<k;
      }
     cnt-=1;

      cout<<"\n";
     
    }
    

}