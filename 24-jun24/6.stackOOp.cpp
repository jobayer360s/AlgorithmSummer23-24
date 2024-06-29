#include<bits/stdc++.h>

using namespace std;
template <typename T>

class Stacks{
private :
    T *Stack;
    int n;
    int t=-1;
public :
    Stacks(){
    n =5;
    Stack = new T[n];
    }




bool isFull(){
    return t == n-1;
}

bool isEmpty(){
return t==-1;
}

void push(int x){
    if(isFull()){
        cout<<"Underflow "<<endl;
    } else{
    Stack[++t] = x;
    }

}

void pop(){
    if(isEmpty()){
        cout<<"underflow "<<endl;
    }
    else{
        t--;
    }

}
void printStack(){

for( int i= t; i>=0; i --) cout<<Stack[i]<<endl;
}

int Size(){
return t+1;
}


};




int main(){
 Stacks<int> *s = new Stacks <int>();
 s->push(10);
 s->push(20);
 s->push(30);
 s->printStack();


return 0;
}


