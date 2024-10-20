#include<bits/stdc++.h>
using namespace std;

void printAdjList(vector<int> *adjList , int n){

    for(int i=0; i<n ; i++)
    {
    cout<<i<<"------>";
    for(int j=0; j<adjList[i].size(); j++)
    {
    cout<<adjList[i][j]<<" , ";
    }
    cout<<endl;
    }

}


void BFS(vector<int> *adjList, int n, int s) {
    queue<int> q;
    int *visited = new int[n];
    int *distance = new int[n];

    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        distance[i] = INT_MAX; // Initialize distances to a large value
    }

    q.push(s);
    visited[s] = 1;
    distance[s] = 0;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int i = 0; i < adjList[v].size(); i++) {
            int neighbor = adjList[v][i];
            if (visited[neighbor] == 0) {
                q.push(neighbor);
                visited[neighbor] = 1;
                distance[neighbor] = distance[v] + 1; // Update distance
            }
        }
    }

    cout << "Distance from source " << s << ":\n";
    for (int i = 0; i < n; i++) {
        cout << i << " : " << distance[i] << endl;
    }
}



int main(){
ifstream fin("Udgraph.txt");
int n,m;
fin>>n>>m;

vector<int> *adjList = new vector <int> [n];
int u , v;
for(int i=0; i<m ; i++)
{
fin>>u>>v;
adjList[u].push_back(v);
adjList[v].push_back(u);
}
printAdjList(adjList,n);
BFS(adjList,n,0);
return 0;
}
