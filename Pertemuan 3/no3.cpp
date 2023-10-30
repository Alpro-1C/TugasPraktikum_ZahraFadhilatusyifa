#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
    int pil,s,p,l,a,t,luas; // s=sisi, p=panjang, l=lebar, a=alas, t=tinggi
    int i;
    do{
        system("cls");

    cout << "Menghitung Luas Bangun Datar" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Keluar" << endl;

    cout << "Silahkan Pilih : ";
    cin >> pil;

    switch(pil)
    {
    case 1 :
        cout << "Menghitung Luas Persegi" << endl;
        cout << "Masukkan Panjang Sisi : "; cin >> s;
        luas = s*s;
        cout << "Luas Persegi = " << luas;
        getch(); // getch(); berfungsi untuk menghentikan proses sementara, tapi fungsi getch ini akan berjalan apabila headernya sesuai yaitu "conio.h"
        break; // break merupakan proses dimana program berhenti dan program setelah break tidak dilanjutkan

    case 2 :
        cout << "Menghitung Luas Persegi Panjang" << endl;
        cout << "Masukkan Panjang : "; cin >> p;
        cout << "Masukkan Lebar   : "; cin >> l;
        luas = p*l;
        cout << "Luas Persegi Panjang = " << luas;
        getch();
        break;

    case 3 :
        cout << "Menghitung Luas Segitiga" << endl;
        cout << "Masukkan Alas   : "; cin >> a;
        cout << "Masukkan Tinggi : "; cin >> t;
        luas = 0,5*a*t;
        cout << "Luas Segitiga = " << luas;
        getch();
        break;

    default :
        cout << "Maaf, pilihan yang anda masukkan tidak terdaftar" << endl;
        exit(0);



    }
    }while (i !=0);

    cout << endl << endl;

    return 0;

}
