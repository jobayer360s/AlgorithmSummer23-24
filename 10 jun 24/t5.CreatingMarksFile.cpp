#include<bits/stdc++.h>
using namespace std;

int main(){

    srand(time(0));
       ofstream fout("marks.txt");
        for(int i =0 ; i<40; i++){
             int m = rand()%100+1;
             fout<<m<<endl;
        }

return 0;
}
