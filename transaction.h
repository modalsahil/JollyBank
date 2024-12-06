#ifndef TRANSACTION_H_
#define TRANSACTION_H_
#include <cmath>
#include<string>
#include <iostream>

using namespace std; 

class Transaction {
public:

    Transaction();

    //for transactions EXCLUDING Open account, transfer funds, and show history.
    Transaction(string type, int id, int fund, int amount);

    //for transfer transactions. 
    Transaction(string type, int from_id, int fund, int transfer_to_id_, int transfer_fund, int transfer_amount);

    //display all historry
    Transaction(string history, int id);

    //dispolay specific history
    Transaction(string history, int id, int fund);

    //for oppening accounts
    Transaction(string type, int id, string first, string last);

    // method to update account_'s funds based on the operation_ and the fund_
    void ExecuteTransaction();

    // setters and getters

    bool SetType(string op);

    bool SetID(int id);

    bool SetFund(int fund);

    bool SetAmount(int amount);

    friend ostream &operator<<(ostream &os, const Transaction &transaction);

    friend istream &operator>>(istream &is, const Transaction &transaction);
//hello
private:
    string type_;
    int id_; // take an id from input text file and then use this data member to lookup in BSTree
    int fund_;
    int amount_;

    int transfer_to_fund_;
    int transfer_to_id_; 
    int transfer_amount_; 

    string first_name_; 
    string last_name_; 



    // Account* account_;
};
#endif