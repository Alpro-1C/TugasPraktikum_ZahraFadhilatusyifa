#include <iostream>

using namespace std;

int main()
{
    //masukkan variable
    int firstvalue,secondvalue;
    firstvalue = 10;
    secondvalue = 8;

    cout << "Menukar nilai kedua variable tanpa menggunakan variable tambahan:" <<endl;

    //nilai kedua variable sebelum ditukar
    cout<< "\nfirstvalue:" << firstvalue <<endl;
    cout<< "secondvalue:" << secondvalue <<endl;

    //tukar nilai kedua variable tanpa menggunakan variable tambahan
    firstvalue = firstvalue + secondvalue;
    secondvalue = firstvalue - secondvalue;
    firstvalue = firstvalue - secondvalue;

    for (int i=0; i<100; i++){
        cout<< "-";
    }

    //hasil penukaran variable tanpa menggunakan variable tambahan
    cout<< "\nfirstvalue:" << firstvalue <<endl;
    cout<< "secondvalue:" << secondvalue <<endl;

    return 0;
}
