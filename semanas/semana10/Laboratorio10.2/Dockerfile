# Dockerfile
FROM ubuntu:22.04

# Instalar compilador y herramientas
RUN apt-get update && apt-get install -y g++ make

# Copiar los archivos del laboratorio
WORKDIR /app
COPY . .

# Compilar el programa
RUN g++ productor_consumidor.cpp -o productor_consumidor -pthread -std=c++20

# Comando por defecto al ejecutar la imagen
CMD ["./productor_consumidor", "1", "1", "5"]
