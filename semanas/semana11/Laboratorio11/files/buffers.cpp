#include <iostream>
#include <cstdlib>   
#include <cstring>   
using namespace std;

char* copiar(const char* src) {
    size_t n = strlen(src);
    // Error intencional: no reservar espacio para '\0' (debería ser n+1)
    char* buf = (char*) malloc(n);
    // Error intencional: copia n+1 bytes en un buffer de n bytes -> overflow
    memcpy(buf, src, n + 1);
    return buf;
}

int main() {
    const char* msg = "hola mundo";
    char* a = copiar(msg);
    cout << a << endl;

    free(a);
    // Use-after-free intencional: acceso posterior a memoria liberada
    cout << "Acceso posterior a free: " << a << endl;

    // Fuga intencional: memoria asignada y no liberada
    char* leak = (char*) malloc(128);
    strcpy(leak, "leak detectado");

    // Mostrar algo para que el programa haga trabajo
    cout << "Fin del programa (puede haber fugas)" << endl;
    return 0;
}