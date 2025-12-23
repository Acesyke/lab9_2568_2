#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double loan, rate, annual_pay;

    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> rate;
    cout << "Enter amount you can pay per year: ";
    cin >> annual_pay;

    cout << setw(13) << left << "EndOfYear#";
    cout << setw(13) << left << "PrevBalance";
    cout << setw(13) << left << "Interest";
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";

    double prev_balance = loan;
    int year = 1;

    cout << fixed << setprecision(2);

    while (prev_balance > 0) {
        double interest = prev_balance * (rate / 100.0);
        double total = prev_balance + interest;
        double payment;

        if (total < annual_pay) {
            payment = total;
        } else {
            payment = annual_pay;
        }

        double new_balance = total - payment;

        cout << setw(13) << left << year;
        cout << setw(13) << left << prev_balance;
        cout << setw(13) << left << interest;
        cout << setw(13) << left << total;
        cout << setw(13) << left << payment;
        cout << setw(13) << left << new_balance;
        cout << "\n";

        prev_balance = new_balance;
        year++;
    }

    return 0;
}
