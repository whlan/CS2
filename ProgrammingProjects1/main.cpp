#include <iostream>

using namespace std;

int main()
{
    const double METRIC_TON_PER_OUNCES = 35273.92;
    double metric_ton, ounces;
    int box;
    char ans;

    do {


    cout << "enter a weight in ounces:\n";
    cin >> ounces;

    metric_ton = ounces/METRIC_TON_PER_OUNCES;

    box = METRIC_TON_PER_OUNCES/ounces+1;

    cout << "Weight=" << metric_ton << " metric tons\n";

    cout << box << " Boxes needed to yield 1 metric ton\n";

    cout << "Repeat? ";
    cin >> ans;

    } while(ans=='y');
    return 0;
}

