#include <iostream>
using namespace std;

int main()
{
    int nama;
    int tanggal;
    int bulan;
    int tahun;
    int bilangan;


        cout << "Masukkan nama      : ";
        cin >> nama;
        cout << "\nMasukkan tanggal : ";
        cin >> tanggal;
        cout << "\nMasukkan Bulan   : ";
        cin >> bulan;
        cout << "\nMasukkan Tahun   : ";
        cin >> tahun;

        for(int i=1; i<=tanggal; i++){
            if(i>31){
                cout << i << " ";
            }
        }
        cout << "\nMasukkan banyak elemen bilangan : ";
        cin >> bilangan;





}
