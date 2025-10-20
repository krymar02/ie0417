#include <iostream>
#include <thread>
#include <semaphore>
#include <vector>
#include <chrono>

const int NUM_HILOS = 5;       // Número de hilos
const int MAX_RECURSOS = 2;    // Recursos disponibles simultáneamente
const int NUM_RONDAS = 5;      // Número de rondas

std::counting_semaphore<MAX_RECURSOS> sem(MAX_RECURSOS);

void tarea(int id) {
    for (int ronda = 1; ronda <= NUM_RONDAS; ++ronda) {
        // Intentar usar el recurso
        sem.acquire();
        std::cout << "Hilo " << id << " usando recurso en ronda " << ronda << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(300)); // simula trabajo
        std::cout << "Hilo " << id << " liberando recurso en ronda " << ronda << std::endl;
        sem.release();

        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // espera antes de la siguiente ronda
    }
}

int main() {
    std::vector<std::thread> hilos;

    for (int i = 0; i < NUM_HILOS; ++i)
        hilos.emplace_back(tarea, i);

    for (auto &h : hilos)
        h.join();

    std::cout << "Ejecución finalizada." << std::endl;
    return 0;
}
