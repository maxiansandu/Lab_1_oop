
// În cadrul unei clase C++, implementați un constructor care primește parametri
// și un destructor care afișează un mesaj când un obiect este distrus.

#include <iostream>
using namespace std;

class Phone
{

private:
    string brand;
    string model;
    int memory;
    int price;

public:
    // Constructor
    Phone(string brand, string model, int memory, int price) : brand(brand), model(model), memory(memory), price(price) {};

    ~Phone() {

        cout<<"distructurul a sters complet datele"<<endl;

    };

    void print_data()
    {

        cout << "brand" << brand << "\nmodel" << model << "\nmemory" << memory << "\nprice" << price << endl;
    }
};

int main()
{

    string brand = "iphone";
    string model = "11";
    int memory = 128;
    int price = 11000;

    Phone phone(brand, model, memory, price);

    phone.print_data();

    return 0;
}

//Explicați ordinea în care sunt apelați constructorii și destructorii în cazul moștenirii claselor.