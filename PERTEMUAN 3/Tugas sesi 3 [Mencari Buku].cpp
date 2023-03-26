#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
const int N=100;
string buku[N]={"buku1","buku2","buku3","buku4"};
int binarysearch(string x, int l, int r){
  if(r>=l){
    int mid = l+(r-l)/2;
    if(buku[mid]==x)
      return mid;
    if(buku[mid]>x)
      return binarysearch(x,l,mid-1);
      return binarysearch(x, mid+1,r);
  }
  return-1;
}
int main(){

  int n=4;
  
  cout << "Buku yang tersedia :" << endl;
  for(int i=0;i<4;i++){
    cout << buku[i] << endl;
  }
  sort(buku,buku+n);

  string x;
  cout << "Masukan buku yang ingin dicari : ";
  cin >> x;

  int hasil = binarysearch(x,0,n-1);
  if(hasil == -1)
    cout << "buku tidak ditemukan";
  else
    cout << "buku ditemukan pada rak ke - " << hasil << endl;
  return 0;
}