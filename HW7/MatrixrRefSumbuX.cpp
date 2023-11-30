#include <iostream>
#include <cmath>

using namespace std;

int main() {

  double x1, y1, x2, y2;
  int matrix[3][3];

  // Input
  cout << "Masukkan koordinat titik p1: ";
  cin >> x1 >> y1;
  cout << "Masukkan koordinat titik p2: ";
  cin >> x2 >> y2;

  // Hitung matrix refleksi
  matrix[0][0] = -1;
  matrix[0][1] = 0;
  matrix[0][2] = 0;
  matrix[1][0] = 0;
  matrix[1][1] = 1;
  matrix[1][2] = 0;
  matrix[2][0] = 0;
  matrix[2][1] = 0;
  matrix[2][2] = 1;

  // Hitung koordinat transformasi p1 dan p2
  double x1_baru = matrix[0][0] * x1 + matrix[0][1] * y1 + matrix[0][2];
  double y1_baru = matrix[1][0] * x1 + matrix[1][1] * y1 + matrix[1][2];
  double x2_baru = matrix[0][0] * x2 + matrix[0][1] * y2 + matrix[0][2];
  double y2_baru = matrix[1][0] * x2 + matrix[1][1] * y2 + matrix[1][2];

  // Output
  cout << "P1 = (" << x1 << ", " << y1 << ")" << endl;
  cout << "P2 = (" << x2 << ", " << y2 << ")" << endl;

  cout << "Refleksi matrix: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  cout << "koordinat transformasi p1: " << endl;
  cout << "(" << x1_baru << ", " << y1_baru << ")" << endl;
  cout << "koordinat transformasi p2: " << endl;
  cout << "(" << x2_baru << ", " << y2_baru << ")" << endl;

  return 0;
}
