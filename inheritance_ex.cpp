
//Scrieți un program în C++ care să demonstreze utilizarea moștenirii 
//(inheritance) între două clase (de exemplu, o clasă de Bază și o clasă Derivată).

#include <iostream>
using namespace std;

class Baza
{

private:
    string nume_moto;
    int capacitate_cilindrica;

public:
    Baza(string nume, int cc) : nume_moto(nume), capacitate_cilindrica(cc) {};

    void dysplay()
    {

        cout << "marca motocicletei: " << nume_moto << "\n"
             << "capactate cilindrica: " << capacitate_cilindrica << endl;
    };
};


// aici creem clasa secundar care mosteneste clasa Baza
class Secundar : public Baza
{

private:
    string categorie_permis;

public:
    Secundar(string model, int cc, string category) : Baza(model, cc), categorie_permis(category) {};

    void print_data()
    {

        dysplay();

        cout << "categoria necesara este: " << categorie_permis << endl;
    }
};

int main()
{

    string brand;
    string category;
    int cc;

    cout << "specifica firma motociletei";
    cin >> brand;
    cout << "specifica capacitatea cilindrica";
    cin >> cc;

    if (cc < 50)
    {

        category = "am";
    }
    else if (cc > 50 && cc < 125)
    {

        category = "a1";
    }
    else if (cc > 124 && cc < 600)
    {

        category = "a2";
    }
    else
    {
        category = "a";
    }

    Secundar moto(brand, cc, category);

    moto.print_data();

    return 0;
}