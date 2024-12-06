#include "jolly_bank.h"

using namespace std;

int main() {

    JollyBank jb;

    jb.BuildBank("test.txt");

    return 0;
}

JollyBank::JollyBank() {
}

bool JollyBank::BuildBank(string input) {

    ifstream in_file(input);

    if (!in_file) {
        return false;
        cerr << "File not oppened\n";
    }

    vector<string> tokens;
    string token;
    string line;
    while (getline(in_file, line)) {
        stringstream stream(line);
        while (stream >> token) {
            tokens.push_back(token);
        }

        string transaction_string = tokens[0];
        char transaction_type = transaction_string[0];
        switch (transaction_type) {
        // general history
        case 'A': {
            // check if account exists, if not, print error.
            Transaction new_trans(transaction_type, stoi(tokens[1]));
            // perform transaction
            // add to accounts history
            cout << new_trans << endl;
            // entire history
            break;
        }
        case 'F': {
            // check if account exists, if not, print error.
            Transaction new_trans(transaction_type, stoi(tokens[1]), stoi(tokens[2]));
            // perform transaction
            // add to accounts history
            cout << new_trans << endl;

            // new account

            break;
        }
        case 'O': {
            // check if account exists, if YES, print error.
            Transaction new_trans(transaction_type, stoi(tokens[1]), tokens[2], tokens[3]);
            // Account new_account(stoi[1], tokens[2], tokens[3]);
            // bs_tree.Insert(new_account);
            cout << new_trans << endl; 


            // withdraw

            break;
        }
        case 'W': {
            // check if account exists, if not, print error. 
            Transaction new_trans(transaction_type, stoi(tokens[1]), stoi(tokens[2]), stoi(tokens[3]));
            // perform transaction on retrieved account 
            // add to accounts history

            cout << new_trans << endl;


            // deposit
            break;
        }
        case 'D': {
            Transaction new_trans(transaction_type, stoi(tokens[1]), stoi(tokens[2]), stoi(tokens[3]));
            cout << new_trans << endl;


            // transfer
            break;
        }
        case 'T': {
            // check if first account exists, if not, print error.
            // check if second account exists, if not, print error.
            Transaction new_trans(transaction_type, stoi(tokens[1]), stoi(tokens[2]), stoi(tokens[3]), stoi(tokens[4]), stoi(tokens[5]));
            // perform transaction on retrieved account
            // add to accounts history
            cout << new_trans << endl;

            break;
        }
        }
        tokens.clear();
    
    }
    return true;
}
