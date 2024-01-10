#include <iostream>

using namespace std;

int main() {
 int x, y, z, tx, ty, tz;
 int matrix[4][4];

 cout << "Masukkan koordinat titik p: ";
 cin >> x >> y >> z;
 cout << "Masukkan tx: ";
 cin >> tx;
 cout << "Masukkan ty: ";
 cin >> ty;
 cout << "Masukkan tz: ";
 cin >> tz;

 // Matriks translasi 3D
 matrix[0][0] = 1;
 matrix[0][1] = 0;
 matrix[0][2] = 0;
 matrix[0][3] = tx;
 matrix[1][0] = 0;
 matrix[1][1] = 1;
 matrix[1][2] = 0;
 matrix[1][3] = ty;
 matrix[2][0] = 0;
 matrix[2][1] = 0;
 matrix[2][2] = 1;
 matrix[2][3] = tz;
 matrix[3][0] = 0;
 matrix[3][1] = 0;
 matrix[3][2] = 0;
 matrix[3][3] = 1;

 // Perhitungan transformasi
 int x_baru = matrix[0][0] * x + matrix[0][1] * y + matrix[0][2] * z + matrix[0][3];
 int y_baru = matrix[1][0] * x + matrix[1][1] * y + matrix[1][2] * z + matrix[1][3];
 int z_baru = matrix[2][0] * x + matrix[2][1] * y + matrix[2][2] * z + matrix[2][3];

 // Hasil transformasi
 int matrix_hasil[4] = {x_baru, y_baru, z_baru, 1};

 // Output
 cout << "p = (" << x << ", " << y << ", " << z << ")" << endl;
 cout << "tx = " << tx << endl;
 cout << "ty = " << ty << endl;
 cout << "tz = " << tz << endl;
 cout << "Matriks translasi: " << endl;
 for (int i = 0; i < 4; i++) {
   for (int j = 0; j < 4; j++) {
     cout << matrix[i][j] << " ";
   }
   cout << endl;
 }
 cout << "Hasil transformasi: " << endl;
 for (int i = 0; i < 4; i++) {
   cout << matrix_hasil[i] << " " << endl;
 }

 return 0;
}
