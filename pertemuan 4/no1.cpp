#include <iostream>
using namespace std;

int main()
{

    int batas;
    int jumlahganjil=0;
    int jumlahgenap=0;
    int jumlahprima=0;

    cout << "Masukkan batas bilangan : ";
    cin >> batas;

    //mencari bilangan ganjil dari bilangan yang diinputkan
    cout << "\nBilangan ganjil antara 1 dan " << batas << " adalah : "; //menampilkan bilangan ganjil dari bilangan yang diinputkan
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            jumlahganjil += i; //operasi penjumlahan bilangan ganjil
        }
    }
    cout << endl;

    //mencari bilangan genap dari bilangan yang diinputkan
    cout << "Bilangan genap  antara 1 dan " << batas << " adalah : "; //menampilkan bilangan genap dari bilangan yang diinputkan
    for(int i=1; i<=batas; i++){
        if(i%2==0){
            cout << i << " ";
            jumlahgenap+=i; //operasi penjumlahan bilangan genap
        }
    }
    cout << endl;

    //mencari bilangan prima dari bilangan yang diinputkan
    cout << "Bilangan prima  antara 1 dan " << batas << " adalah : "; //menampilkan bilangan prima dari bilangan yang diinputkan
    for (int i = 2; i <= batas; i++ ) {
            int j;
            for (j = 2; j * j <= i && i % j != 0; j++) {
            }
            if (j * j > i) {
            cout << i << " ";
            jumlahprima += i; //operasi penjumlahan bilangan prima
            }
        }
    cout << endl;

    //hasil operasi penjumlahan bilangan
    cout << "\nJumlah semua bilangan ganjil antara 1 dan " << batas <<" adalah  : " << jumlahganjil << endl; //menampilkan hasil operasi penjumlahan dari bilangan ganjil
    cout << "Jumlah semua bilangan genap  antara 1 dan " << batas <<" adalah  : " << jumlahgenap << endl;//menampilkan hasil operasi penjumlahan dari bilangan genap
    cout << "Jumlah semua bilangan prima  antara 1 dan " << batas <<" adalah  : " << jumlahprima << endl; //menampilkan hasil operasi penjumlahan dari bilangan prima

    //mencari faktor dari total bilangan ganjil
    cout << "\nFaktor-faktor dari jumlah bilangan ganjil adalah :  "; //menampilkan faktor faktor dari total bilangan ganjil
    for (int i = 1; i <= jumlahganjil; i++) {
        if (jumlahganjil % i == 0) {
        cout << i << " ";
        }
    }
    cout << endl;

    //mencari faktor dari total bilangan genap
    cout << "Faktor-faktor dari jumlah bilangan genap  adalah :  "; //menampilkan faktor faktor dari total bilangan genap
    for (int i = 1; i <= jumlahgenap; i++) {
        if (jumlahgenap % i == 0) {
        cout << i << " ";
        }
    }
    cout << endl;

    //mencari faktor dari total bilangan genap
    cout << "Faktor-faktor dari jumlah bilangan prima  adalah :  "; //menampilkan faktor faktor dari total bilangan prima
    for (int i = 1; i <= jumlahprima; i++) {
        if (jumlahprima % i == 0) {
        cout << i << " ";
        }
    }

 return 0;
}
