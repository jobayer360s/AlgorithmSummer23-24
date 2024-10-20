#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    // Dynamic 2D array
    int **g = new int*[n];
    for(int i = 0; i < n; i++){
        g[i] = new int[n];
    }

    // Initialize to zero
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            g[i][j] = 0;
        }
    }

    // Input edges
    int u, v;
    for(int i = 0; i < m; i++){
        cin>>u>>v;
        g[u][v] = g[v][u] = 1;
    }

    // Print adjacency matrix
    cout<< "Adjacency Matrix:" <<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << g[i][j] << " ";
        }
        cout << endl;
    }

    // Calculate and print degree of each vertex
    cout << "Degrees of vertices:" <<endl;
    for(int i = 0; i < n; i++){
        int degree = 0;
        for(int j = 0; j < n; j++){
            degree += g[i][j];
        }
        cout<<"Vertex "<<i<<": "<<degree<<endl;
    }


    return 0;
}

