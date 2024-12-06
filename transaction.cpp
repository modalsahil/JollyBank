#include "transaction.h"

Transaction::Transaction() {
}

Transaction::Transaction(string type, int id, int fund, int amount) {
    SetType(type);
    SetID(id);
    SetFund(fund);
    SetAmount(amount);
}

Transaction::Transaction(string type, int from_id, int fund, int transfer_to_id, int transfer_fund, int transfer_amount) : type_(type), id_(from_id), fund_(fund), transfer_to_id_(transfer_to_id), transfer_to_fund_(transfer_fund), transfer_amount_(transfer_amount) {
    
}

Transaction::Transaction(string history, int id) : type_(history), id_(id) {
}

Transaction::Transaction(string history, int id, int fund) : type_(history), id_(id), fund_(fund) {
}

Transaction::Transaction(string type, int id, string first, string last) : type_(type), id_(id), first_name_(first), last_name_(last) {
}

bool Transaction::SetType(string op) {
    if (op == "O" || op == "D" || op == "W" || op == "T" || op == "A" || op == "F") {
        type_ = op;
        return true;
    }
    return false;
    cerr << "Invalid Transaction Type. Transaction Type not updated\n";
}

bool Transaction::SetID(int id) {
    if (id > -1) {
        id_ = id;
        return true;
    }
    cerr << "Invalid ID. ID not updated\n";
    return false;
}
// hello
bool Transaction::SetFund(int fund) {
    if (fund > -1 && fund < 8) {
        fund_ = fund;
        return true;
    }
    cerr << "Invalid fund. Fund not updated\n";
    return false;
}

bool Transaction::SetAmount(int amount) {
    amount_ = amount;
    return true;
}

ostream &operator<<(ostream &os, const Transaction &transaction) {
    os << transaction.type_ << " " << transaction.id_ << " " << transaction.fund_ << " " << transaction.amount_ << endl;
    return os;
}
