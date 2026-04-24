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
        
        cout << "\nPlease choose an option from the following menu: ";
        cin >> userChoice;
        
        while (userChoice != 1 && userChoice != 2 && userChoice != 3 && userChoice != 4 && userChoice != 5){
            cout << "Please choose option 1 to 5: ";
            cin >> userChoice;
        }

        cout << fixed << setprecision(2);

        if (userChoice == 1){
            cout << "\n\tPlease enter your income: $";
            cin >> userIncome;

            addIncome(userIncome, userBal, transHistory); // Call add income function
            cout << "\n";
        }
        else if (userChoice == 2){
            cout << "\n\tPlease enter your new expense: $";
            cin >> userExpense;
            
            addExpense(userExpense, userBal, transHistory); // Call add expense function
            cout << "\n";
        }
        else if (userChoice == 3){

            displayBalance(userBal); // Call display balance function
            cout << "\n";
        }
        else if (userChoice == 4){
            displayHistory(transHistory); // Call transaction history function
            cout << "\n";
        }
        else{
            cout << "\n\tGoodbye." << endl; // Exit
        }
        
    } while (userChoice != 5);
    
    return 0;
}