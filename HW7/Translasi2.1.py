import matplotlib.pyplot as plt
import numpy as np

def translate(matrix, translation):
    """
    Mentranslasi matriks dengan vektor translasi.

    Args:
        matrix: Matriks yang akan ditranslasi.
        translation: Vektor translasi.

    Returns:
        Matriks yang telah ditranslasi.
    """
    translated_matrix = np.empty_like(matrix)
    for i in range(matrix.shape[0]):
        translated_matrix[i] = matrix[i] + translation
    return translated_matrix

def connect_points(points, color):
    """
    Menghubungkan titik-titik dengan garis, termasuk menghubungkan titik awal dan akhir.

    Args:
        points: List of tuples (x, y) yang merupakan koordinat titik-titik.
        color: Warna garis.
    """
    x_values = [p[0] for p in points]
    y_values = [p[1] for p in points]
    plt.plot(x_values, y_values, '-', color=color)
  
    # Menghubungkan titik awal dan akhir dengan garis
    plt.plot([x_values[0], x_values[-1]], [y_values[0], y_values[-1]], '-', color=color)

def plot_points(points, color='black'):
    """
    Menampilkan grafik titik-titik.

    Args:
        points:  (x, y) yang merupakan koordinat titik-titik.
        color: Warna titik (default: hitam).
    """
    plt.plot([p[0] for p in points], [p[1] for p in points], 'o', color=color)

def plot_grid(xmin, xmax, ymin, ymax):
    """
    Menampilkan grid pada grafik.

    Args:
        xmin: Koordinat x minimum.
        xmax: Koordinat x maksimum.
        ymin: Koordinat y minimum.
        ymax: Koordinat y maksimum.
    """
    plt.xticks(np.arange(xmin, xmax + 1))
    plt.yticks(np.arange(ymin, ymax + 1))
    plt.grid(True)

# Matriks titik-titik
points = np.array([[2, 2], [10, 2], [5, 5]])

# Vektor translasi
translation = np.array([5, 5])

# Translasi matriks titik-titik
translated_points = translate(points, translation)

# Hubungkan titik-titik sebelum translasi dengan garis berwarna hitam
connect_points(points, color='black')

# Hubungkan titik-titik sesudah translasi dengan garis berwarna merah
connect_points(translated_points, color='red')

# Tampilkan grafik titik-titik sebelum dan sesudah translasi
plot_points(points, color='black')
plot_points(translated_points, color='red')

# Tampilkan grid pada grafik
plot_grid(0, 20, 0, 20)

plt.xlabel('X')
plt.ylabel('Y')
plt.title('Grafik Translasi')
plt.show()
