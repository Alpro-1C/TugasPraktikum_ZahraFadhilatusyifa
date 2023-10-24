#include <iostream>

using namespace std;

int main(){
    int N; //jumlah ekor bebek
    int M; //jumlah teman
    int bebekyangdibagikan,jumlahsisabebek;

    cout << "jumlah ekor bebek:";
    cin >> N;
    cout << "jumlah teman:";
    cin >> M;

    bebekyangdibagikan=N/M;
    jumlahsisabebek=N%M;

    for (int i=0; i<100; i++){
        cout << "-";
    }
    cout << "\njumlah bebek yang dibagikan perorang:" << bebekyangdibagikan <<endl;
    cout << "jumlah sisa bebek:" << jumlahsisabebek <<endl;

    return 0;
}

