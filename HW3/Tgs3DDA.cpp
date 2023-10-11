#include <iostream>
#include <cmath>

using namespace std;


void dda(int x1, int y1, int x2, int y2) {

  int dx = x2 - x1;
  int dy = y2 - y1;

  float m = dy / dx;

  int langkah = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
  cout <<"  Hasil : " << endl;
  
  for (int i = 0; i <= langkah; i++) {
    // Hitung titik berikutnya
    int x = x1 + i * m;
    int y = y1 + i / m;

  
     
    cout << " (" << x << ", " << y << ")" << endl;
  }
}

int main() {
  
  int x1, y1, x2, y2;

 
  cout << "Masukkan angka garis pertama x1 dan y1: ";
  cin >> x1 >> y1;
  cout << "Masukkan angka garis kedua x2dan y2: ";
  cin >> x2 >> y2;

  
  dda(x1, y1, x2, y2);

  return 0;
}
