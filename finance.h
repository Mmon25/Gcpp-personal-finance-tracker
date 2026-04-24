//finance.h contains function declarations for use in other files
#ifndef FINANCE_H // If file is not already defined
#define FINANCE_H // Define to prevent multiple inclusions

#include <vector>
#include <string>

using namespace std;

// finance.h
// Declared finance-related functions for use in other files
void addIncome(double newIncome, double &userBal, vector<string> &history); // addIncome function prototype
void addExpense(double newExpense, double &userBal, vector<string> &history); // addExpense function prototype
void displayBalance(double userBal); // displayBalance function prototype
void displayHistory(const vector<string> &history); // Transaction prototype

#endif