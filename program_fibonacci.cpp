#include <iostream>
#include <limits> 
using namespace std;


int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n; //basis rekursi (base case)
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  //rekurens (recursive case)
}

int main() {
    char ulang;
    
    cout << "---Program Deret Fibonacci---" << endl;
    
    do {
        int n;
    
        do {
            cout << "Masukkan Bilangan (>=0): ";
            cin >> n;

           if (cin.fail()) { 
                cout << "Input tidak valid. Harus berupa angka (>=0).\n";
                cin.clear(); // Menghapus error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Mengosongkan atau membersihkan buffer
            } else if (n < 0) { 
                cout << "Input tidak valid. Angka harus (>=0).\n";
            } else {
                break; // Input valid, keluar dari loop
            }

        } while (true); // Loop hingga mendapat input yang valid
        
        cout << "Bilangan Fibonacci ke-" << n << " adalah " << fibonacci(n) << endl; // Memanggil fungsi fibonacci
    
        do {
            cout << "Apakah ingin mengulang program(Y/N): ";
            cin >> ulang;

            if (ulang == 'Y' || ulang == 'y') {
                break; // Keluar dari loop
            } else if (ulang == 'N' || ulang == 'n') {
                cout << "Terimakasih Telah Memakai Program Ini^^" << endl;
                cout << "--Program Selesai--" << endl;
                return 0;
            } else {
                cout << "Input tidak valid. Silahkan Masukkan(Y/N)\n";
            }
        } while (true); // Loop hingga mendapat input Y/y atau N/n

    } while (true); // Loop hingga user memilih N/n

    return 0; 
}
