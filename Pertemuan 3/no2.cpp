#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int b1,b2,b3,t;

    cout << "---------------------------------------" << endl;
    cout << "Program Untuk Mencari Bilangan Terbesar" << endl;
    cout << "___________Dari 3 Bilangan_____________" << endl;
    cout << "---------------------------------------" << endl << endl;

    cout << "Masukkan Bilangan ke 1 : "; cin >> b1;
    cout << "Masukkan Bilangan ke 2 : "; cin >> b2;
    cout << "Masukkan Bilangan ke 3 : "; cin >> b3;
    cout << endl;

    if (b1 > b2)
        t=b1;
    else
        t=b2;
    if (b3 > t)
        t=b3;

    cout << "bilangan terbesarnya adalah : " <<t<< endl;

    getch();
    return 0;


}

