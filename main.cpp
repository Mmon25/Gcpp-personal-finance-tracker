// main.cpp
// Handles user input, menu, and controls program flow
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "finance.h" // Include header to access function declarations

using namespace std;


int main(){
    
    double userIncome, userExpense, userBal = 0;
    int userChoice;

    vector<string> transHistory;
    
    do{
        cout << "========================" << endl;
        cout << "Personal Finance Tracker" << endl;
        cout << "       Main Menu        " << endl;
        cout << "========================" << endl;
        cout << "1. Add Income" << endl;
        cout << "2. Add Expense" << endl;
        cout << "3. View Balance" << endl;
        cout << "4. View Transaction History" << endl;
        cout << "5. Quit" << endl; 
        cout << "------------------------" << endl;
        
        cout << "\nSelect an item from the menu above: ";
        cin >> userChoice;

        cout << fixed << setprecision(2);

        switch (userChoice){
            case 1:
                cout << "\n\tPlease enter your income: $";
                cin >> userIncome;
                addIncome(userIncome, userBal, transHistory); // Call add income function
                cout << "\n";
                break;

            case 2:
                cout << "\n\tPlease enter your new expense: $";
                cin >> userExpense;
            
                addExpense(userExpense, userBal, transHistory); // Call add expense function
                cout << "\n";
                break;

            case 3:
                displayBalance(userBal); // Call display balance function
                cout << "\n";
                break;

            case 4:
                displayHistory(transHistory); // Call transaction history function
                cout << "\n";
                break;

            case 5:
                cout << "\nGoodbye.\n";
                break;
            
            default:
                cout << "\nInvalid entry.\n\n\n";
                break;
        }
    } while (userChoice != 5);
    return 0;
}