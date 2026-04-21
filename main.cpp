#include <iostream>
#include <iomanip>

using namespace std;
 
    // double userBal passed by reference so functions can modify original value

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