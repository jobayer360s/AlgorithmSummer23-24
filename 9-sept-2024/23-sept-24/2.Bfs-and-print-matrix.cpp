#include<bits/stdc++.h>


using namespace std;


void printMatrix(int **M,int n){

       for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cout<<M[i][j]<<" ";

        }
        cout<<endl;
    }
}


  void BFS(int **M,int s,int n){
    queue<int> Q;

    int *distance=new int[n];
    int *visited=new int[n];

    for(int i=0;i<n;i++){
        distance[i]=0;
        visited[i]=0;
    }

    Q.push(s);
    visited[s]=1;

    while(!Q.empty()){
        int v=Q.front();
        Q.pop();
        cout<<v<<" ";
        for(int i=0;i<n;i++){
            if(M[v][i] ==1){
               int neibour=i;

             if(visited[neibour] == 0){
                visited[neibour]=1;
                Q.push(neibour);
                distance[neibour]=distance[v]+1;
            }
            }
        }

        }
        cout<<endl;
        cout<<"Distance form " <<endl;
        cout<<s<<" to ";
        for(int i=0;i<n;i++){
            cout<<i<<" : ";
            cout<<distance[i]<<endl;
    }
}



int main(){
    ifstream fin("udgraph.txt");
    int n,m;
    fin>>n>>m;

    int **Matrix =new int *[n];
     for(int i=0;i<n;i++){
        Matrix[i]=new int[n];
    }

    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            Matrix[i][j]=0;
        }
    }

    int u,v;
    for(int i=0;i<m;i++){
            fin>>u>>v;
        Matrix[u][v]=1;
        Matrix[v][u]=1;
    }

    printMatrix(Matrix,n);
    cout<<endl;

    BFS(Matrix,0,n);
    return 0;
}
