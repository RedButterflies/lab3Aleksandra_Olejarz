//
// Created by szyns on 23.10.2023.
//
#include <algorithm>
#include <iostream>
#ifndef UNTITLED10_TABLICA_H
#define UNTITLED10_TABLICA_H
using namespace std;
template <typename T>
class Array {
private:
    T *tablica;
    int maxSize;
    int indeksPierwszeWolneMiejsce=0;
public:
    explicit Array(int maxSize) : maxSize(maxSize) {
        tablica = new T[maxSize];

    }

    Array() {
        maxSize = 10;
        tablica = new T[10];
    }

    virtual ~Array() {
        delete[] tablica;
    }

    T *sortowanieRosnaco() {
        std::sort(tablica,tablica+indeksPierwszeWolneMiejsce);
        return tablica;
    }

    T elementMaksymalny() {
        T maksymalny = tablica[0];
        for (int i = 0; i < maxSize; i++) {
            if (tablica[i] > maksymalny) {
                maksymalny = tablica[i];

            }
        }
        return maksymalny;
    }

    void zawartoscTablicy() {
        for (int i = 0; i < maxSize; i++) {
            cout << "Element " << i + 1 << ". tablicy: " << tablica[i] << endl;
        }
    }

    void dodajElement(T element) {
        if (maxSize > indeksPierwszeWolneMiejsce) {
            tablica[indeksPierwszeWolneMiejsce] = element;
            indeksPierwszeWolneMiejsce++;

        } else {
            cout << "\nTablica jest przepelniona. Nie mozna dodac elementu";
        }
    }

    T zwrocElement(int indeks) {
        if (indeks < maxSize && indeks >=0) {
            return tablica[indeks];
        } else {
            T zwrot = tablica[0];
            cout << "\nNie mozna wyswietlic elementu. Indeks poza tablica.\nZwracany pierwszy element tablicy: " << endl;
            return zwrot;
        }
    }
};

template<>
string* Array<string>::sortowanieRosnaco() {
    std::sort(this->tablica,this->tablica+indeksPierwszeWolneMiejsce,[](const std::string &a, const std::string &b)
    {
        return a.length()<b.length();

    });
    return tablica;

}
template<>
string Array<string>::elementMaksymalny() {
    string najdluzszy = tablica[0];
    for(int i=0;i< maxSize;i++)
    {
        if(tablica[i].length()>najdluzszy.length())
        {
                najdluzszy=tablica[i];
        }
    }
    return najdluzszy;
}





#endif //UNTITLED10_TABLICA_H
