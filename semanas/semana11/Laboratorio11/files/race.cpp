#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

atomic<int> contador{0};

void trabajo(int n) {
    for (int i = 0; i < n; ++i) {
        // Operación atómica: evita la data race sin necesidad de locks
        contador.fetch_add(1, memory_order_relaxed); // o simplemente: contador++;
    }
}

int main() {
    int iter = 1'000'000;
    thread t1(trabajo, iter);
    thread t2(trabajo, iter);
    t1.join();
    t2.join();

    cout << "Valor final (atomic): " << contador.load() << endl; // 2000000
    return 0;
}