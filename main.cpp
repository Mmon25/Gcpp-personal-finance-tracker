#include <iostream>
#include <string>

using namespace std;

double userIncome, userExpense, userBal = 0;



 /*Add income function
    int getIncome(int income){
        cout << "Please enter your income: ";
        cin >>
    }*/



int main(){
    
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
        
        if (userChoice == 1){
            
            cout << "Please enter your income: $";
            cin >> userIncome;
            userBal += userIncome;
            cout << "\n";
            
        }
        else if (userChoice == 2){
            cout << "Please enter your new expense: $";
            cin >> userExpense;
            
            userBal -= userExpense;
            cout << "\n";
        }
        else if (userChoice == 3){
            cout << "Your current balance: $" << userBal << "\n\n";
        }
        else{
            cout << "Goodbye.";
        }
        
    } while (userChoice != 4);
    
    return 0;
}