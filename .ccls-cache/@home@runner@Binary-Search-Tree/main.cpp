#include <iostream>

class Node {
 public:
  Node(int data) : data(data) {}
  ~Node() {
    if (left != nullptr) delete left;
    if (right != nullptr) delete right;
  }

  int data;
  Node* left = nullptr;
  Node* right = nullptr;
};

class BinaryTree {
 public:
  ~BinaryTree() {
    if (head != nullptr) delete head;
  }

  Node* head = nullptr;
};

class BinarySearchTree {
 public:
  void insert(int data) {
    // TODO: implement!
  }

  bool has_data(int data) {
    // TODO: implement!
    return false;
  }

 private:
  BinaryTree btree;
};

int main() {
  BinarySearchTree btree;

  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int t;
    std::cin >> t;
    btree.insert(t);
  }

  int t;
  std::cin >> t;
  if (btree.has_data(t)) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
}