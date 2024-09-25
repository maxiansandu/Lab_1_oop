

//Implementați în C++ o funcție friend care poate accesa atributele private ale unei clase

#include <iostream>
using namespace std;

class Root
{

private:
    string username;

protected:
    string password;

public:
    Root()
    {

        username = "ion";
        password = "ion123";
    }

    friend class f_class;
};

class f_class
{

public:
    void print_data(Root &t)
    {

        cout << "username: " << t.username << "\n password: " << t.password << endl;
    }
};

int main()
{

    Root t;
    f_class frined_class;

    frined_class.print_data(t);

    return 0;
}