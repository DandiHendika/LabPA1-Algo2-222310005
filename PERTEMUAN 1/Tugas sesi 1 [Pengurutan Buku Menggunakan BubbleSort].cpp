#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Deklarasi fungsi untuk Bubble Sort
void mainsorting(string arr[], int n);

int main() {
    int d;

    cout << "Masukkan jumlah buku: ";
    cin >> d;

    string judul[d];

    for (int i = 0; i < d; i++) {
        cout << "Masukkan judul buku ke-" << i+1 << ": ";
        cin >> judul[i];
    }

    mainsorting(judul, d);

    cout << "\nJudul buku yang sudah diurutkan:\n";
    for (int i = 0; i < d; i++) {
        cout << judul[i] << endl;
    }

    return 0;
}


void mainsorting(string arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}