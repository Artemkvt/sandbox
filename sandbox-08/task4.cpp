#include <iostream>

struct Node {
    int value;
    Node* next;
};

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int values[] = {1, 2, 3};

    for (int i = 0; i < 3; ++i) {
        Node* n = new Node{values[i], nullptr};
        if (head == nullptr) {
            head = n;
            tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
    }

    int count = 0;
    for (Node* n = head; n != nullptr; n = n->next) {
        std::cout << n->value << (n->next != nullptr ? ' ' : '\n');
        ++count;
    }
    std::cout << count << '\n';

    while (head != nullptr) {
        Node* next = head->next;
        delete head;
        head = next;
    }
    return 0;
}
