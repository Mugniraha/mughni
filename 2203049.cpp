#include <iostream>

using namespace std;

int main(){
  string nama;
  int nim;
  string hobi;
  int umur;
  string alamat;
  char jenis_kelamin;
 
  // --- proses input ---
  cout << "Siapakah namamu?" << endl;
  cout << "jawab: ";
  // menyimpan data ke variabel
  getline(cin,nama);
  
  cout <<"Berapa nim kamu?" << endl;
  cout <<"jawab: ";
  // menyimpan data ke variabel
  cin >> nim;
  
  // --- proses input ---
  cout << "Apa hobi kamu?" << endl;
  cout << "jawab: ";
  // menyimpan data ke variabel
  getline(cin,hobi);
 
  cout << "Berapa umurmu?" << endl;
  cout << "jawab: ";
  // menyimpan data ke variabel
  cin >> umur;
  
  // --- proses input ---
  cout << "dimanakah alamat kamu?" << endl;
  cout << "jawab: ";
  // menyimpan data ke variabel
  getline(cin,alamat);
 
  cout << "Jenis kelamin [L/P]: ";
  // menyimpan data ke variabel
  cin >> jenis_kelamin;
 
  // --- proses output ---
  cout << "Salam kenal, " << nama << " Sekarang engkau berusia ";
  cout << umur << " dan kau berjenis kelamin "<< jenis_kelamin;
 
  return 0;

}
