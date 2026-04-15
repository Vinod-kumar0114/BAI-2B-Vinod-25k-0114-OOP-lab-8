#include <iostream>
#include <string>
using namespace std;

class PaymentMethod {
public:
    virtual void processPayment(double amount) = 0; 
};

class CreditCard : public PaymentMethod {
private:
    string cardNumber;

public:
    CreditCard(string n) {
        cardNumber = n;
    }

    void processPayment(double amount) {
        if (cardNumber.length() == 16) {
            cout << "Payment of $" << amount << " successful via Credit Card: " << cardNumber << endl;
        } else {
            cout << "Payment failed! Invalid Credit Card number." << endl;
        }
    }
};

class DigitalWallet : public PaymentMethod {
private:
    double balance;

public:
    DigitalWallet(double b) {
        balance = b;
    }

    void processPayment(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Payment of $" << amount << " successful via Digital Wallet." << endl;
            cout << "Remaining Balance: $" << balance << endl;
        } else {
            cout << "Payment failed! Insufficient balance in Digital Wallet." << endl;
        }
    }
};

int main() {
    CreditCard card("1234567890123456");
    DigitalWallet wallet(500.0);

    cout << "Transaction 1:" << endl;
    card.processPayment(150.75);

    cout << "\nTransaction 2:" << endl;
    wallet.processPayment(100.0);

    cout << "\nTransaction 3 (Failure Case): " << endl;
    wallet.processPayment(1000.0);

    return 0;
}