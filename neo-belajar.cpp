#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string nama;
    cout << "Siapa nama kamu: "; getline(cin, nama);
    cout << "Nama kamu adalah: " << nama << endl;
    float x;
    float y;
    cout << "masukan angka: "; cin >> x;
    cout << "masukan angka: "; cin >> y;
    cout << "hasil pertambahan: " << x + y << endl;
    cout << "hasil pengurangan: " << x - y << endl;
    cout << "hasil pembagian: " << x / y << endl;
    cout << "hasil perkalian: " << x * y << endl;
    return 0;
}


