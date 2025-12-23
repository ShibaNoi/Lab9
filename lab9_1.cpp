#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double loan, rate, pay;
    int year = 1;
    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> rate;
    cout << "Enter amount you can pay per year: ";
    cin >> pay;

    cout << "EndOfYear#   PrevBalance  Interest     Total        Payment      NewBalance\n";

    cout << fixed << setprecision(2);
    double prev = loan;

    while (prev > 0) {
        double interest = prev * rate / 100.0;
        double total = prev + interest;
        double payment = (total < pay) ? total : pay;
        double newBal = total - payment;
        cout<< setw(13) << left << year
            << setw(13) << left << prev
            << setw(13) << left << interest
            << setw(13) << left << total
            << setw(13) << left << payment
            << setw(13) << left << newBal
            << '\n';
        prev = newBal;
        year++;
    }
    return 0;
}