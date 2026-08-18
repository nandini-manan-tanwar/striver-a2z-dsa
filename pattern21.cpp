/*
*     *
    
    
*     *
    
* * * * 

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for (int i=1;i<=8;i++)
    {
       if (i==1||i==3||i==6||i==8)
       {
          if (i==1||i==8)
          { for (int j = 1; j <=4; j++)
              {
                 cout <<"*"<<" ";
              }
          }
          else 
          {
            cout<<"*";
            for (int j = 1; j <=4; j++)
              {
                 cout <<" ";
              }
            cout <<" "<<"*";
          }
        }
        else
        {
            for (int j = 1; j <=4; j++)
              {
                 cout <<" ";
              }

        }
      cout<<"\n";
    }


}