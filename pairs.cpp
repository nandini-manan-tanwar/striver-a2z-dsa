/*
STL stands for standard template library which contains a lot of
pre-defined templates in terms of containers and classes which 
makes it very easy for developers or programmers to implement 
different data structures easily without having to write 
complete code and worry about space-time complexities.

-----pairs-------
-part of utility library
-have nested property
syntax - pair <datatype,datatype> p={1,3}
*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    pair<int,int>p={1,3};
    cout<<p.first;
    cout<<"\n";
    
/*#nested pairs*/
pair <int,pair<int,int>> q={1,{3,4}};
cout << q.second.first;
cout<<"\n";


/*array-pairs*/
pair<int,int>arr[]={{3,5},{7,9},{4,3}};
cout << arr[2].second;
return 0;

}


