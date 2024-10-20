#include <bits/stdc++.h>
#include<queue>
using namespace std;


//correction needed

int main() {
queue <string> st;
cout<<st.empty()<<endl;
st.push("JOBAYER");
st.push("Humaira");
st.push("Jakia");
st.push("Shamin");
cout<<st.empty()<<endl;
cout<<st.front()<<endl;
st.pop();
//cout<<st.top()<<endl;

while (!st.empty())
{
    cout<<st.front()<<" ";
    st.pop();
}
    return 0;
}


