#include <iostream>
using namespace std;

int main()
{
    string nama;
    int tanggal,bulan,tahun,n,hasil;

    cout << "Masukkan nama    : ";
    cin >> nama;
    cout << "Masukkan tanggal : ";
    cin >> tanggal;
    cout << "Masukkan bulan   : ";
    cin >> bulan;
    cout << "Masukkan tahun   : ";
    cin >> tahun;

    if(tanggal > 0 && tanggal <= 31 )
      if(bulan > 0 && bulan <= 12 )
       if(tahun%400==0 || tahun%4==0)
    {
        cout << "Masukkan banyak elemen : ";
        cin >> n;

        cout << "Bilangan komposit " << n << " elemen adalah : ";
        for(int i=2; i<=n; i++)
            for (int j=2; j<i; j++){
                if(i%j==0)
                    cout << i << " ";
                    hasil += i;
                    break;
       }
    }
    else {
        cout << " ";
    }

    cout << "terima kasih";
    return 0;
}







