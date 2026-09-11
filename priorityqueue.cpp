/* priority queue- queue whose largent element stays at top in heap*/
#include<bits/stdc++.h>
using namespace std;
priority_queue<int>pq;
void learning_priorityqueue()
{
pq.push(4);
pq.push(1);
pq.push(5);
pq.push(9);
pq.push(7);
}

void display()
{
    while(!pq.empty())
    {
        cout<<pq.top()<<"\n";
        pq.pop();

    }
}

void minimun_heap()
{
    priority_queue<int,vector<int>,greater<int>>pq1;
    cout<<"---------minimum---------"<<"\n";
     pq1.push(4);
     pq1.push(1);
     pq1.push(5);
     pq1.push(9);
     pq1.push(7);
     
  void display();
     {
      while(!pq1.empty())
      {
        cout<<pq1.top()<<"\n";
        pq1.pop();

      }
     }

}
 

int main()
{
    learning_priorityqueue();
    display();
    minimun_heap();
}