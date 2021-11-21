/* Buatlah program untuk mencari nilai maksimal dari n bilangan menggunakan fungsi dengan parameter pointer */ 

#include <iostream>
#include <conio.h>

using namespace std;

main (){
	int angka, jumlah, max;
	
	cout <<"=======================================\n";
	cout <<"|	Program Nilai Maksimal		|\n";
	cout <<"=======================================\n";
	
	cout <<" Masukkan Jumlah Angka : "; cin >> jumlah;
	
	for (int n = 1 ; n <= jumlah; n++){
		cout <<" Masukkan Angka : "; cin >> angka;
		
		if (n == 1){
			max = angka;
		}
		else if (max<angka){
			max = angka;
		}
		else {}
	}
	
	cout <<"=============================\n";
	cout <<endl;
	cout << "Nilai Maksimal : "<<max<<endl;
	
	getch ();
}

