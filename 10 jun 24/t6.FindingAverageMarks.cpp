#include<bits/stdc++.h>
using namespace std;

int average(int *a , int n ){
        int avg , sum = 0 , i;
          for(int i =0 ; i<n; i++){
             sum+=a[i];
        }
      avg = sum/n;
    return avg;

}

int main(){
  int n = 40 ;
  int *a = new int [n];
  ifstream fin("marks.txt");


        for(int i =0 ; i<n; i++){
             fin>>a[i];
        }

        for(int i =0 ; i<n; i++){
            cout<<"student "<<i+1<<" "<<a[i]<<endl;
        }

             cout<<" average is "<<average(a,n)<<endl;
return 0;
}
