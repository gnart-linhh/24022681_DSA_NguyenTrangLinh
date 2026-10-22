
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

// Them vao cuoi Linked List: O(n) 
Node* themvaocuoi(Node* head, int x) {
    Node* p = new Node(x);
    if (head == nullptr) return p;

    Node* tmp = head;
    while (tmp->next != nullptr) {
        tmp = tmp->next;
    }
    tmp->next = p;
    return head;
}

// Xoa dau Linked List: O(1)
Node* xoadau(Node* head) {
    if (head == nullptr) return nullptr;

    Node* tmp = head;
    head = head->next;
    delete tmp;
    return head;
}

class queue1 {
private:
    Node* head = nullptr;

public:
    // Them vao cuoi: O(n)
    void enqueue(int x) {
        head = themvaocuoi(head, x);
    }

    // Xoa dau: O(1)
    int dequeue() {
        if (head == nullptr) return -1;

        int p = head->data;
        head = xoadau(head);
        return p;
    }

    // Xem phan tu dau: O(1)
    int front() {
        if (head == nullptr) return -1;
        return head->data;
    }
};

int main() {
    queue1 q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.dequeue() << endl;
    cout << q.front() << endl;

    return 0;
}
