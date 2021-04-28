#include <iostream>

using namespace std;

int main()
{
    int people, people_add, people_remove;
    int maximum_capacity = 35;
    char ans;

    do
    {

        cout << "how many people are there?:";
        cin >> people;


            if(maximum_capacity>people)
            {
                cout <<endl << "it is still legal to hold more people" << endl<< endl;

                people_add = maximum_capacity-people;
                cout << people_add << " more people may still legally attend to the room" << endl;
        }
        else
        {
            cout << "number of people exeeds the maximum room capacity" << endl;

            people_remove=people-maximum_capacity;

            cout << people_remove << " people must be excluded in order to meet the fire regulation" << endl;

        }
            cout << "Again? y/n:";
            cin >> ans;
    } while(ans=='y');

    return 0;
}

