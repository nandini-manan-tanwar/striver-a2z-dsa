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

}

   bool isPalindrome(int x) {

        if (x < 0)
            return false;

        if (x == 0)
            return true;

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
            return true;
        else
            return false;
    }




int main()
{
  revnumber();
  isPalindrome(121);
}