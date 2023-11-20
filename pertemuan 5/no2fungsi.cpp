#include <iostream>

using namespace std;

//fungsi untuk membuat piramida bintang
    void printPyramid(int n){
    for (int i = 1; i <= n; ++i){

//membuat spasi
    for (int j = 1; j <= n - i; ++j){
        cout << " ";
    }
//mencetak bintang (karakter*) dengan memasukkan rumus 2*i-1
    for (int k = 1; k <= 2 * i - 1; ++k){
        cout << "*";
    }
        cout << endl;
    }

}

int main(){
//penggunaan fungsi printpyramid
    int n;
    cout << "Masukkan tinggi piramida : ";
    cin >> n;

    printPyramid(n);

    return 0;
}
