#include <iostream>

using namespace std;

int main()
{
    int num, less0=0, over0=0, total=0;
    char ans;

     do{

       cout<< "enter ten whole numbers"<< endl<< endl;

            for (int i=1; i<11; i++){
                cout<<i<<":";

                cin>>num;
                if(num>0){

                    over0 += num;
              }
                else{

                    less0 += num;

           }


           total += num;
       }

       cout<<endl<<"Here is total: "<<total<<endl;
       cout<<endl<<"Here is total of over 0: "<<over0<<endl;
       cout<<endl<<"Here is total of less than 0: "<<less0<<endl;
       cout<< "Again? y/n:";
       cin>>ans;

   }while(ans=='y');

    return 0;
}

