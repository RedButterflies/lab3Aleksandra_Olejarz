//
// Created by szyns on 23.10.2023.
//

#ifndef UNTITLED10_FUNKCJASZABLONOWA_H
#define UNTITLED10_FUNKCJASZABLONOWA_H
#include <iostream>
using namespace std;
template <typename T>
T elementMin(T *a, int size)
{
    T eleMin = a[0];
    for(int i=0;i<size;i++)
    {
        if(a[i]<eleMin)
        {
            eleMin = a[i];
        }
    }
    return eleMin;
}

#endif //UNTITLED10_FUNKCJASZABLONOWA_H
