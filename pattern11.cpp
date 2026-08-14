/*
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for (int i=1;i<=5;i++)
    {
       
      for (int j=1;j<=i;j++)
      {
        
       if (i%2==0)
         if(j%2==1)
          cout << " "<<(j%2)-1;
          else
          cout << " "<<(j%2)+1;

        else
           cout << " "<<(j%2);
      }

      cout<<"\n";
    }

}

