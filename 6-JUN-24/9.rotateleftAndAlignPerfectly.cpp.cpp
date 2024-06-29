#include <iostream>
using namespace std;

void rotateLeft(int *A, int k) {
	int t[k];
	int size=6;
	
	  for(int i = 0; i < k; i++) {
        t[i] = A[i];
    }
	
		for(int j=0;j<size-k;j++){
			A[j]=A[j+k];
			
		}
	
	  for (int i =0; i<size; i++) {
        A[size-k+i] = t[i];
    }
		
	
	for(int i=0;i<size;i++){
		cout<<A[i]<<" ";
	}
  
}

int main() {
    int A[6] = {10, 20, 30, 40, 50, 60};

    rotateLeft(A, 3);

    

    return 0;
}
