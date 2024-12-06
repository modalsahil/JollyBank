#ifndef JOLLY_BANK_H_
#define JOLLY_BANK_H_
#include "account.h"
#include "bs_tree.h"
#include "transaction.h"
#include <queue>
#include <fstream> 
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class JollyBank{
public:

//constructors
JollyBank(); 

//functions

//method that takes in file name, and adds transactions to
//trans_queue and account_tree.
bool BuildBank(string input);

//executes all of the transactions in trans_queue,
//each transaction will be executed, and it's account history will change. 
void ExecuteTransactions();

//no getters and setters

//operator overloads

friend ostream& operator<<(ostream& os, const JollyBank &jb);

private:

queue<Transaction> trans_queue_;
BSTree account_tree_;

}; 
#endif



/*
JollyBank's main()

JollyBank jb;
jb.BuildBank("input.txt") {

BSTree account_treee;

InputFile input_file;
Transaction new_trans;
new_trans >> input_file;

if account id exists in tree
    add transaction to that Account's history;
    add that account object to the Transaction's account data member.


jb.trans_queue.push(new_account;)

ExecuteTransactions(){

while(trans_queue.length != 0){


switch(trans_queue.pop().operation_)

case 'O':
  Account* new_account = new Account(Id of that transaction, first name, last name. );
    add tran_queue.pop() to it's history
    account_tree.Insert(new_account);

case 'D':
   Deposit(client id, fund, ammount)

case 'W':
   Withdraw *(client id, fund, amount);

case 'T':
   Transfer(client id, start_fund, end_fund, amount);

case 'A':
   cout <<trans_queue.pop().account().history_ << endl; 

case 'F':
   cout << trans_queue.pop.account().HistoryOf(fund) << endl;


outfile output("output.txt");

for(for every element in account_tree);
   output << Account << endl;









}

}








}





*/