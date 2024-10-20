
#include<bits/stdc++.h>
using namespace std;
int main(){
int n, m ;
cin>>n>>m;
//dynamic 2d array
int **g = new int* [n];
for(int i = 0; i<n;i++){
    g[i] = new int [n];
}


//make infinity
for(int i = 0; i<n;i++){
   for ( int j =0 ; j<n; j++){
    g[i][j] = 99; //for undirected weightedgraph

   }
}


//input edges
int u , v , w;

for(int i = 0; i<m;i++){
   cin>>u>>v>>w;
   g[u][v]=g[v][u] =w;
}

//print adjacency matrix
for(int i = 0; i<n;i++){
   for ( int j =0 ; j<n; j++){
    cout<<g[i][j]<<" " ;

   }
   cout<<endl;
}



return 0;
}
