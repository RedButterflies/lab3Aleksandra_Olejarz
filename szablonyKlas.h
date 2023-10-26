//
// Created by szyns on 23.10.2023.
//
#ifndef UNTITLED10_SZABLONYKLAS_H
#define UNTITLED10_SZABLONYKLAS_H
#include <iostream>
using namespace std;
template <typename T>
class Adding
{
private:
    T element;
public:
    Adding (T value);
    void add(T valur);
    void show();

};
template <typename T>
Adding <T>::Adding (T value)
{
    element=value;

}
template <typename T>
void Adding<T>::add (T value) {
    element = element + value;
}
template <typename T>
void Adding<T>::show()
{
    cout<<"Element: "<<element<<endl;
}

#endif //UNTITLED10_SZABLONYKLAS_H
