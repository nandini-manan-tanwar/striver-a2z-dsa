/*
     *
    ***
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
     *
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for (int i=0;i<5;i++)
    {
        for (int space=5;space>i;space--)
      {
        cout << " ";
      }
      
        for (int j=0;j<2*i+1;j++)
      {
        cout << "*";
      }

      cout<<"\n";
    }



    for (int i=5;i>=0;i--)
    {
        for (int space=4;space>=i;space--)
      {
        cout << " ";
      }
      
        for (int j=0;j<2*i+1;j++)
      {
        cout << "*";
      }

      cout<<"\n";
    }


}