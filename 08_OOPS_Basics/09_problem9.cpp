#include <iostream>

using namespace std;

class BankAccount{
    private:
        float balance;

    public:
        BankAccount(){
            balance = 0.00;
            cout << "New Account formed with " << balance << " Balance" << endl;
        }

        BankAccount(float bal){
            balance = bal;
            cout << "New Account formed with " << balance << " Balance" << endl;
        }

        float deposit(float amt){
            if(amt>0){
                balance+=amt;
            }
            return balance;
        }

        float withdraw(float amt){
            if(amt>0 && amt<=balance){
                balance-=amt;
            }
            return balance;
        }

        void display(){
            cout << "Balance : " << balance << endl;
        }
};

int main() {
    BankAccount acc1(500);
    acc1.display();
    
    acc1.deposit(500);
    acc1.display();
    
    acc1.withdraw(100);
    acc1.display();
    return 0;
}