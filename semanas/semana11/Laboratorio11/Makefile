# ====== Makefile para Laboratorio11 ======
# Fuentes en: ./files/*.cpp | Binarios en: ./files/

# Compiladores
CXX        ?= g++
TSAN_CXX   ?= clang++   # TSan suele ir mejor con clang++

# Flags comunes (sin sanitizers)
CXXFLAGS   := -std=c++17 -g -O0 -fno-omit-frame-pointer
LDFLAGS    := -lpthread

# Sanitizers
ASAN_FLAGS := -fsanitize=address
TSAN_FLAGS := -fsanitize=thread

# Paths
SRCDIR     := files
BINDIR     := files

# Fuentes
SRC_SUM    := $(SRCDIR)/suma_vector.cpp
SRC_BUF    := $(SRCDIR)/buffers.cpp
SRC_RACE   := $(SRCDIR)/race.cpp

# Binarios
BIN_SUM_P  := $(BINDIR)/suma_vector
BIN_BUF_P  := $(BINDIR)/buffers_plain
BIN_BUF_A  := $(BINDIR)/buffers_asan
BIN_RACE_P := $(BINDIR)/race_plain
BIN_RACE_T := $(BINDIR)/race_tsan

.PHONY: all clean \
        build-normal asan tsan valgrind helgrind \
        run-buffers-plain run-buffers-asan run-race-plain run-race-tsan

# ===== Targets de alto nivel =====
all: build-normal

# Compila binarios "normales" (sin sanitizers)
build-normal: $(BIN_SUM_P) $(BIN_BUF_P) $(BIN_RACE_P)

# ASan: recompila buffers con ASan y lo ejecuta
asan: $(BIN_BUF_A)
	./$(BIN_BUF_A)

# TSan: recompila race con TSan (clang++) y lo ejecuta
tsan: $(BIN_RACE_T)
	./$(BIN_RACE_T)

# Valgrind/Memcheck sobre buffers_plain (SIN ASan)
valgrind: $(BIN_BUF_P)
	valgrind --leak-check=yes --track-origins=yes --show-leak-kinds=all ./$(BIN_BUF_P)

# Helgrind sobre race_plain (SIN TSan)
helgrind: $(BIN_RACE_P)
	valgrind --tool=helgrind ./$(BIN_RACE_P)

# ===== Recetas de compilación =====

# Normales (sin sanitizers)
$(BIN_SUM_P): $(SRC_SUM)
	$(CXX) $(CXXFLAGS) -o $@ $<

$(BIN_BUF_P): $(SRC_BUF)
	$(CXX) $(CXXFLAGS) -o $@ $<

$(BIN_RACE_P): $(SRC_RACE)
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

# Con ASan
$(BIN_BUF_A): $(SRC_BUF)
	$(CXX) $(CXXFLAGS) $(ASAN_FLAGS) -o $@ $<

# Con TSan (usar clang++)
$(BIN_RACE_T): $(SRC_RACE)
	$(TSAN_CXX) $(CXXFLAGS) $(TSAN_FLAGS) -o $@ $< $(LDFLAGS)

# ===== Helpers de ejecución =====
run-buffers-plain: $(BIN_BUF_P)
	./$(BIN_BUF_P)

run-buffers-asan: $(BIN_BUF_A)
	./$(BIN_BUF_A)

run-race-plain: $(BIN_RACE_P)
	./$(BIN_RACE_P)

run-race-tsan: $(BIN_RACE_T)
	./$(BIN_RACE_T)

# ===== Limpieza =====
clean:
	rm -f $(BIN_SUM_P) $(BIN_BUF_P) $(BIN_BUF_A) $(BIN_RACE_P) $(BIN_RACE_T)