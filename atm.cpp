#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Hardcoded account details for demonstration
    string accountNumber = "123456789";
    string pin = "1234";
    double balance = 1000.0;

    // ATM login
    string enteredAccountNumber;
    string enteredPin;

    cout << "Welcome to the ATM!" << endl;
    cout << "Please enter your account number: ";
    cin >> enteredAccountNumber;
    cout << "Please enter your PIN: ";
    cin >> enteredPin;
    cout << endl;

    // Check account number and PIN
    if (enteredAccountNumber == accountNumber && enteredPin == pin)
    {
        // ATM menu
        int choice;

        do
        {
            cout << "ATM Menu:" << endl;
            cout << "1. Balance Inquiry" << endl;
            cout << "2. Withdrawal" << endl;
            cout << "3. Deposit" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            cout << endl;

            switch (choice)
            {
                case 1:
                    cout << "Balance: $" << fixed << setprecision(2) << balance << endl;
                    break;
                case 2:
                    double amount;
                    cout << "Enter the amount to withdraw: $";
                    cin >> amount;
                    if (amount <= balance)
                    {
                        balance -= amount;
                        cout << "Withdrawal successful. New balance: $" << fixed << setprecision(2) << balance << endl;
                    }
                    else
                    {
                        cout << "Insufficient funds. Please try again." << endl;
                    }
                    break;
                case 3:
                    double depositAmount;
                    cout << "Enter the amount to deposit: $";
                    cin >> depositAmount;
                    balance += depositAmount;
                    cout << "Deposit successful. New balance: $" << fixed << setprecision(2) << balance << endl;
                    break;
                case 4:
                    cout << "Thank you for using the ATM. Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
            }

            cout << endl;
        } while (choice != 4);
    }
    else
    {
        cout << "Invalid account number or PIN. Access denied." << endl;
    }

    return 0;
}

