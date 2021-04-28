#include <iostream>

using namespace std;

int main()
{
    char ans;
    double cost, rate;
    int year;
    do{
    cout<< "input the cost:$";
    cin >> cost;

    cout<< "input the number of year:";
    cin >> year;

    cout<< "input the inflation rate:";
    cin >> rate;

    rate= rate/100.0;

        for (int i=0; i<year; i++){

    cost += cost*rate;

        }

        cout<< "cost of item after "<< year << "years is :$" << cost<< endl;

        cout << "Repeat? y/n: ";
        cin >> ans;

        } while(ans=='y');
    return 0;
}

