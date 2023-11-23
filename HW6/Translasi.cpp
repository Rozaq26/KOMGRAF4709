#include <iostream>

using namespace std;

int main() {
  
  int x, y, tx, ty;
  int matrix[3][3];


  cout << "Masukkan koordinat titik p: ";
  cin >> x >> y;
  cout << "Masukkan tx: ";
  cin >> tx;
  cout << "Masukkan ty: ";
  cin >> ty;

 
  matrix[0][0] = 1;
  matrix[0][1] = 0;
  matrix[0][2] = tx;
  matrix[1][0] = 0;
  matrix[1][1] = 1;
  matrix[1][2] = ty;
  matrix[2][0] = 0;
  matrix[2][1] = 0;
  matrix[2][2] = 1;

  // hitung
  int x_baru = matrix[0][0] * x + matrix[0][1] * y + matrix[0][2];
  int y_baru = matrix[1][0] * x + matrix[1][1] * y + matrix[1][2];

  // Hasil
  int matrix_hasil[3] = {x_baru, y_baru, 1};

  // Output
  cout << "p = (" << x << ", " << y << ")" << endl;
  cout << "tx = " << tx << endl;
  cout << "ty = " << ty << endl;
  cout << "Matriks translasi: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  cout << "Hasil hitung: " << endl;
  for (int i = 0; i < 3; i++) {
    cout << matrix_hasil[i] << " " << endl;
  }
  cout << endl;

  return 0;
}
