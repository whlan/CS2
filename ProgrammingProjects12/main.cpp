#include <iostream>

using namespace std;

int main()
{
    int n;
    double guess, r, prevGuess;
    char ans;

do{

    cin >> n;

    guess = n/2.0;

    do{
        prevGuess=guess;
        r=n/guess;
        guess=(guess+r)/2;
    } while((prevGuess-guess)/prevGuess > 0.01);

    cout << "answer:"<< guess<<endl;
    cout << "Again? y/n:";
    cin >> ans;

 }while(ans=='y');


    return 0;
}

