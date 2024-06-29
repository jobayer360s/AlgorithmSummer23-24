
#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;



void printlist(int *a , int n)
{
       for(int i =0 ; i<n; i++){
            cout<<a[i]<<" ";
        }

cout<<"\n..............."<<endl;
}

int *buble(int *a, int n){
   for(int i =0 ; i<n-1; i++)
    for(int j =0 ; j<n-i-1; j++){
        if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
        }
    }

 return a;
}


int main(){

int n = 50000 ;
  int *a = new int [n];
  ifstream fin("50k.txt");


        for(int i =0 ; i<n; i++){
             fin>>a[i];
        }
//printlist(a,n);
int *m = new int [n];
auto start = high_resolution_clock::now();
 m = buble(a,n);
//printlist(m,n);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);

    cout << "Time taken by function: " << duration.count() << " seconds" << endl;

    return 0;
}
