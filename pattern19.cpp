/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    for (int i=5;i>=1;i--)
    {
        for (int j=0;j<i;j++)
      {
        cout <<"*";
      }
       for (int space1=0;space1<cnt*2;space1++)
      {
        cout << " ";
      }
      cnt++;
       for (int k=0;k<i;k++)
      {
        cout <<"*";
      }
 
      cout<<"\n";
    }
   int cnt1=0;
    for (int i = 1; i <=5; i++)
   {
    for (int j = 1; j <=i; j++)
    {
       cout <<"*";
    }
    for (int space2=8;space2>cnt1;space2--)
      {
        cout << " ";
      }
    cnt1=cnt1+2;
    for (int o = 1; o<=i; o++)
    {
       cout <<"*";
    }
    
    cout<<"\n";
  }


}