#include <bits/stdc++.h>
using namespace std;

void revnumber()
{
   int i;
   int num;
   cout<<"enter your number"<<endl;
   cin>>num;
   int re ;
   while(re!=0)
   {
     re=num%10;
     num=num/10;
     if(re==0)
     break;
     cout<<re;
   }
 cout<<endl;
}

   void isPalindrome(int x) 
   {

        
        int num = x;
        int rem;
        int temp = num;

        string rev = "";

        while (num > 0)
        {
            rem = num % 10;
            num = num / 10;

            string str = to_string(rem);
            rev = rev + str;
        }

        string original = to_string(temp);

        if (rev == original)
            cout<<"palindrome number"<<endl;
        else
            cout<<" not palindrome number"<<endl;;
    }


void armstrong()
{
  int num,temp,re,sum=0;
  cout<<"enter your number"<<endl;
  cin>>num;
  temp=num;
  while(num<0)
  {
    cout<<"not valid must be >0"<<endl;
     cout<<"enter your number"<<endl;
     cin>>num;
   
  }
  while(num>0)
  {
     re=num%10;
     num=num/10;
     sum=sum+pow(re,3);
  }
  if (sum==temp)
  cout<<"armstrong number"<<endl;
  else
  cout<<"not armstrong number"<<endl;
  
}

int main()
{
  revnumber();
  isPalindrome(121);
  armstrong();
}