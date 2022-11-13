#include <iostream>
using namespace std;

int main (){

   float praktikum,nilai_uts, nilai_uas, nilai_akhir;

   cout << "Program menghitung nilai akhir mahasiswa" << endl;
   cout << "----------------------------------------" << endl;

   //Proses input
	cout << "Masukan Nilai praktikum : ";
	cin >> praktikum;

	cout << "Masukan Nilai uts : ";
	cin >> nilai_uts;

	cout << "Masukan Nilai uas : ";
	cin >> nilai_uas;


	//Hitung sesuai rumus
	nilai_akhir = ((praktikum*0.2)+(nilai_uts*0.3)+(nilai_uas*0.5));


	//Proses output
	cout<<endl;
	cout<<"Nilai Akhir : "<<nilai_akhir<<endl;



return 0;
}
