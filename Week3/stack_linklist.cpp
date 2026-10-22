
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

Node* themvaodau(Node* head, int x) {
    Node* p = new Node(x);
    p->next = head;
    return p;
}

Node* xoadau(Node* head) {
    if (head == nullptr) return nullptr;
    Node* tmp = head;
    head = head->next;
    delete tmp;
    return head;
}

class stack1 {
private:
    Node* head = nullptr;

public:
    void push(int x) {
        head = themvaodau(head, x);
    }

    int pop() {
        if (head == nullptr) return -1;
        int p = head->data;
        head = xoadau(head);
        return p;
    }

    int top() {
        if (head == nullptr) return -1;
        return head->data;
    }
};

int main() {
    stack1 st;
    st.push(3);
    st.push(20);

    cout << st.pop() << endl;
    cout << st.top() << endl;

    return 0;
}
