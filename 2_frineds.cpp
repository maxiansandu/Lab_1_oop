
//Creați două clase friend care pot accesa reciproc datele private ale fiecăreia și implementați
// un scenariu simplu care demonstrează acest lucru.

#include <iostream>
using namespace std;

class Second_friend;

class First_friend
{

private:
    string name;

public:
    First_friend()
    {
        name = "Ion";
    }

    void print_data(Second_friend &t);

    friend class Second_friend;
};

class Second_friend
{

private:
    string friend_name;

public:
    Second_friend(string name) : friend_name(name) {}

    void print_about_first_friend(First_friend &t)
    {
        cout << "Mă numesc " << friend_name << ", prietenul meu este " << t.name << endl;
    }

    friend class First_friend;
};

void First_friend::print_data(Second_friend &t)
{
    cout << "Mă numesc " << name << ", prietenul meu este " << t.friend_name << endl;
}

int main()
{
    string friend_name;
    cout << "Cine este prietenul lui Ion?\n";
    cin >> friend_name;

    First_friend friend_num_1;
    Second_friend friend_num_2(friend_name);

    friend_num_1.print_data(friend_num_2);
    friend_num_2.print_about_first_friend(friend_num_1);

    return 0;
}
