# Cpp07 - Templates in C++

Un progetto della 42 Network che esplora i **templates** e la **programmazione generica** in C++. Questo modulo insegna come scrivere codice riutilizzabile che funziona con qualsiasi tipo di dato.

## 📚 Panoramica

Questo progetto contiene tre esercizi progressivi per imparare:
- Template di funzioni
- Funzioni generiche con callback
- Template di classi con gestione della memoria

---

## 📁 Struttura del Progetto

### **Exercise 00: whatever**
**Template functions - Swap, Min, Max**

Implementa tre funzioni template basiche:
- `swap<T>(T &a, T &b)` - Scambia due variabili dello stesso tipo
- `min<T>(T a, T b)` - Restituisce il valore minore
- `max<T>(T a, T b)` - Restituisce il valore maggiore

**File**: `ex00/whatever.hpp`
```cpp
template <typename T>
void swap(T &a, T &b)
```

**Compilazione**:
```bash
cd ex00
make
./whatever
```

---

### **Exercise 01: iter**
**Template function with callback - Array iteration**

Implementa una funzione template generica per iterare su array:
- `iter<T, F>(T* address, int size, void (*f)(F&))` - Itera su un array e applica una funzione a ogni elemento

Supporta qualsiasi tipo di dato e qualsiasi funzione che accetta un parametro per riferimento.

**File**: `ex01/iter.hpp`
```cpp
template <typename T, typename F>
void iter(T* adress, int size, void (f)(F&))
```

**Compilazione**:
```bash
cd ex01
make
./iter
```

---

### **Exercise 02: Array**
**Template class - Dynamic array container**

Implementa una classe template `Array<T>` che gestisce array dinamici:

**Caratteristiche**:
- Costruttori: default, con dimensione, copy constructor
- Operatori: assignment, subscript con bounds checking
- Gestione memoria: new/delete corretti
- Eccezioni: `outOfBondException` per accessi fuori bounds
- Metodo `size()` per ottenere la lunghezza

**File**: 
- `ex02/Array.hpp` - Definizione della classe
- `ex02/Array.tpp` - Implementazione template

```cpp
template <typename T>
class Array {
    T& operator[](unsigned int num);
    unsigned int size() const;
    class outOfBondException: public std::exception { ... };
};
```

**Compilazione**:
```bash
cd ex02
make
./array
```

---

## 🎯 Concetti Chiave Appresi

| Concetto | Descrizione |
|----------|-------------|
| **Template Functions** | Funzioni generiche che funzionano con qualsiasi tipo |
| **Template Classes** | Classi generiche per contenitori e strutture dati |
| **Type Deduction** | Il compilatore deduce il tipo template automaticamente |
| **Template Specialization** | Comportamenti diversi per tipi specifici |
| **SFINAE** | Substitution Failure Is Not An Error |
| **Exception Safety** | Gestione eccezioni in codice template |

---

## 🛠️ Requisiti

- C++98 standard (compatibile con versioni più recenti)
- Compiler: `g++` o `clang++`
- Make

---

## 📝 Note Importanti

- I template devono essere **completamente definiti nell'header** o in file `.tpp` inclusi
- **No `.cpp` files** con template - tutto in header/tpp
- Usa `-std=c++98` o versioni compatibili
- Bounds checking con eccezioni in `Array`

---

## 🚀 Utilizzo Rapido

```bash
# Compilare tutti gli esercizi
cd ex00 && make && cd ../ex01 && make && cd ../ex02 && make

# Pulire
cd ex00 && make clean && cd ../ex01 && make clean && cd ../ex02 && make clean
```

---

## 💡 Esempi di Utilizzo

### **Ex00 - Whatever**
```cpp
int a = 5, b = 10;
swap(a, b);           // a = 10, b = 5
int m = min(a, b);    // m = 5
int M = max(a, b);    // M = 10
```

### **Ex01 - Iter**
```cpp
void printInt(int &n) { std::cout << n << " "; }
int arr[] = {1, 2, 3};
iter(arr, 3, printInt);  // Output: 1 2 3
```

### **Ex02 - Array**
```cpp
Array<int> arr(5);
arr[0] = 42;
std::cout << arr.size();  // Output: 5
arr[100];                 // Throws outOfBondException
```

**Autore**: Livi-maker | **Progetto**: 42 Network | **Modulo**: Cpp07