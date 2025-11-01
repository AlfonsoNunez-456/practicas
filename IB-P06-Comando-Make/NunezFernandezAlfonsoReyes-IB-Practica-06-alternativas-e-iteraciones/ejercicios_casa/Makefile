# Nombre del compilador
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++17

# Nombre del ejecutable
TARGET = Harmonic_numbers_1

# Archivos fuente
SRC = Harmonic_numbers_1.cpp

# Regla principal
all: $(TARGET)

# Cómo compilar el programa
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Limpieza de archivos generados
clean:
	rm -f $(TARGET)

