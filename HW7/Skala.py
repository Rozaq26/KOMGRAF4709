import matplotlib.pyplot as plt
import numpy as np

def scale(matrix, scale, offset):
  

  if len(matrix.shape) != 2:
    raise ValueError("")

  scaled_matrix = np.empty_like(matrix)
  for i in range(matrix.shape[0]):
    scaled_matrix[i] = scale * matrix[i] + offset
  return scaled_matrix


points = np.array([[1, 3], [3, 7]])
scaled_points = scale(points, 2, 5)

print(scaled_points)


def connect_points(points, color='black'):
    
    x_values = [p[0] for p in points]
    y_values = [p[1] for p in points]
    plt.plot(x_values, y_values, '-', color=color)

    # Menghubungkan titik awal dan akhir dengan garis
    plt.plot([x_values[0], x_values[-1]], [y_values[0], y_values[-1]], '-', color=color)

def plot_points(points, color='black'):
    
    plt.plot([p[0] for p in points], [p[1] for p in points], 'o', color=color)

def plot_grid(xmin, xmax, ymin, ymax):
    
    plt.xticks(np.arange(xmin, xmax + 1))
    plt.yticks(np.arange(ymin, ymax + 1))
    plt.grid(True)



# Hubungkan titik-titik sebelum skala dengan garis berwarna hitam
connect_points(points, color='black')

# Hubungkan titik-titik sesudah skala dengan garis berwarna merah
connect_points(scaled_points, color='red')

# Tampilkan grafik titik-titik sebelum dan sesudah skala
plot_points(points, color='black')
plot_points(scaled_points, color='red')

# Tampilkan grid pada grafik
plot_grid(0, 20, 0, 20)

plt.xlabel('X')
plt.ylabel('Y')
plt.title('Grafik Skala')
plt.show()
