#include <iostream>
#include <string>

using namespace std;

class Customer
{

    string name;
    string service[2], parts[2];
    int date; // DDMMYY format
    double payment_amount;
    int payment_type;

public:
      
    void showdata()
    {   
        string payment;
        cout << "\n";
        cout << "\nName of customer: " << name;

        cout << "\nServices provided: ";
        for (int i = 0; i < 2; i++)
        {
            cout << "\n" << service[i];
        }

        cout << "\nParts changed: ";
        for (int i = 0; i < 2; i++)
        {
            cout << "\n"<< parts[i];
        }

        cout << "\nCost of work: " << payment_amount;
        if (payment_type = 1){
            payment = "Cash";
        }
        else if (payment_type = 2){
            payment = "Debit Card";
        }
        else{payment = "Credit Card";}

        cout << "\nPayment type: " << payment; //add if elif loop for cards

    }
    void newrecord()
    {
        cout << "\nEnter Name: ";
        cin >> name;

        cout << "\nEnter Service 1: ";
        cin >> service[0];

        cout << "\nEnter Service 2: ";
        cin >> service[1];

        cout << "\nEnter Changed Part 1: ";
        cin >> parts[0];

        cout << "\nEnter Changed Part 2: ";
        cin >> parts[1];

        cout << "\nEnter Date in a format DDMMYY: ";
        cin >> date;

        cout << "\nEnter payment amount: ";
        cin >> payment_amount;

        cout << "\nSelect payment type: \n1.Cash \n2.Debit Card \n3.Credit card"<<"\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            payment_type = 1;
            break;

        case 2:
            payment_type = 2;
            break;

        case 3:
            payment_type = 3;
            break;
        }
    }
};

int main()
{
    Customer customers[3];
    Customer customer1;
    Customer customer2;
    Customer customer3;
    

    customer1.newrecord();
    customer2.newrecord();
    customer3.newrecord();

    customers[0] = customer1;
    customers[1] = customer2;
    customers[2] = customer3;

    for (int i = 0; i < 3; i++)
    {
        customers[i].showdata();
    }

    return 0;
}
