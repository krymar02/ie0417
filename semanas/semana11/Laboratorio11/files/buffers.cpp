#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

char* copiar(const char* src) {
    size_t n = strlen(src);
    // reservar espacio para el terminador
    char* buf = (char*) malloc(n + 1);
    if (!buf) {
        cerr << "malloc failed\n";
        exit(1);
    }
    // copia segura, ahora buf tiene n+1 bytes
    memcpy(buf, src, n + 1);
    return buf;
}

int main() {
    const char* msg = "hola mundo";
    char* a = copiar(msg);
    cout << a << endl;

    free(a);
    a = nullptr; // evitar use-after-free accidental

    // asignación temporal (si se necesita) -> liberar después
    char* leak = (char*) malloc(128);
    if (!leak) {
        cerr << "malloc failed\n";
        return 1;
    }
    strcpy(leak, "leak detectado");
    cout << leak << endl;
    free(leak); // liberar para evitar fuga

    cout << "Fin del programa (sin fugas ni errores)" << endl;
    return 0;
}