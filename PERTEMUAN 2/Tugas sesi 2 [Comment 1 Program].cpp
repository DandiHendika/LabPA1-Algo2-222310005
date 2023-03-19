#include <iostream> //Header Program
using namespace std;

//Fungsi void untuk menukar nilai pada array
void swap(int arr[], int pos1, int pos2){ 
  int temp;
  temp = arr[pos1];
  arr[pos1] = arr[pos2];
  arr[pos2] = temp;
}
//disini proses sorting terjadi, dimana pertama kita akan memilih pivot di ujung list. dan membandingkan setiap angka dari sebelah kiri dan kanan, dimana jika angka lebih kecil dari pivot maka ia akan ditempatkan di sebelah kiri dan jika lebih besar maka akan ditempatkan disebelah kanan. serta kita akan mereturn pivot
int partition(int arr[], int low, int high, int pivot){
  int i = low;
  int j = low;
  while(i <= high){
    if(arr[i] > pivot){
      i++;
    }else{
      swap(arr, i, j);
      i++;
      j++;
    }
  }
  return j-1;
}
//pembuatan fungsi recursive, untuk melakukan proses pivot jika angka masih belum tersorting secara ascending, maka kita akan terus menjalankan fungsinya hingga semua angka terurut sempurna.
void quicksort(int arr[], int low, int high){
  if(low < high){
    int pivot = arr[high];
    int pos = partition(arr, low, high, pivot);

    quicksort(arr, low, pos-1);
    quicksort(arr, high, pos+1);
  }
}
//fungsi utama
int main(){
  int n;
  cout << "Tentukan panjang array : ";//menentukan panjang array
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  quicksort(arr, 0, n-1); //pemanggilan fungsi quicksort
  cout << "Berikut adalah array yang sudah disortir : "; //menampilkan output pada array yang sudah diurutkan
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  } 
}