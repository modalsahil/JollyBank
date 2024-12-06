#ifndef BS_TREE_H_
#define BS_TREE_H_
#include "account.h"

class BSTree {

public:
    BSTree();

    BSTree(const BSTree &tree);

    ~BSTree();

    // finds and retrives an account based on the id, "retrieved" account is put into Account arguement.
    // returns true if successfully retrieved, otherwise returns false.
    bool Retrieve(int id, Account &account);

    // inserts a dynamically allocated account into the BSTree.
    void Insert(Account *account);

    // operator overloads
    friend ostream &operator<<(ostream &os, const BSTree &tree);

    // BSTree operator=(const BSTree &other_tree);

private:
    struct Node {

        Account *account;
        Node *left = nullptr;
        Node *right = nullptr;
    };
    Node *root_ = nullptr;

    bool BSTree::retrieveHelper(int id, Account &account, Node *current);
};
#endif