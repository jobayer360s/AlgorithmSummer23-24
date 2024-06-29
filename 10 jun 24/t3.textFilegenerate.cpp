#include<bits/stdc++.h>
using namespace std;

int main(){

    srand(time(0));
       ofstream fout("50k.txt"); // for storing data's in a file
        for(int i =0 ; i<50000; i++){
             int a = rand()%50000+1; //6+1 for avoiding 0;
             fout<<a<<endl;
        }

return 0;
}
