#include <iostream>
#include "szablonyKlas.h"
#include "Student.h"
#include "Adding.h"
#include "funkcjaSzablonowa.h"
#include "Tablica.h"

using namespace std;
template <typename T>
void mySwap (T& a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b= temp;

}


int main() {
    int a = 6;
    int b = 8;
    cout<<"przed: "<<a<<" "<<b<<endl;
    mySwap<int>(a,b);
    cout<<"po: "<<a<<" "<<b<<endl;
    char c ='f';
    char d ='g';
    cout<<"przed: "<<c<<" "<<d<<endl;
    mySwap<char>(c,d);
    cout<<"po: "<<c<<" "<<d<<endl;

    //Adding
    Adding<int> a1 (5);
    a1.add(6);
    a1.show();

    Adding<string> a2("Pro");
    a2.add("gramowanie");
    a2.show();

    //Student
    Student<float> s (5,"Ala");
    s.showMark();
    Student<int> s1(5,"Ala");
    s1.showMark();
    Student<string> s2 (5,"Ala");
    s2.showMark();

    Adding<int>* arrAdd[3];
    for(int i=0;i<3;i++)
         {
         arrAdd[i]=new Adding<int>(i);
         }
     showAll(arrAdd,3);
     Student<string>* arrStu[2];
     for(int i=0;i<3;i++){
         arrStu[i]=new Student<string>(i+2,"Ala");
         }
    showAll(arrStu,3);
     for(auto & i : arrAdd)
        delete i;
     for(auto & i : arrStu)
         delete i;
     cout<<endl;
     cout<<endl;
     cout<<endl;
     cout<<"Demonstracja dzialania funkcji szablonowej"<<endl;
     cout<<endl;
    //funkcjaSzablonowa
    int tablicaInt[5] = {2,3,4,1,5};
    char tablicaChar[10]={'c','d','e','f','a','b','g','h','i','j'};
    string tablicaString [3]={"Ola","Jacek","Placek"};
    float tablicaFloat [4]={1.8,2.6,9.7,1.3};
    cout<<"Element minimalny tablicy int: "<<elementMin(tablicaInt,5)<<endl;
    cout<<"Element minimalny tablicy char: "<<elementMin(tablicaChar,10)<<endl;
    cout<<"Element minimalny tablicy string: "<< elementMin(tablicaString,3)<<endl;
    cout<<"Element minimalny tablicy float: "<< elementMin(tablicaFloat,4)<<endl;
    //Klasa Tablica.h
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Demonstracja dzialania szablonu klasy Array"<<endl;
    cout<<endl;
    cout<<"Dla string"<<endl;
    cout<<endl;
    Array<string> array1 (6);
    array1.dodajElement("Ola");
    array1.dodajElement("Pola");
    array1.dodajElement("Cola");
    array1.dodajElement("Trolla");
    array1.dodajElement("Mola");
    array1.dodajElement("Jola");
    cout<<"Zawartosc tablicy przed posortowaniem"<<endl;
    array1.zawartoscTablicy();
    cout<<"Element maksymalny tablicy string: "<<array1.elementMaksymalny()<<endl;
    cout<<endl;
    array1.sortowanieRosnaco();
    cout<<"Zawartosc tablicy po posortowaniu"<<endl;
    array1.zawartoscTablicy();
    cout<<"Wyswietlenie elementu tablicy o indeksie 5:  "<<array1.zwrocElement(5)<<endl;
    cout<<"Proba wyswietlenia elementu tablicy o indeksie wykraczajacym poza zakres tablicy:  "<<array1.zwrocElement(-7)<<endl;


    cout<<endl;
    cout<<"Dla int"<<endl;
    cout<<endl;
    Array<int> array2 (6);
    array2.dodajElement(5);
    array2.dodajElement(63);
    array2.dodajElement(7);
    array2.dodajElement(21);
    array2.dodajElement(52);
    array2.dodajElement(1);
    cout<<"Zawartosc tablicy przed posortowaniem"<<endl;
    array2.zawartoscTablicy();
    cout<<"Element maksymalny tablicy int: "<<array2.elementMaksymalny()<<endl;
    cout<<endl;
    array2.sortowanieRosnaco();
    cout<<"Zawartosc tablicy po posortowaniu"<<endl;
    array2.zawartoscTablicy();
    cout<<"Element tablicy o indeksie 5: "<<array2.zwrocElement(5)<<endl;
    cout<<"Proba wyswietlenia elementu tablicy o indeksie wykraczajacym poza zakres tablicy: "<<array2.zwrocElement(-5)<<endl;

    cout<<endl;
    cout<<"Dla float"<<endl;
    cout<<endl;
    Array<float> array3 (6);
    array3.dodajElement(5.54);
    array3.dodajElement(6.33);
    array3.dodajElement(77.778);
    array3.dodajElement(23.31);
    array3.dodajElement(53.2);
    array3.dodajElement(143.2);


    array3.zawartoscTablicy();
    cout<<"Element maksymalny tablicy float: "<<array3.elementMaksymalny()<<endl;
    cout<<endl;
    array3.sortowanieRosnaco();
    cout<<"Zawartosc tablicy po posortowaniu"<<endl;
    array3.zawartoscTablicy();
    cout<<"Wyswietlenie elementu tablicy o indeksie 5: "<<array3.zwrocElement(5)<<endl;
    cout<<"Proba wyswietlenia elementu tablicy o indeksie wychodzacym poza zakres tablicy: "<<array3.zwrocElement(-6)<<endl;

    cout<<endl;
    cout<<"Proby dodania elementu do pelnych tablic: "<<endl;
    array3.dodajElement(165.2);
    array1.dodajElement("Kokoko");
    array2.dodajElement(123);
    return 0;
}
