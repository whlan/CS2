#include <iostream>

using namespace std;

int main()
{
    double interest_rate, interest_percentage, years, yield, loan, months, monthly_loan;
    int face_value, total_amount;
    char ans;

    do {


    cout << "the amount of cosumer needs:$";
    cin >> face_value;

    cout << "amount of interest rate in %:";
    cin >> interest_rate;

    cout << "how many months:";
    cin >> months;

    interest_percentage = interest_rate/100.0;

    years = months/12;

    yield = interest_percentage*face_value;

    loan = yield*years;

    total_amount = face_value-loan;

    cout << "total amount $" << total_amount << endl;

    monthly_loan = face_value/months;

    cout << "monthly loan payment $" << monthly_loan << endl << endl;

    cout << "Again? y/n ";
    cin >> ans;

    } while(ans=='y');

    return 0;
}

