#include <iostream>

using namespace std;

int main ()
{
    // masukkan variable
    int firstvalue,secondvalue,temp;
    firstvalue = 10;
    secondvalue = 8;

    cout<< "Menukar nilai kedua variable dengan menggunakan variable tambahan:" <<endl;

    // nilai kedua variable sebelum ditukar
    cout << "\nfirstvalue:" << firstvalue <<endl;
    cout << "secondvalue:" << secondvalue <<endl;

    // tukar nilai kedua variable menggunakan variable tambahan
    temp=firstvalue;
    firstvalue=secondvalue;
    secondvalue=temp;

    for (int i=0; i<100; i++){
        cout<< "-";
    }
    // output penukaran kedua variable dengan menggunakan variable tambahan
    cout << "\nfirst value:" << firstvalue <<endl;
    cout << "secondvalue:" << secondvalue <<endl;

    return 0;

}
