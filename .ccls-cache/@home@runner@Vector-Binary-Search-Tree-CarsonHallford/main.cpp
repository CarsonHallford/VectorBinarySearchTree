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
    Node* n = new Node(data);
    if (btree.nodes.size() == 0) {
      btree.nodes.push_back(n);
      return;
    } else {
      int current = 0;
      while (true) {
        if (btree.nodes[current]->data < data) {
          current = (current * 2) + 2;
        } else {
          current = (current * 2) + 1;
        }
        if (btree.nodes.size() >= current) {
          btree.nodes.resize(current - 1, nullptr);
        }
        if (btree.nodes[current] == nullptr) {
          btree.nodes[current] = n;
          break;
        }
      }
    }
  }

  bool has_data(int data) {
    // TODO: implement!
    if (btree.nodes.size() == 0) {
      return false;
    } else {
      int current = 0;
      while (true) {
        if (btree.nodes[current]->data < data) {
          current = (current * 2) + 2;
        } else {
          current = (current * 2) + 1;
        }
        if (btree.nodes.size() >= current) {
          return false;
        }
        if (btree.nodes[current] == nullptr) {
          return false;
        }
        if (btree.nodes[current]->data == data) {
          return true;
        }
      }
    }
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