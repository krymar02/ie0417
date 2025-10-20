import matplotlib.pyplot as plt

# Datos de ejemplo (basados en tus resultados)
config = ["1-1", "1-2", "1-4", "2-1", "2-2", "2-4", "4-1", "4-2", "4-4"]
tiempos = [1.0196, 0.8217, 0.8165, 2.0348, 1.0167, 0.8211, 4.0526, 2.0270, 1.0209]

plt.figure(figsize=(10,6))
plt.bar(config, tiempos, color='skyblue')
plt.xlabel("Configuración (Productores-Consumidores)")
plt.ylabel("Tiempo de ejecución (s)")
plt.title("Tiempos de ejecución Productor-Consumidor")
plt.savefig("tiempos_hilos.png")  # Esto guarda el gráfico
plt.show()  # Esto lo muestra en pantalla

