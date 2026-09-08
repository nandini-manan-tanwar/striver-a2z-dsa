# include <bits/stdc++.h>
using namespace std;

void learningqueue()
{
    queue<char> q;
    q.push('a');
    q.push('b');
    q.push('c');
    q.push('d');
    
    cout<<q.back()<<"\n";
    cout<<q.front()<<"\n";
    q.pop();
    cout<<q.front()<<"\n";

}

int main ()
{
   learningqueue ();
}
