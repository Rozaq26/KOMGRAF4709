import matplotlib.pyplot as plt
import numpy as np

def rotate(matrix, angle):
  

  rotation_matrix = np.array([[np.cos(angle), -np.sin(angle)],
                                [np.sin(angle), np.cos(angle)]])
  return np.matmul(matrix, rotation_matrix)

def translate(matrix, translation):
 

  translated_matrix = np.empty_like(matrix)
  for i in range(matrix.shape[0]):
    translated_matrix[i] = matrix[i] + translation
  return translated_matrix

def connect_points(points, color):
  

  plt.plot([p[0] for p in points], [p[1] for p in points] , '-', color=color)

def plot_points(points, color='black'):
 

  plt.plot([p[0] for p in points], [p[1] for p in points], 'o', color=color)

def plot_grid(xmin, xmax, ymin, ymax):
  

  plt.xticks(np.arange(xmin, xmax + 1))
  plt.yticks(np.arange(ymin, ymax + 1))
  plt.grid(True)
  plt.scatter([p[0] for p in points], [p[1] for p in points])
  for i in range(xmin, xmax + 1):
    plt.annotate(str(i), (i, 0.5), ha='center', va='bottom')
  for i in range(ymin, ymax + 1):
    plt.annotate(str(i), (0.5, i), ha='center', va='center')

# Matriks titik-titik
points = np.array([[1, 3], [3, 7]])

# Sudut rotasi
angle = np.pi / 4

# Matriks rotasi
rotated_points = rotate(points, angle)

# Hubungkan titik-titik sebelum rotasi dengan garis berwarna hitam
connect_points(points, color='black')

# Hubungkan titik-titik sesudah rotasi dengan garis berwarna merah
connect_points(rotated_points, color='red')


# Tampilkan grafik titik-titik sebelum dan sesudah rotasi
plot_points(points, color='black')
plot_points(rotated_points, color='red')

# Tampilkan grid pada grafik
plot_grid(0, 10, 0, 10)

plt.xlabel('X')
plt.ylabel('Y')
plt.title('Grafik Rotasi')
plt.show()
