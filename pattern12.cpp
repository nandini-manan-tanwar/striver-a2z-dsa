/*
1      1
12    21
123  321
12344321
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    for (int i=1;i<=4;i++)
    {
     for (int j=1;j<=i;j++)
        {
           cout << j;
        }
       
      for (int space=4;space>i;space--)
      {
        cout <<"  ";
      }
      for (int k=i;k>=1;k--)
        {
           cout << k;
        }
       cout << "\n";
      
    }
}