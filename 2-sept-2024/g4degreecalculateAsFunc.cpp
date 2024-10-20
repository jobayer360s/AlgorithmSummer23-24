#include <bits/stdc++.h>
using namespace std;

void initializeMatrix(int** g, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            g[i][j] = 0;
        }
    }
}

void inputEdges(int** g, int m) {
    int u, v;
    for (int i = 0; i<m; i++) {
        cin>>u>>v;
        g[u][v]=g[v][u]=1;
    }
}

void printAdjacencyMatrix(int** g, int n) {
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printDegrees(int** g, int n) {
    cout<<"Degrees of vertices:" <<endl;
    for (int i = 0; i < n; i++) {
        int degree = 0;
        for(int j = 0; j < n; j++) {
            degree += g[i][j];
        }
        cout<<"Vertex "<<i<< ": "<<degree<<endl;
    }
}






int findDegree(int** g, int vertex, int n) {
    int degree = 0;
    for (int j = 0; j < n; j++) {
        degree += g[vertex][j];
    }
    return degree;
}




int main() {
    int n, m;
    cin >> n >> m;

    // Dynamic 2D array
    int** g = new int*[n];
    for (int i = 0; i < n; i++) {
        g[i] = new int[n];
    }

    // Initialize to zero
    initializeMatrix(g, n);

    // Input edges
    inputEdges(g, m);

    // Print adjacency matrix
    printAdjacencyMatrix(g, n);

    // Calculate and print degree of each vertex
    //printDegrees(g, n);

   cout<< findDegree(g,1, n)<<endl;
    cout<< findDegree(g,3, n)<<endl;

    return 0;
}
