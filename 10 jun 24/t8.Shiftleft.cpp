#include<bits/stdc++.h>
using namespace std;
void printlist(int *a , int n)
{
       for(int i =0 ; i<n; i++){
            cout<<a[i]<<" ";
        }

cout<<"..............."<<endl;
}

int *shiftLeft(int *a, int n, int k){

 for(int j=0; j<k; j++){

for(int i =0 ; i<n ; i++){

a[i] = a[i+1];

}
 }

 for(int i = n ; i>k ; i--){
    a[i]=0;
 }

 return a;
}

int main(){
  int n = 20 ;
  int *a = new int [n];
  ifstream fin("20-shift.txt");


        for(int i =0 ; i<n; i++){
             fin>>a[i];
        }
printlist(a,n);
shiftLeft(a,n,10);
printlist(a,n);

return 0;
}
