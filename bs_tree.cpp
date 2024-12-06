#include "bs_tree.h"

BSTree::BSTree() {
}

BSTree::BSTree(const BSTree &tree) {
}

BSTree::~BSTree() {
}

bool BSTree::Retrieve(int id, Account &account) {
    return retrieveHelper(id, account, root_);
}

bool BSTree::retrieveHelper(int id, Account &account, Node *current) {

    if (id == (current->account->id())) {
        account.SetID(current->account->id());
        return true;
    }
    if (current == nullptr) {
        return false;
    }

    if (id != (current->account->id())) {
        return retrieveHelper(id, account, current->left) || retrieveHelper(id, account, current->right);
    }
}
