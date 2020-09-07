#include<iostream>
#include "simple_account.h"
using namespace std;

CAccount::CAccount(int num1, int num2){num1=id; num2=balance;}

CAdministrator::CAdministrator(){number=0;}

void CAdministrator::deposit(int a_id,int money){
    CArray[a_id]->balance +=money;
    if (CArray[a_id]->balance > 1000000){
        CArray[a_id]->balance -=money;
        cout << "Failure: Deposit to user " << a_id << " " << money << endl;
    }
    else {
        cout << "Success: Deposit to user " << a_id << " " << money << endl;
    }
}

void CAdministrator::withdraw(int a_id,int money){
    CArray[a_id]->balance -=money;
    if (CArray[a_id]->balance < 0){
        CArray[a_id]->balance +=money;
        cout << "Failure: Withdraw from user " << a_id << " " << money << endl;
    }
    else {
        cout << "Success: Withdraw from user " << a_id << " " << money << endl;
    }
}

void CAdministrator::transfer(int from_id, int to_id, int money){
    CArray[from_id]->balance -=money;
    CArray[to_id]->balance +=money;
    if (CArray[from_id]->balance < 0 || CArray[to_id]->balance > 1000000){
        CArray[from_id]->balance +=money;
        CArray[to_id]->balance -=money;
        cout << "Failure: Transfer from user " << from_id << " to user " << to_id << " " << money << endl;
    }
    else {
        cout << "Success: Transfer from user " << from_id << " to user " << to_id << " " << money << endl;
    }
}

void CAdministrator::check(int a_id){
    cout << "Balance of user " << a_id << ": " << CArray[a_id]->balance << endl;
}
