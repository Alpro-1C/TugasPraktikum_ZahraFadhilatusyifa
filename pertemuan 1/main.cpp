#include <iostream>

using namespace std;

int main(){
    string namasaya;
    string npmsaya;
    string kelassaya;
    string citacitasaya;
    string motivasisaya;


    cout << "Masukkan data berikut : " << endl;
    cout << "Masukkan nama                       :";
    getline(cin,namasaya);

    cout << "Masukkan npm                        :";
    getline(cin,npmsaya);

    cout << "Masukkan Kelas                      :";
    getline(cin,kelassaya);

    cout << "Masukkan cita - cita                :";
    getline(cin,citacitasaya);

    cout << "Masukkan motivasi masuk Informatika :";
    getline(cin,motivasisaya);



    cout << "\nTampilan Data Anda\n\n";

    for (int i = 0; i < 100; i++){
            cout << "-";
    }
    {
        cout << "\nNama                        :" <<namasaya << endl;
        cout << "\nNPM                         :" <<npmsaya << endl;
        cout << "\nKelas                       :" <<kelassaya << endl;
        cout << "\nCita - cita                 :" <<citacitasaya << endl;
        cout << "\nMotivasi masuk Infomrmatika :" <<motivasisaya << endl;
    }
    for (int i = 0; i < 100; i++){
        cout << "-";
    }
    return 0;





}
