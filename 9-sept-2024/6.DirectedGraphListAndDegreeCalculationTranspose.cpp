#include<bits/stdc++.h>

using namespace std;
 
 void neighbour(int u , vector <int> *adj){
    
    for(int j=0; j<adj[u].size() ; j++)
    {
    cout<<adj[u][j]<<" ";
    }


 }

vector<int> *transpose (vector <int> *adj, int n){
    vector<int> *List = new vector <int>[n];
     for(int i=0 ; i<n; i++)
     {
      for(int j=0 ; j<adj[i].size(); j++)
        {
          List[adj[i][j]].push_back(i);
            }
               }
               return List;
    
}

void printList(int n, vector<int> *adj) {
 
    for (int i = 0; i < n; i++) {
 
        cout << i << " ----> ";
 
        for (int j = 0; j < adj[i].size(); j++) {
 
            cout << adj[i][j] << ", ";
 
        }
 
        cout << endl;
 
    }
 
}
 
 
int outDegree(vector<int> *adj, int u) {
 
    return adj[u].size();
 
}
 
 
int inDegree(vector<int> *adj, int n, int u) {
 
    int indegs= 0;
 
    for (int i = 0; i < n; i++) {
 
        for (int j = 0; j < adj[i].size(); j++) {
 
            if (adj[i][j] == u) {
 
                indegs++;
 
            }
 
        }
 
    }
 
    return indegs;
 
}
 
#define Size 100
 
int main() {
 ifstream fin("data2.txt");
    vector<int> adjList[Size];
 
    int n, m;
 
    fin >> n >> m;
 
    int u, v;
 
    for (int i = 0; i < m; i++) {
 
        fin >> u >> v;
 
        adjList[u].push_back(v);
 
    }
 
    printList(n, adjList);
 
    int vertex;
 
    // cout << "Enter a vertex to get its in-degree and out-degree: ";
 
    // cin >> vertex;
 
    // if (vertex >= 0 && vertex < n) {
 
    //     cout << "Out-degree of vertex " << vertex << ": " << outDegree(adjList, vertex) << endl;
 
    //     cout << "In-degree of vertex " << vertex << ": " << inDegree(adjList, n, vertex) << endl;
 
    // } else {
 
    //     cout << "Invalid vertex!" << endl;
 
    // }


    vector<int> *l = transpose(adjList, n);
    cout<<"\n";

    printList(n,l);
 
    return 0;
 
}