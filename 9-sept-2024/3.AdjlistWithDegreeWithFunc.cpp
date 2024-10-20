#include <bits/stdc++.h>
using namespace std;
#define SIZE 100

// Function to add an edge to the adjacency list
void addEdge(vector<int> adjList[], int u, int v) {
    adjList[u].push_back(v);
    // For undirected graphs, add the reverse edge as well
    adjList[v].push_back(u);
}

// Function to print the adjacency list
void printAdjList(vector<int> adjList[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i << " --> ";
        for (int j = 0; j < adjList[i].size(); j++) {
            cout << adjList[i][j];
            if (j < adjList[i].size() - 1)
                cout << ", ";
        }
        cout << endl;
    }
}

int main() {
    vector<int> adjList[SIZE];
    int n, m; // n = vertices, m = edges
    cin >> n >> m;
    int u, v;

    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        addEdge(adjList, u, v);
    }

    // Print the adjacency list
    printAdjList(adjList, n);

    // Calculate the degree for a specific vertex
    int check;
    cout << "Enter the vertex to check degree: ";
    cin >> check;
    cout << "Vertex " << check << " has degree " << adjList[check].size() << endl;

    return 0;
}

