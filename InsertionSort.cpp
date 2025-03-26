#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variable inputan n

void input()
{ // Procedure Input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : "; // Membuat Inputan jumlah element pada Array
        cin >> n; // Memanggil variable inputan n

        if (n <= 20)
        { // Membuat Kondisi n tidak jatuh dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 28 Element.\n"; // Menampilkan Pesan jika data lebih dsri 20
        }
    }
    cout << endl; // Membuat jarak per baris program
    cout << "======================" << endl; // Membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyiapkan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": "; // Masukkan atau menginputkan nilai data n
        cin >> arr[i]; // Menyimpan nilai data n kedalam array arr
    }
}

void insertionSort()
{ // Procedure InsertionSort

    int temp; // Membuat variable data temporer atau penyimpanan sementara
    int j, i; // Membuat varible j sebagai penanda

    for (i = 1; 1 <= n - 1; i++)
    { // Step 1

        temp = arr[i]; // Step 2

        i = i - 1; // Step 3

        while (j >= 0 && arr[j] > temp) // Step 4
        {
            arr[j + 1] = arr[j]; // Step 4a
            j--; // Step 4b
        }

        arr[j + 1] = temp; // Step5
    }
}

void display()
{
    cout << endl; // Output baris kosong
    cout << "==================================" << endl;
    cout << "Total Passs = " << n - 1 << endl; // count element movement
    cout << "==================================" << endl; // Output ke layar
    cout << "Element Array yang telah tersusun" << endl; // Output ke layar
    cout << "==================================" << endl; // Output ke layar

