#include <bits/stdc++.h>
using namespace std;

// Function to calculate indegree and outdegree of all vertices
void calculateDegrees(int** g, int n, int* indegree, int* outdegree) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (g[i][j] == 1) {
                outdegree[i]++;
                indegree[j]++;
            }
        }
    }
}

// Function to find the degree of a specific vertex
int findDegree(int vertex, int* indegree, int* outdegree) {
    return indegree[vertex] + outdegree[vertex];
}

int main() {
    int n, m;
    cin >> n >> m;

    // Dynamic 2D array
    int** g = new int*[n];
    for (int i = 0; i < n; i++) {
        g[i] = new int[n];
    }

    // Zero initialization
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            g[i][j] = 0;
        }
    }

    // Input edges
    int u, v;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        g[u][v] = 1; // For directed graph
    }

    // Allocate memory for indegree and outdegree arrays
    int* indegree = new int[n](); // Initialized to 0
    int* outdegree = new int[n](); // Initialized to 0

    // Calculate indegree and outdegree
    calculateDegrees(g, n, indegree, outdegree);

    // Print adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }

    // Print indegree and outdegree
    cout << "Vertex\tIndegree\tOutdegree" << endl;
    for (int i = 0; i < n; i++) {
        cout << i << "\t" << indegree[i] << "\t\t" << outdegree[i] << endl;
    }

    // Find degree of a specific vertex
    int vertex;
    cout << "Enter vertex to find its degree: ";
    cin >> vertex;
    cout << "Degree of vertex " << vertex << " is " << findDegree(vertex, indegree, outdegree) << endl;

    // Free dynamically allocated memory
    for (int i = 0; i < n; i++) {
        delete[] g[i];
    }
    delete[] g;
    delete[] indegree;
    delete[] outdegree;

    return 0;
}
