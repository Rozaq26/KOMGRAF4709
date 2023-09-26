#include <iostream>

using namespace std;


void tambahMatriks(int matriks1[2][2], int matriks2[2][2], int hasil[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}


void kurangMatriks(int matriks1[2][2], int matriks2[2][2], int hasil[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }
}


void kaliMatriks(int matriks1[2][2], int matriks2[2][2], int hasil[2][2]) {
    hasil[0][0] = (matriks1[0][0] * matriks2[0][0]) + (matriks1[0][1] * matriks2[1][0]);
    hasil[0][1] = (matriks1[0][0] * matriks2[0][1]) + (matriks1[0][1] * matriks2[1][1]);
    hasil[1][0] = (matriks1[1][0] * matriks2[0][0]) + (matriks1[1][1] * matriks2[1][0]);
    hasil[1][1] = (matriks1[1][0] * matriks2[0][1]) + (matriks1[1][1] * matriks2[1][1]);
}

int main() {
    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];
    int pilihan;

    
    cout << "Pilih operasi: " << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cin >> pilihan;

   
    cout << "Masukkan elemen-elemen matriks pertama (baris 1, kolom 1): ";
    cin >> matriks1[0][0];
    cout << "Masukkan elemen-elemen matriks pertama (baris 1, kolom 2): ";
    cin >> matriks1[0][1];
    cout << "Masukkan elemen-elemen matriks pertama (baris 2, kolom 1): ";
    cin >> matriks1[1][0];
    cout << "Masukkan elemen-elemen matriks pertama (baris 2, elemen 2): ";
    cin >> matriks1[1][1];

    
    cout << "Masukkan elemen-elemen matriks kedua (baris 1, kolom 1): ";
    cin >> matriks2[0][0];
    cout << "Masukkan elemen-elemen matriks kedua (baris 1, kolom 2): ";
    cin >> matriks2[0][1];
    cout << "Masukkan elemen-elemen matriks kedua (baris 2, kolom 1): ";
    cin >> matriks2[1][0];
    cout << "Masukkan elemen-elemen matriks kedua (baris 2, kolom 2): ";
    cin >> matriks2[1][1];

    switch (pilihan) {
        case 1:
            
            tambahMatriks(matriks1, matriks2, hasil);
            cout << "Hasil tambah:" << endl;
            break;
        case 2:
            
            kurangMatriks(matriks1, matriks2, hasil);
            cout << "Hasil kurang:" << endl;
            break;
        case 3:
            
            kaliMatriks(matriks1, matriks2, hasil);
            cout << "Hasil kali:" << endl;
            break;
        default:
            cout << "Pilihan salah" << endl;
            return 1;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
