// read from file...
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n = 10000 ;
  int *a = new int [n];
  ifstream fin("10k.txt");


        for(int i =0 ; i<n; i++){
             fin>>a[i];
        }

        for(int i =0 ; i<n; i++){
            cout<<i<<" "<<a[i]<<endl;
        }

return 0;
}
