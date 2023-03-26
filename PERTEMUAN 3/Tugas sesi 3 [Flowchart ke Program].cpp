#include <iostream>
using namespace std;

int main(){

    const int n=100;
    int b;
    int data[n];
    int cari;
    bool ketemu = false;
    int i;
    cout << "Masukan banyak nilai : ";
    cin >> b;
    cout << endl;
    for(int i=0;i<b;i++){
      cout << "Masukan nilai ke - " << i << " : ";
      cin >> data[i];
      cout << endl;
    };

    cout << "Masukan bilangan yang ingin dicari : ";
    cin >> cari;
    for (i = 0; i < n; i++){
        if(data[i] == cari){
            ketemu = true;
            break;
        }
    }

    if (ketemu){
        cout << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    
    return 0;
}