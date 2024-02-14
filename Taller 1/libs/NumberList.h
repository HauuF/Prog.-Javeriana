#ifndef NUMBERLIST_H
#define NUMBERLIST_H

#include <string>

using namespace std;

struct NumberList {
    int size;
    int numbers[100];

    NumberList() {
        size = 0;
    }

    void add(int number) {
        numbers[size] = number;
        size++;
    }

    void remove(int index) {
        for (int i = index; i < size - 1; i++) {
            numbers[i] = numbers[i + 1];
        }
        size--;
    }

    int get(int index) {
        return numbers[index];
    }

    bool set(int index, int number) {
        if (index <= 0 || index > size) {
            return false;
        }

        numbers[index] = number;
        return true;
        
    }

    bool contains(int number) {
        for (int i = 0; i < size; i++) {
            if (numbers[i] == number) {
                return true;
            }
        }
        return false;
    }

    void clear() {
        size = 0;
    }

    NumberList copy() {
        NumberList other;
        for (int i = 0; i < other.size; i++) {
            numbers[i] = other.numbers[i];
        }
        size = other.size;
        return other;
    }

    string toString() {
        string result = "[";
        for (int i = 0; i < size; i++) {
            result += to_string(numbers[i]);
            if (i < size - 1) {
                result += ", ";
            }
        }
        result += "]";
        return result;
    }
};

void generateNumberListWithRandomNumbers(NumberList& lista) {
    lista.clear();
    srand(time(0));
    for(int i=0; i < 20; i++){
        int num = rand() % 10 + 1;
        lista.add(num);
    }
}

void getNumberListWithoutRepetitions(NumberList& sinrepetir, NumberList& lista) {
    for (int i = 0; i < lista.size; i++) {
    int actual = lista.get(i);
    if (!sinrepetir.contains(actual)) {
        sinrepetir.add(actual);
        }
    }
        for (int i = 1; i <= 10; i++) {
            if (!sinrepetir.contains(i)) {
            sinrepetir.add(i);
        }
    }
}

void getNumberListWithNumberOfRepetitions(NumberList& numeroveces, NumberList& conteos, NumberList& lista) {
    for (int i = 0; i < lista.size; i++) {
    int actual = lista.get(i);
    if (!numeroveces.contains(actual)) {
    numeroveces.add(actual);
    }
}
    for (int i = 0; i < numeroveces.size; i++) {
        int numero = numeroveces.get(i);
        int count = 0;
        for (int j = 0; j < lista.size; j++) {
            if (lista.get(j) == numero) {
                count++;
                }
            }
        conteos.add(count);
    }
}

#endif /* NUMBERLIST_H */