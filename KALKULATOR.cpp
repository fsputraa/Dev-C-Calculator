//KALKULATOR
//credit by nando 

#include <iostream>

using namespace std;

int main()
{
	float a,b,hasil;
	char aritmatika;
	
	cout << "NAMA : FERNANDO SAPUTRA" << endl;
	cout << "NIM  : 2021210069" << endl;
	cout << "KALKULATOR \n " << endl;
	
	//memasukkan data dari user
	cout << "ANGKA PERTAMA	: ";
	cin >> a;
	cout << "+, -, *, /	: ";
	cin >> aritmatika;
	cout << "ANGKA KEDUA	: ";
	cin >> b;
	cout<<endl;
	
	cout << "HASIL \n";
	cout << a << aritmatika << b << endl;
	
	//proses perhitungan
	if (aritmatika == '+'){
		hasil = a + b;
		cout <<"="<< hasil << endl;
	}
		else if (aritmatika == '-'){
		hasil = a - b;
		cout <<"="<< hasil << endl;
	}
		else if (aritmatika == '*'){
		hasil = a * b;
		cout <<"="<< hasil << endl;
	}
		else if (aritmatika == '/'){
		hasil = a / b;
		cout <<"="<< hasil << endl;
	}
	
	cin.get();
	return 0;
}
