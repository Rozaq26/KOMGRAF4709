#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
  double x, y, theta;
  int matrix[3][3];

  // Input
  cout << "Masukkan koordinat titik p: ";
  cin >> x >> y;
  cout << "Masukkan sudut rotasi (dalam derajat): ";
  cin >> theta;

  
  double radian = theta * M_PI / 180;

  
  matrix[0][0] = cos(radian);
  matrix[0][1] = -sin(radian);
  matrix[0][2] = 0;
  matrix[1][0] = sin(radian);
  matrix[1][1] = cos(radian);
  matrix[1][2] = 0;
  matrix[2][0] = 0;
  matrix[2][1] = 0;
  matrix[2][2] = 1;

  // hitung matrix
  double x_baru = matrix[0][0] * x + matrix[0][1] * y + matrix[0][2];
  double y_baru = matrix[1][0] * x + matrix[1][1] * y + matrix[1][2];

  // Output
  cout << "P = (" << x << ", " << y << ")" << endl;
  cout << "masukkan rotasi (derajat): " << theta  << endl;
  cout << "Rotasi matrix: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  cout << "koordinat transformasi: " << endl;
  cout << "(" << x_baru << ", " << y_baru << ")" << endl;

  return 0;
}
