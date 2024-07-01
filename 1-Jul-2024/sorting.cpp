#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int Partition (int *p , int Start , int End){
int pivot = p[End];
int pindex = Start;
for(int i = Start ; i<End; i++){
    if(p[i]<pivot){
        swap(p[i], p[pindex]);
        pindex++;
    }
}
swap(p[pindex],p[End]);
return pindex;
}


void QuickSort(int *p , int S, int E ){
 if(S<=E){
    int pIndex = Partition(p ,S, E);
    QuickSort(p,S,pIndex-1);
    QuickSort(p,pIndex+1,E);
 }

}

void selectionSort(int *arr, int n) {
    int i, j, min_idx;

    for (i = 0; i < n-1; i++) {

        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
}



int main(){
cout<<"Problem no "<<(50647)%3<<endl;
//1 selection vs quick

 int n = 300000 ;
  int *a = new int [n];
  ifstream fin("1000k.txt");


        for(int i =0 ; i<n; i++){
             fin>>a[i];
        }

        /*for(int i =0 ; i<n; i++){
            cout<<i<<" "<<a[i]<<endl;
        }*/

auto start = high_resolution_clock::now();
QuickSort(a,0 , n-1 );

auto stop = high_resolution_clock::now();

auto duration = duration_cast<seconds>(stop - start);
cout <<"Time taken by Quick sort "<< duration.count() << endl;




auto start2 = high_resolution_clock::now();
selectionSort(a,n-1);
auto stop2 = high_resolution_clock::now();

auto duration2 = duration_cast<seconds>(stop2 - start2);
cout<<"Time taken by Selection sort "<<duration2.count() << endl;

return 0;
}

