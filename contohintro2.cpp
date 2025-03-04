#include <iostream>
using namespace std;

int main()
{ //begin
    //numeric nPanjang, nLebar, nLuas
    float Panjang, Lebar, Luas;
    //display "Masukkan Panjang :"
    cout << "Masukkan Panjang : ";
    //accept nPanjang
    cin >> Panjang;
    //display "Masukkan Lebar :"
    cout << "Masukkan Lebar : ";
    //accept nLebar
    cin >> Lebar;
    //compute nLuas = nPanjang * nLebar
    Luas = Panjang * Lebar;
    //display "Luas Persegi Panjang : " + nLuas 
    cout << "Luas Persegi Panjang : " << Luas; 
} //end