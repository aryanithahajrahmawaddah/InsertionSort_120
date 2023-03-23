#include <iostream>
using namespace std;

int arr[20];					// Membuat array panjang data 20
int n;							// Membuat variabel inputan n

void input()
{								// Procedure Input
	while (true)
	{
		cout << "Masukan Jumlah Data Pada Array : ";	// Membuat Inputan Jumlah Element Array
		cin >> n;										// Memanggil Variabel Inputan

		if (n <= 20)
		{				// Membuat kondisi n tidak lebih dari 20
			break;

		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 elemen. \n";		// Menampilkan pesan jika data lebih dari 20
		}
	}


}