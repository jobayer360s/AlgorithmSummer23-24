#include<bits/stdc++.h>
using namespace std;

void Merge(int *A , int *B , int n , int m ){

    int *c = new int [n+m];
    int i = 0, j =0, k=0;

    while(i<=n-1 && j<=m-1){
        if(A[i]>B[j]){
            c[k++] = B[j++];
        }
        else{
            c[k++] = A[i++];
        }

    }

    while(i <= n-1){
        c[k++]=A[i++];
    }

    while (j<= m-1){
        c[k++] = B[j++];
    }

    for(int x =0 ; x<n+m; x++){
        cout<<c[x]<<" ";
    }

}



int main(){

int a[5] ={10, 20, 30, 40, 50}, b[5] = {100, 110 , 120, 130, 140};

Merge(a,b , 5, 5);
 cout<<endl;
int *c = new int [5] = {1 , 2, 3, 4 , 5} ; //will give error
int *d = new int [5] ={11, 13, 15, 17 , 19}; // will give error
Merge(c, d , 5, 5);

return 0;
}
