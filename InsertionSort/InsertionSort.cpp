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
	cout << endl;					           // Membuat jarak per baris program
	cout << "=====================" << endl;   // Membuat tampilan susunan data element array
	cout << "Masukan element array" << endl;
	cout << "=====================" << endl;

	// Menggunakan perulangan for untuk menyimpan data pada array
	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << (i + 1) << ": ";		 // Memasukan atau menginput nilai data n
		cin >> arr[i];								 // Memasukan nilai data n kedalam array arr

	}
}
// Procedure Insertionsort
void insertionsort()
{

	int temp;			// Membuat variabel data temporer atau menyimpan sementara
}