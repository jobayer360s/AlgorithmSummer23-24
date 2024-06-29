#include<bits/stdc++.h>
using namespace std;

int main(){

    srand(time(0));
       ofstream fout("20-shift.txt");
        for(int i =0 ; i<20; i++){
             int a = rand()%1000+1;
             fout<<a<<endl;
        }

return 0;
}

