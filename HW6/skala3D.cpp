#include <iostream>
#include <cmath>

using namespace std;

int main() {
 // Define variables
 double x, y, z, sx, sy, sz;
 double matrix[4][4];

 // Input
 cout << "Masukkan koordinat titik p: ";
 cin >> x >> y >> z;
 cout << "Masukkan faktor skala x: ";
 cin >> sx;
 cout << "Masukkan faktor skala y: ";
 cin >> sy;
 cout << "Masukkan faktor skala z: ";
 cin >> sz;

 // Define 3D scale matrix
 matrix[0][0] = sx;
 matrix[0][1] = 0;
 matrix[0][2] = 0;
 matrix[0][3] = 0;
 matrix[1][0] = 0;
 matrix[1][1] = sy;
 matrix[1][2] = 0;
 matrix[1][3] = 0;
 matrix[2][0] = 0;
 matrix[2][1] = 0;
 matrix[2][2] = sz;
 matrix[2][3] = 0;
 matrix[3][0] = 0;
 matrix[3][1] = 0;
 matrix[3][2] = 0;
 matrix[3][3] = 1;

 // Perform 3D scaling transformation
 double x_baru = matrix[0][0] * x + matrix[0][1] * y + matrix[0][2] * z + matrix[0][3];
 double y_baru = matrix[1][0] * x + matrix[1][1] * y + matrix[1][2] * z + matrix[1][3];
 double z_baru = matrix[2][0] * x + matrix[2][1] * y + matrix[2][2] * z + matrix[2][3];

 // Output
 cout << "P = (" << x << ", " << y << ", " << z << ")" << endl;
 cout << "skala: " << sx << ", " << sy << ", " << sz << endl;
 cout << "matrix skala: " << endl;
 for (int i = 0; i < 4; i++) {
   for (int j = 0; j < 4; j++) {
     cout << matrix[i][j] << " ";
   }
   cout << endl;
 }
 cout << "Koordinat hasil: " << endl;
 cout << "(" << x_baru << ", " << y_baru << ", " << z_baru << ")" << endl;

 return 0;
}
