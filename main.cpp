#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double userBal = 0;



 
    double addIncome(double income){ // Add new income

        userBal += income;

        return userBal;
    }

    double addExpense(double expense){ // Add new expense
        userBal -= expense;

        return userBal;
    }

    void displayBalance(){ // Display current balance

        cout << "Your current balance: $" << userBal << "\n\n";
    
    }



int main(){
    
    double userIncome, userExpense;
    int userChoice;
    
    
    do{
        cout << "Personal Finance Tracker" << endl;
        cout << "------------------------" << endl;
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
            
            cout << "Please enter your income: $";
            cin >> userIncome;
            addIncome(userIncome); // Call add income function
            cout << "\n";
        }
        else if (userChoice == 2){
            cout << "Please enter your new expense: $";
            cin >> userExpense;
            
            addExpense(userExpense); // Call add expense function
            cout << "\n";
        }
        else if (userChoice == 3){

            displayBalance(); // Call display balance function
        }
        else{
            cout << "Goodbye."; // Exit
        }
        
    } while (userChoice != 4);
    
    return 0;
}