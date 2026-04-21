// Contains function definitions for finance.h
// Contains function implementations for addIncome, addExpense, and displayBalance
#include <iostream>
#include <iomanip>
#include "finance.h" // Include header to access function declarations

using namespace std;

// userBal passed by reference so functions can modify original value

    void addIncome(double newIncome, double &userBal){ // newIncome passed by value, userBal by reference to update original value
        
        userBal += newIncome; // Apply new income to update balance value

        cout << "\n";
    }

    void addExpense(double newExpense, double &userBal){ // newExpense passed by value, userBal by reference to update original value
        
        userBal -= newExpense; // Apply new expense to update balance value

        cout << "\n";
    }

    void displayBalance(double userBal){ // userBal passed by value since this function does not require modification of original value

        cout << "\n\tYour current balance: $" << userBal << endl; // Output balance
    }