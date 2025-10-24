FROM ubuntu:24.04

# Dockerfile
FROM ubuntu:24.04

# Evita prompts (tzdata) y reduce paquetes sugeridos
ENV DEBIAN_FRONTEND=noninteractive

# Actualiza e instala SOLO lo necesario (sin recommends)
RUN apt-get update && apt-get install -y --no-install-recommends \
    g++ \
    make \
    gdb \
    valgrind \
    clang \
    ca-certificates \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /lab-debug
COPY . .

# Por defecto, abre un shell para poder ejecutar "make" a mano
CMD ["bash"]