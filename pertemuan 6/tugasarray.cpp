#include <iostream>

using namespace std;

    void garis(){
    for(int i=0; i<100; ++i){
        cout << "-";
    }
    }

    int main(){
    int n,i,nilaitertinggi,indekstertinggi;

    garis();
    cout << "\n\t\tAPLIKASI MENCARI BILANGAN TERTINGGI DALAM ARRAY DAN INDEKSNYA\n";
    garis();

    cout << "\nMasukkan jumlah bilangan : ";
    cin >> n;
    cout << endl;

    //membaca element array
    int nilai[n];
    for(i=0; i<n; ++i){

        cout << "Masukkan bilangan ke - " << i << " = ";
        cin >> nilai[i];

    }

    nilaitertinggi=nilai[0];
    indekstertinggi=0;

    //Mencari nilai tertinggi dalam array dan indeksnya
    for(i=0; i<n; ++i){

        if(nilaitertinggi<nilai[i])
        {
            nilaitertinggi=nilai[i];
            indekstertinggi=i;
        }
    }

    //menampilkan nilai tertinggi dalam array dan indeksnya
    cout << "\nNilai tertinggi dalam array adalah " << nilaitertinggi << " yang berada pada indeks ke - " << indekstertinggi << endl;
    garis();

}

