#include <iostream>

using namespace std;
int main() {
    int menu;
    float panjang,lebar,tinggi,alas,sisi,Luas;

cout<< "pilih menu:"<<endl;/*kode memilih mau menghitung apa*/
cout<< "[1] Hitung Luas Persegi panjang"<<endl;
cout<< "[2] Hitung Luas Persegi"<<endl;
cout<< "[3] Hitung Luas Segitiga"<<endl;
cout<<endl;

cout<< "Masukkan pilihan:";
cin>>menu;
cout<<endl;
switch (menu){
case 1:/*kode menghitung luas persegi panjang*/
    cout<< "Masukkan nilai panjang:";
    cin>>panjang;
    cout<< "Masukkan nilai lebar:";
    cin>>lebar;
    Luas = panjang*lebar;
    cout<< "Luas Persegi panjang tersebut adalah:"<<Luas;
    break;

case 2:/*kode menghitung luas persegi*/
    cout<< "Masukkan nilai sisi ";
    cin>>sisi;
    Luas = sisi*sisi;
    cout<<"Luas persegi tersebut adalah:"<<Luas;
    break;

case 3:/*kode menghitung luas segitiga*/
    cout<< "Masukkan nilai alas:";
    cin>>alas;
    cout<< "Masukkan nilai tinggi:";
    cin>>tinggi;
    Luas = 0.5*(alas*tinggi);
    cout<< "Luas segitiga tersebut adalah:"<<Luas;

    break;
default:
   cout<< "Menu yang anda masukkan tidak tersedia"<<endl;
    break;
}
return 0;
}
