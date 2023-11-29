#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Define variables
  double x, y, sx, sy;
  int matrix[3][3];

  // Input
  cout << "Masukkan koordinat titik p: ";
  cin >> x >> y;
  cout << "Masukkan faktor skala x: ";
  cin >> sx;
  cout << "Masukkan faktor skala y: ";
  cin >> sy;

  // Define scale matrix
  matrix[0][0] = sx;
  matrix[0][1] = 0;
  matrix[0][2] = 0;
  matrix[1][0] = 0;
  matrix[1][1] = sy;
  matrix[1][2] = 0;
  matrix[2][0] = 0;
  matrix[2][1] = 0;
  matrix[2][2] = 1;

  // Perform scaling transformation
  double x_baru = matrix[0][0] * x + matrix[0][1] * y + matrix[0][2];
  double y_baru = matrix[1][0] * x + matrix[1][1] * y + matrix[1][2];

  // Output
  cout << "P = (" << x << ", " << y << ")" << endl;
  cout << " skala: " << sx << ", " << sy << endl;
  cout << " matrix skala: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  cout << "Koordinat hasil: " << endl;
  cout << "(" << x_baru << ", " << y_baru << ")" << endl;

  return 0;
}
