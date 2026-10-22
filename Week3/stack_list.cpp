
#include<iostream>
#include<vector>
using namespace std;

void themvaocuoi(int x, vector<int>& V) {
    V.push_back(x);
}

int xoacuoi(vector<int>& V) {
    int k = V.back();
    V.pop_back();
    return k;
}

class stack2 {
private:
    vector<int> v;

public:
    void push(int x) {
        themvaocuoi(x, v);
    }

    int pop() {
        if (v.empty()) return -1;
        return xoacuoi(v);
    }

    int top() {
        if (v.empty()) return -1;
        return v.back();
    }
};

int main() {
    stack2 st;
    st.push(6);
    st.push(7);

    cout << st.pop() << endl;
    cout << st.top() << endl;

    return 0;
}
