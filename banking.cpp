//fat Q
#include<iostream>
#include<string>
using namespace std;

class Account {
public:
    string name;
    int accno, OB;

    virtual void compute() = 0;
};

class Current : public Account {
public:
    Current(const string& name, int accno, int OB)  
    {
        this->name=name;
        this->accno=accno;
        this->OB=OB;
    }

    void compute() override {
        if (OB < 500)
            cout << "Penalty imposed, New balance: " << OB - 50 << endl;
    }
};

class Savings : public Account {
private:
    int with = 10200;

public:
    Savings(const string& name, int accno, int OB)   
    {
        this->name=name;
        this->accno=accno;
        this->OB=OB;
    }

    void compute() override {
        OB += 10000;
        cout << "Updated Balance: " << OB << endl;

        if (with < OB)
            cout << "Amount after withdrawal: " << OB - with << endl;
        else
            cout << "Insufficient balance" << endl;
    }
};

void display(Account& account) {
    cout << "Name: " << account.name << "\n";
    cout << "Account Number: " << account.accno << "\n";
    cout << "Balance: " << account.OB << "\n";
}

int main() {
    Current X("jyoti", 1123, 400);
    Savings Y("hari", 1122, 1000);

    Account* A = &X;
    A->compute();

    Account* B = &Y;
    B->compute();

    display(X);
    display(Y);

    return 0;