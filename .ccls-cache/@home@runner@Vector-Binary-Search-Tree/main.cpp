#include <iostream>
#include <vector>

class Node {
 public:
  Node(int data) : data(data) {}
  int data;
};

class BinaryTree {
 public:
  ~BinaryTree() {
    for (auto& n : nodes) {
      delete n;
    }
  }

  std::vector<Node*> nodes;
};

class BinarySearchTree {
 public:
  void insert(int data) {
    // TODO: implement!
  }

  bool has_data(int data) {
    // TODO: implement!
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