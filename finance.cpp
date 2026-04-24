// Contains function definitions for finance.h
// Contains function implementations for addIncome, addExpense, and displayBalance
#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // Provides manipulators for output formatting
#include <sstream> // Provides string stream tools for formatting
#include "finance.h" // Include header to access function declarations

using namespace std;

// userBal passed by reference so functions can modify original value

    void addIncome(double newIncome, double &userBal, vector<string> &history){ // newIncome passed by value, userBal by reference to update original value
        
        userBal += newIncome; // Apply new income to update balance value

        ostringstream oss; // Used to build formatted string
        oss << fixed << setprecision(2) << newIncome; // Format value to 2 decimal places
        history.push_back("Income: +$" + oss.str()); // Add income to transaction history

        cout << "\n";
    }

    void addExpense(double newExpense, double &userBal, vector<string> &history){ // newExpense passed by value, userBal by reference to update original value
        cout << fixed << setprecision(2);
        userBal -= newExpense; // Apply new expense to update balance value
        
        ostringstream oss; // Used to build formatted string
        oss << fixed << setprecision(2) << newExpense; // Format expense to 2 decimal places
        history.push_back("Expense: -$" + oss.str()); // Add expense to transaction history

        cout << "\n";
    }

    void displayBalance(double userBal){ // userBal passed by value since this function does not require modification of original value

        cout << fixed << setprecision (2);
        cout << "\n\tYour current balance: $" << userBal << endl; // Output balance
    }

    void displayHistory(const vector<string> &history){

        cout << "Transaction history" << endl; // Transaction history header
        cout << "-------------------" << endl;
        for (int i = 0; i < history.size(); i++){ // Print transaction history
            cout << history[i] << endl;
        }

    }