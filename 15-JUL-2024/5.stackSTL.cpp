#include <bits/stdc++.h>
#include<stack>
using namespace std;




int main() {
stack <int> st;
cout<<st.empty()<<endl;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
cout<<st.empty()<<endl;
cout<<st.top()<<endl;
st.pop();
cout<<st.top()<<endl;

while (!st.empty())
{
    cout<<st.top()<<" ";
    st.pop();
}
    return 0;
}

