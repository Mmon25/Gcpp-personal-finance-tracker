// main.cpp
// Handles user input, menu, and controls program flow
#include <iostream>
#include <iomanip>
#include "finance.h" // Include header to access function declarations

using namespace std;


int main(){
    
    double userIncome, userExpense, userBal = 0;
    int userChoice;
    
    
    do{
        cout << "========================" << endl;
        cout << "Personal Finance Tracker" << endl;
        cout << "       Main Menu        " << endl;
        cout << "========================" << endl;
        cout << "1. Add Income" << endl;
        cout << "2. Add Expense" << endl;
        cout << "3. View Balance" << endl;
        cout << "4. Quit" << endl;
        cout << "------------------------" << endl;
        
        cout << "\nPlease choose an option from the following menu: ";
        cin >> userChoice;
        
        while (userChoice != 1 && userChoice != 2 && userChoice != 3 && userChoice != 4){
            cout << "Please choose option 1 to 4: ";
            cin >> userChoice;
        }

        cout << fixed << setprecision(2);

        if (userChoice == 1){
            
            cout << "\n\tPlease enter your income: $";
            cin >> userIncome;

            addIncome(userIncome, userBal); // Call add income function
            cout << "\n";
        }
        else if (userChoice == 2){
            cout << "\n\tPlease enter your new expense: $";
            cin >> userExpense;
            
            addExpense(userExpense, userBal); // Call add expense function
            cout << "\n";
        }
        else if (userChoice == 3){

            displayBalance(userBal); // Call display balance function
            cout << "\n";
        }
        else{
            cout << "\n\tGoodbye." << endl; // Exit
        }
        
    } while (userChoice != 4);
    
    return 0;
}