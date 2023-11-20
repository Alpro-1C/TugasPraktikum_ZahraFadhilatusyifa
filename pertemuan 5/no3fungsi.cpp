#include <iostream>
using namespace std;

//Fungsi untuk menghasilkan deret Fibonacci
void generateFibonacci(int n){
    int f_n, f_n1 = 0, f_n2 = 1;

    cout << "Deret Fibonacci hingga " << n << " elemen adalah : ";

    for (int i = 0; i < n; ++i){
        if (i <= 1){
            f_n = i;
        }
        else {
            f_n = f_n1 + f_n2;
            f_n1 = f_n2;
            f_n2 = f_n;
        }
        cout << f_n << " ";
    }
    cout << endl;
}

int main(){
//Penggunaan fungsi generateFibonacci
    int n;
    cout << "Masukan jumlah elemen dalam deret fibonacci : ";
    cin >> n;

    generateFibonacci(n);

    return 0;
}

