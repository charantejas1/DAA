#include <iostream>
using namespace std;

struct Node {
    int key[2], size;
    Node* child[3];
    Node(int k) {
        key[0] = k; size = 1;
        child[0] = child[1] = child[2] = nullptr;
    }
};

class TwoThreeTree {
    Node* root;
    void inorder(Node* n) {
        if (!n) return;
        if (n->size == 1) {
            inorder(n->child[0]);
            cout << n->key[0] << " ";
            inorder(n->child[1]);
        } else {
            inorder(n->child[0]);
            cout << n->key[0] << " ";
            inorder(n->child[1]);
            cout << n->key[1] << " ";
            inorder(n->child[2]);
        }
    }
public:
    TwoThreeTree() { root = nullptr; }
    void insert(int k) {
        if (!root) root = new Node(k);
        else {
            // For simplicity, just add second key if space
            if (root->size == 1) {
                if (k < root->key[0]) {
                    root->key[1] = root->key[0];
                    root->key[0] = k;
                } else root->key[1] = k;
                root->size = 2;
            } else {
                cout << "Insertion beyond 2 keys not shown.\n";
            }
        }
    }
    void display() { inorder(root); cout << endl; }
};

int main() {
    TwoThreeTree t;
    t.insert(10);
    t.insert(20);
    t.insert(5);
    cout << "Inorder: ";
    t.display();
}