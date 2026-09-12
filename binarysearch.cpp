#include<bits/stdc++.h>
using namespace std;
 



void logic()
{
    int max;
    cout<<"enter your desired size"<<"\n";
    cin>>max;
    
    int arr[max];

   for(int i=0;i<=max-1;i++)
    {
        cout<<"enter element"<<" "<<i<<"\n";
        cin>>arr[i];
    }

    
    int begin=0,end=max-1;
    
    int value;
    cout<<"enter value to find"<<"\n";
    cin>>value;

    while (begin<=end)
    {
        
        int mid=(begin+end)/2;
     
          if (value==arr[mid])
         {
            cout<<"found element at"<<mid;
            break;
         }
        
        else if (value<arr[mid])
         {
            cout<<"element not found";
            end=mid-1;
         }
        else 
          begin=mid+1;
      
        
    } 

    
}


int main()
{
    
    logic();
}