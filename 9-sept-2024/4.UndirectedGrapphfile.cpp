#include<bits/stdc++.h>
using namespace std;
#define SIZE 100


int main(){
ifstream fin("data.txt");
vector<int> adjList[SIZE];
int n,m; //n = edges m = vertex
fin>>n>>m;
int  u , v ;

for(int i=0; i<m ; i++)
{
fin>>u>>v;
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



// Calculate the degree for each vertex
    // for (int i = 0; i < n; i++) {
    //     cout << "Vertex " << i << " has degree " << adjList[i].size() << endl;
    // }

    int check;
cout<<"Enter the vertex to check degree ";
cin>>check;
cout << "Vertex " << check << " has degree " << adjList[check].size() << endl;

return 0;
}
