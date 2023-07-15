#include <iostream>
using namespace std;

int main(){
	
	int bilangan;
	int bilangan1;
	int hasil;
	int i;
	int a;
	
	cout << "Masukkan berapa total masukan : ";
	cin >> bilangan;

	
	for (a=1; a<= bilangan; a++){
			
		cout << "Masukkan angka : ";
		cin >> bilangan1;
		
		int jumlah = 0;
		for (i=bilangan1; i > 0; i--){
			
			hasil = bilangan1 % i;
			
			if (hasil == 0){
				
				jumlah++;
			}
		}
		
				if (jumlah == 2){
					
					cout << "Iya, Bilangan Prima"<< endl;
				}else{
					
					cout << "Bukan bilangan Prima"<< endl;
				}
				
	}
	
	return 0;
}
