/*
A list in STL is a contiguous container that allows the 
inserting and erasing of elements in constant time and 
iterating in both directions.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
list<int> ls;
ls.push_front(7);
cout<<ls.front();
return 0 ;
}