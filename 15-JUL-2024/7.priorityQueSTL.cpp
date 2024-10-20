#include <bits/stdc++.h>
using namespace std;

// Custom comparator (though not used in your current priority queue)
struct compare {
    bool operator()(const int & a, const int & b) {
        return a > b;
    }
};

int main() {
    // Use std::greater<int> correctly
    priority_queue <int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.pop();

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
