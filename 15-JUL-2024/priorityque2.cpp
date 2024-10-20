#include <bits/stdc++.h>

using namespace std;
struct compare{
   bool operator()(const int & a , const int &b){
   return a>b;
   }

};

//correction needed

int main() {
priority_queue <int, vector<int>, compare> pq;
pq.push(10);
pq.push(20);
pq.push(30);
pq.push(40);
pq.pop();


while (!pq.empty())
{
    cout<<pq.top()<<" ";
    pq.pop();
}
    return 0;
}


//img in phone

