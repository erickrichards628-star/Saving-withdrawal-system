#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double balance;
    double withdrawalAmount;

    cout << "Enter initial account balance: ";
    cin >> balance;

    cout << fixed << setprecision(2);

    // Allow repeated withdrawals while funds exist
    while (balance > 0.0) {
        cout << "\nCurrent balance: " << balance << "\n";
        cout << "Enter withdrawal amount: ";
        cin >> withdrawalAmount;

        // Stop if withdrawal exceeds available funds
        if (withdrawalAmount > balance) {
            cout << "Insufficient balance for this withdrawal. Stopping transaction.\n";
            break;
        }

        if (withdrawalAmount <= 0.0) {
            cout << "Please enter a positive withdrawal amount.\n";
            continue;
        }

        balance -= withdrawalAmount;
        cout << "Withdrawal successful. Remaining balance: " << balance << "\n";
    }

    if (balance == 0.0) {
        cout << "\nAccount balance is now zero. No further withdrawals possible.\n";
    }

    return 0;
}