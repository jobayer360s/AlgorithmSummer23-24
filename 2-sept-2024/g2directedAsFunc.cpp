#include <bits/stdc++.h>
using namespace std;

void printGraph(int **g, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
}

void inputEdges(int **g, int m) {
    int u, v;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        g[u][v] = 1; // for directed graph
    }
}

int **createZeroMatrix(int n) {
    int **g = new int*[n];
    for (int i = 0; i < n; i++) {
        g[i] = new int[n];
        for (int j = 0; j < n; j++) {
            g[i][j] = 0;
        }
    }
    return g;
}

void deleteMatrix(int **g, int n) {
    for (int i = 0; i < n; i++) {
        delete[] g[i];
    }
    delete[] g;
}

int main() {
    int n = 6, m = 9;
    int **g = createZeroMatrix(n);
    inputEdges(g, m);
    printGraph(g, n);
    deleteMatrix(g, n);
    return 0;
}
