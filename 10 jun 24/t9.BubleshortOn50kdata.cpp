#include<bits/stdc++.h>
using namespace std;
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
printlist(a,n);
int *m = new int [n];
 m = buble(a,n);
printlist(m,n);

return 0;
}
