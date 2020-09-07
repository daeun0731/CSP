class CAccount {
    public:
        int id;
        int balance;
        CAccount(int num1, int num2);
};

class CAdministrator {
    public:
        CAccount* CArray[10];
        int number;
        CAdministrator();
        void deposit(int a_id, int money);
        void withdraw(int a_id, int money);
        void transfer(int from_id, int to_id, int money);
        void check(int a_id);
};
