#include<bits/stdc++.h>
using namespace std;
#define SIZE 100


int main(){

vector<int> adjList[SIZE];
int n,m; //n = edges m = vertex
cin>>n>>m;
int  u , v ;

for(int i=0; i<m ; i++)
{
cin>>u>>v;
adjList[u].push_back(v);
adjList[u].push_back(u);//for dicrected this line is not valid
}

for(int i=0 ; i<n; i++)
{
    cout<<i<<".....>";
 for(int j=0 ; j<adjList[i].size(); j++)
   {
    cout<<adjList[i][j]<<", ";

       }
       cout<<endl;
          }

return 0;
}
