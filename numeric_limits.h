//
// Created by szyns on 23.10.2023.
//

#ifndef UNTITLED10_NUMERIC_LIMITS_H
#define UNTITLED10_NUMERIC_LIMITS_H
#include <iostream>
#include <limits>

using namespace std;
 template <typename T>
 void checkType(T a)
 {
 T val=numeric_limits<T>::max();
 cout<<val<<endl;
 }
 int main()
 {
 checkType<int>(3);
 return 0;
 }
#endif //UNTITLED10_NUMERIC_LIMITS_H
