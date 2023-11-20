#include <iostream>
using namespace std;

//fungsi untuk menghasilkan bilangan ganjil, jumlah bilangan ganjil, dan faktor dari jumlah bilangan ganjil
    void bilganjil (int n){
    int jmlganjil = 0;
    cout << "\nBilangan ganjil antara 1 dan " << n << " adalah : "; //menampilkan bilangan ganjil dari bilangan yang diinputkan
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            jmlganjil += i; //operasi penjumlahan bilangan ganjil
        }
    }
    cout << "\njumlah bilangan ganjil adalah : " << jmlganjil << endl; //menampilkan hasil operasi penjumlahan bil ganjil

    //mencari faktor dari bil ganjil
    cout << "Faktor-faktor dari jumlah bilangan ganjil adalah : "; //menampilkan hasil faktor dari jumlah bil ganjil
    for (int i = 1; i <= jmlganjil; i++) {
        if (jmlganjil % i == 0) {
        cout << i << " ";
        }
    }
    cout << endl;
}

//fungsi untuk menghasilkan bilangan genap, jumlah bilangan genap, dan faktor dari jumlah bilangan genap
    void bilgenap (int n){
    int jmlgenap = 0;
    cout << "\nBilangan genap  antara 1 dan " << n << " adalah : "; //menampilkan bilangan genap dari bilangan yang diinputkan
    for(int i=1; i<=n; i++){
        if(i%2==0){
            cout << i << " ";
            jmlgenap+=i; //operasi penjumlahan bilangan genap
        }
    }
    cout << "\njumlah bilangan genap adalah  : " << jmlgenap << endl; //menampilkan hasil operasi penjumlahan bil genap

    //mencari faktor dari bil genap
    cout << "Faktor-faktor dari jumlah bilangan genap adalah : "; //menampilkan hasil faktor dari jumlah bil genap
    for (int i = 1; i <= jmlgenap; i++) {
        if (jmlgenap % i == 0) {
        cout << i << " ";
        }
    }
    cout << endl;
}

//fungsi untuk menghasilkan bilangan prima, jumlah bilangan prima, dan faktor dari jumlah bilangan prima
    void bilprima (int n){
    int jmlprima = 0;
    cout << "\nBilangan prima  antara 1 dan " << n << " adalah : "; //menampilkan bilangan prima dari bilangan yang diinputkan
    for (int i = 2; i <= n; i++ ) {
            int j;
            for (j = 2; j * j <= i && i % j != 0; j++) {
            }
            if (j * j > i) {
            cout << i << " ";
            jmlprima += i; //operasi penjumlahan bilangan prima
            }
        }
        cout << "\njumlah bilangan prima adalah  : " << jmlprima << endl; //menampilkan hasil operasi penjumlahan bil prima

        //mencari faktor dari bil prima
        cout << "nFaktor-faktor dari jumlah bilangan prima adalah : "; //menampilkan hasil faktor dari jumlah bil prima
        for (int i = 1; i <= jmlprima; i++) {
        if (jmlprima % i == 0) {
        cout << i << " ";
        }
    }
}

    int main(){
    //penggunaan fungsi bilganjil, bilgenap, bilprima
    int n;
    cout << "Masukkan batas bilangan : ";
    cin >> n;

    bilganjil(n);
    bilgenap(n);
    bilprima(n);

    return 0;
    }


