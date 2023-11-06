#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Masukkan tinggi segitiga : ";
    cin >> n;

    //membuat spasi di sisi kiri segitiga
    for (int i = 1; i <= n; i++){
        for (int j = n;  j > i; j--){
            cout << " ";
        }
        //mencetak bintang (karakter*) dengan memasukkan rumus 2*i=1
        for (int k = 1; k <= (2*i-1); k++){
            cout << "*"; // menampilkan bentuk segitiga dalam bentuk kumpulan bintang (karakter *)
        }
        cout << endl;
    }
    cin.get();
    return 0;
}
