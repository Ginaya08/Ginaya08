#include <iostream>
using namespace std;

int main (){
	int x;
	int y;
	int kode;
	
	cout << "==== Program kalkulator Sederhana ====" << endl;
	cout << "Pilihan Operasi :" <<endl;
	cout << "1.Penjumlahan (+)" <<endl;
	cout << "2.Pengurangan (-)" <<endl;
	cout << "3.Perkalian (*)" <<endl;
	cout << "4.Pembagian (/)" <<endl;
	cout << "Silahkan masukkan kode operasi : "; cin >> kode;
	cout << "Masukkan angka pertama : "; cin >> x;
	cout << "Masukkan angka kedua : "; cin >> y;

if (kode == 1){
	cout << "Hasil Penjumlahan dari "<<x<<" + "<<y<<" = "<<x+y<<endl;
} else if (kode == 2){
	cout << "Hasil Pengurangan dari "<<x<<" - "<<y<<" = "<<x-y<<endl;
} else if (kode == 3){
	cout << "Hasil perkalian dari "<<x<<" * "<<y<<" = "<<x*y<<endl;
} else if (kode == 4){
	cout << "Hasil pembagian dari "<<x<<" / "<<y<<" = "<<x/y<<endl;
} else {
	cout << "Anda Tidak Memilih" <<endl;
}

	cout << "Program ini adalah program kalkulator sederhana" << endl;
	return 0;
	
}
