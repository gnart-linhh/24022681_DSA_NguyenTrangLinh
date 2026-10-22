
#include<iostream>
#include<vector>
using namespace std;

// Them vao cuoi: O(1) 
void themvaocuoi(int x, vector<int>& V) {
    V.push_back(x);
}

// Xoa dau: O(n)
int xoadau(vector<int>& V) {
    int k = V[0];
    V.erase(V.begin());
    return k;
}

class queue2 {
private:
    vector<int> v;

public:
    void enqueue(int x) {
        themvaocuoi(x, v);
    }

    int dequeue() {
        if (v.empty()) return -1;
        return xoadau(v);
    }

    int front() {
        if (v.empty()) return -1;
        return v[0];
    }
};

int main() {
    queue2 q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.dequeue() << endl;
    cout << q.front() << endl;

    return 0;
}
