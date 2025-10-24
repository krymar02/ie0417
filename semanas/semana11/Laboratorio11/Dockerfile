FROM ubuntu:24.04

# Herramientas de build y depuración
RUN apt update && apt install -y \
    clang g++ gdb valgrind make \
 && rm -rf /var/lib/apt/lists/*

WORKDIR /lab-debug
COPY . .
CMD ["bash"]