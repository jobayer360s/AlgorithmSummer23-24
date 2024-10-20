
#include<bits/stdc++.h>
using namespace std;
int main(){
int n, m ;



ifstream fin("data.txt");

fin>>n>>m;
//dynamic 2d array
int **g = new int* [n];
for(int i = 0; i<n;i++){
    g[i] = new int [n];
}


//Zero
for(int i = 0; i<n;i++){
   for ( int j =0 ; j<n; j++){
    g[i][j] = 0;

   }
}


//input edges
int u , v ;

for(int i = 0; i<n;i++){
   fin>>u>>v;
   g[u][v]=g[v][u] =1;
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

