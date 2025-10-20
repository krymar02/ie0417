#!/bin/bash

for prod in 1 2 4; do
    for cons in 1 2 4; do
        echo "Ejecutando con $prod productores y $cons consumidores"
        start=$(date +%s.%N)
        ./productor_consumidor $prod $cons 5
        end=$(date +%s.%N)
        elapsed=$(echo "$end - $start" | bc)
        echo "Tiempo de ejecución: $elapsed segundos"
        echo "--------------------------------------"
    done
done
