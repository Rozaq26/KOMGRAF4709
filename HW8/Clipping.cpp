#include <iostream>

using namespace std;

int main() {
  int x1, y1, x2, y2;
  int xmax, ymax, xmin, ymin;

  cout << "Masukkan koordinat titik awal (x1, y1): ";
  cin >> x1 >> y1;
  cout << "Masukkan koordinat titik akhir (x2, y2): ";
  cin >> x2 >> y2;
  cout << "Masukkan koordinat titik sudut kiri atas (xmin, ymin): ";
  cin >> xmin >> ymin;
  cout << "Masukkan koordinat titik sudut kanan bawah (xmax, ymax): ";
  cin >> xmax >> ymax;

  // Menentukan apakah titik awal dan titik akhir berada di dalam atau di luar 
  bool titik1DiDalam = true;
  bool titik2DiDalam = true;

  // Memeriksa titik awal
  if (x1 < xmin || x1 > xmax || y1 < ymin || y1 > ymax) {
    titik1DiDalam = false;
  }

  // Memeriksa titik akhir
  if (x2 < xmin || x2 > xmax || y2 < ymin || y2 > ymax) {
    titik2DiDalam = false;
  }

  // Menentukan region code
  int regionCode = 0;
  if (titik1DiDalam && titik2DiDalam) {
    regionCode = 1;
  } else if (!titik1DiDalam && !titik2DiDalam) {
    regionCode = 2;
  } else {
    if (x1 < xmin && x2 < xmin) {
      regionCode = 3;
    } else if (x1 > xmax && x2 > xmax) {
      regionCode = 4;
    } else if (y1 < ymin && y2 < ymin) {
      regionCode = 5;
    } else if (y1 > ymax && y2 > ymax) {
      regionCode = 6;
    } else {
      regionCode = 7;
    }
    if (x1 < xmin && y1 < ymin) {
      regionCode |= 1;
    }
  }

  // Menampilkan hasil
  switch (regionCode) {
    case 1:
      cout << "Region code: 0000" << endl;
      cout << "terletak di dalam viewport." << endl;
      break;
    case 2:
      cout << "Region code: 0001" << endl;
      cout << "terletak sebelah kiri viewport." << endl;
      break;
       case 3:
        cout << "Region code: 0010" << endl;
      cout << "terletak di sebelah kanan viewport." << endl;
      break;
    case 4:
        cout << "Region code: 0100" << endl;
      cout << "terletak di sebelah bawah viewport." << endl;
      
      break;
    case 5:
    cout << "Region code: 0101" << endl;
      cout << "terletak di sebelah kiri bawah viewport." << endl;
      
      break;
    case 6:
    cout << "Region code: 0110" << endl;
      cout << "terletak di sebelah kanan bawah viewport." << endl;
      
      break;
    case 7:
    cout << "Region code: 1000" << endl;
      cout << "terletak di sebelah atas viewport." << endl;
      
      break;
    case 8:
    cout << "Region code: 1001" << endl;
      cout << "terletak di sebelah kiri atas viewport." << endl;
      
      break;
    case 9:
    cout << "Region code: 1010" << endl;
      cout << "terletak di sebelah kanan atas viewport." << endl;
      
      break;
  }

  return 0;
}
