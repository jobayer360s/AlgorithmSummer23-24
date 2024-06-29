#include<bits/stdc++.h>
using namespace std;

void printmatrix(int **p, int r, int c){


for(int i = 0 ; i<r; i++){
    for(int j=0 ; j<c ; j++)
    {
        cout<<p[i][j]<<" ";
    }
    cout<<endl;

}
}

int main(){
    int row;
    int colum;

    cout<<"Enter the row and colum "<<endl;
    cin>>row>>colum;

    int **m = new int *[row];
    for(int i =0 ; i<row; i++) m[i] = new int[colum];

    srand(time(0));

     for(int i = 0 ; i<row; i++){
    for(int j=0 ; j<colum ; j++)
    {
        m[i][j]=rand()%100;
    }

}

 printmatrix(m, row , colum);

return 0;
}
