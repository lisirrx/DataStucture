#include <iostream>#include "BST.hpp"using namespace std;class A{public:    A():a(1){        cout << "A!" << endl;    }    A(int _a) : b(_a){A();};    int a;    int b;};int main() {    BST<int, int> tree;    tree.insert(5);    tree.insert(2);    tree.insert(3);    tree.insert(1);    std::cout << "Hello, World!" << std::endl;    return 0;}