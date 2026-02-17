# Algorithms & Data Structures Training

Projekt edukacyjny poświęcony nauce algorytmów i struktur danych w C++.

## 📚 Opis Projektu

Ten projekt zawiera implementacje popularnych struktur danych i algorytmów w celu pogłębiania wiedzy na temat:
- Podstawowych struktur danych
- Operacji na strukturach (dodawanie, usuwanie, przeszukiwanie)
- Analityki matematycznej złożoności algorytmów (Big O notation)
- Efektywnego wykorzystania pamięci

## 🏗️ Struktura Projektu

```
algorithms/
├── LinkedList.h          # Definicja klasy LinkedList (nagłówek)
├── linked_list.cpp       # Implementacja struktur List i algorytmów
├── main                  # Plik wykonawczy (compiled binary)
└── README.md             # Ten plik
```

## 🔧 Technologia

- **Język:** C++
- **Kompilator:** G++ (lub inny zgodny z C++)
- **IDE:** JetBrains CLion

## 📖 Zaimplementowane Struktury

### Linked List (Lista Wiązana)
Struktura danych umożliwiająca dynamiczne zarządzanie elementami.

**Operacje:**
- `addElement(int value)` - Dodanie nowego elementu na końcu listy
- `displayList()` - Wyświetlenie wszystkich elementów listy
- Własności: `head`, `tail`, `size`

**Złożoność czasowa:**
- Dodawanie na koniec: O(1)
- Przeszukiwanie: O(n)
- Usuwanie: O(n)

## 🚀 Jak Zbudować i Uruchomić

### Kompilacja
```bash
g++ -o main linked_list.cpp
```

### Uruchomienie
```bash
./main
```

## 📝 Przykład Użycia

```cpp
LinkedList ll = LinkedList(10);  // Utwórz listę z wartością 10
ll.addElement(20);                // Dodaj element 20
ll.addElement(30);                // Dodaj element 30
ll.displayList();                 // Wyświetl wszystkie elementy
```

## 🎯 Zaplanowane Funkcjonalności

- [ ] Metoda usuwania elementów (`removeElement()`)
- [ ] Wyszukiwanie elementu (`search()`)
- [ ] Wstawianie elementu w określonej pozycji
- [ ] Stack (Stos)
- [ ] Queue (Kolejka)
- [ ] Binary Search Tree (Drzewo Binarne)
- [ ] Hash Table (Tablica Hash)
- [ ] Algorytmy sortowania (QuickSort, MergeSort, BubbleSort)
- [ ] Algorytmy wyszukiwania (Binary Search, DFS, BFS)

## 📚 Materiały Edukacyjne

Polecane zasoby do nauki:
- "Introduction to Algorithms" - CLRS
- https://visualgo.net/ - Wizualizacja algorytmów
- https://www.geeksforgeeks.org/ - Tutoriele i dokumentacja

## 🔍 Uwagi do Rozwoju

1. Rozdzielić deklarację i implementację (przenieść kod z `.cpp` do `.h`)
2. Dodać konstruktor kopiujący i operator przypisania
3. Dodać destruktor do czyszczenia pamięci
4. Implementować testy jednostkowe

## 💡 Notatki

- Zwracaj uwagę na zarządzanie pamięcią (memory leaks)
- Zawsze myśl o złożoności czasowej i przestrzennej
- Testuj edge cases (pusta lista, lista z jednym elementem itp.)

## 📄 Licencja

Projekt edukacyjny - wolno використовуй do celów nauki.

---

**Autor:** stanczyk  
**Data Utworzenia:** 16-17 lutego 2026
