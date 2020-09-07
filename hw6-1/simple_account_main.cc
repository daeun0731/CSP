#include<iostream>
#include "simple_account.h"
using namespace std;

int main(void){
    CAdministrator CA;

    while(1){
        cout << "Job?" << endl;
        char a;
        cin >> a;

        int a_id, money, from_id, to_id;
    
        if (a=='N'){
            if (CA.number>=10){
                cout << "Failure: Account Registration Unavailable" << endl;
            }
            else {
                CA.CArray[CA.number]=new CAccount(CA.number,0);
                cout << "Account for user " << CA.number << " registered" << endl;
                CA.check(CA.number);
                CA.number++;
            }
        }

        else if (a=='D'){
            cin >> a_id >> money;
            if (a_id>=CA.number){
                cout << "Account does not exist" << endl;
            }
            else {
                CA.deposit(a_id,money);
                CA.check(a_id);
            }
        }

        else if (a=='W'){
            cin >> a_id >> money;
            if (a_id>=CA.number){
                cout << "Account does not exist" << endl;
            }
            else {
                CA.withdraw(a_id,money);
                CA.check(a_id);
            }
        }

        else if (a=='T'){
            cin >> from_id >> to_id >> money;
            if (from_id>=CA.number || to_id>=CA.number){
                cout << "Account does not exist" << endl;
            }
            else {
                CA.transfer(from_id, to_id, money);
                if (from_id<to_id){
                    CA.check(from_id);
                    CA.check(to_id);
                }
                else {
                    CA.check(to_id);
                    CA.check(from_id);
                }
            }
        }

        else if (a=='Q'){
            break;
        }

        cout << endl;
    }

    return 0;
}
