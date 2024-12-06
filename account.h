#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include "transaction.h"
#include <array>
#include <vector>
#include <string>


using namespace std;

class Account {
public:
    // constructo
    Account(int id, string first, string last);

    // adds amount to the fund
    void Deposit(int fund, int amount); // uses switch statements

    // checks to see if enough money can be taken out of fund and reduces amount.
    // returns a bool of whether or not withdraw was successful.
    bool Withdraw(int fund, int amount);

    //transfers money between fund, return false if invalid transfer, i.e: not enough money.
    bool Transfer(int fund, int amount);

    //changes the history_ vector to include a transaction. 
    void UpdateHistory(const Transaction &transaction);

    //getters
    int id();

    // returns an array of the funds.
    array<int, 8> funds();

    // operator overloads   
    // prints id and
    friend ostream &operator<<(ostream &os, const Account &account);

private:
    int id_; //must be unique
    int first_name_;
    int last_name_;
  
    vector<int> funds_;         // holds all values of funds as different elements.
    vector<Transaction> history_; // holds transactions that will be displayed in the history.
};
#endif