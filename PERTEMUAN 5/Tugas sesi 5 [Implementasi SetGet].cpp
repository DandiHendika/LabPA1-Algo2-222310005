#include <iostream>
#include <string>
using namespace std;

class Perpustakaan{
  private:
    string pinjam;
    string kembali;

  public:
    void setPinjam(string n){
      pinjam = n;
    }
    void setKembali(string s){
      kembali = s;
    }
    string getPinjam(){
      return pinjam;
    }
    string getKembali(){
      return kembali;
    }
};

int main(){
  Perpustakaan buku;
  buku.setPinjam(" The Da Vinci Code dipinjam oleh ");
  buku.setKembali(" The Da Vinci Code telah dikembalikan oleh ");
  cout << "Buku: " << buku.getPinjam() << "Budi" <<endl;
  cout << "Buku: " << buku.getKembali() << "Budi" << endl;

  return 0;
}