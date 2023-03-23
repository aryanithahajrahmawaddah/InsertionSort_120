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
	int j = 0;				// Membuat variabel j sebagai penanda

	for (int i = 1; i < n; i++)	// 1. Looping dengan i dimulai dari 1 hingga n-1
	{

		temp + arr[i];			// 2. Simpan nilai arr[i] ke variabel sementara tetap

		j = i - 1;				// 3. Setting nilai j sama dengan i-1;


		while (j >= 0 && arr[j] > temp)		// 4. Looping while dimana nilai j lebih besar sama dengan 0 dan
		{									// arr[j] lebih besar daripada temp
			arr[j + 1] = arr[j];			// a. simpan arr[j] ke dalam variabel arr[j + 1]
			j--;							// b. Decrement nilai j by 1
		}

		arr[j + i] = temp;					// 5. Simpan nilai temp ke dalam arr[j +1]


		cout << endl;
		cout << "\nPass " << i << ": ";		// Output ke layar
		for (int k = 0; k < n; k++)
		{									// Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";			// Output ke layar
		}
	}
}