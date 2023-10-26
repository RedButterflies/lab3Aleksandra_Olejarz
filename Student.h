//
// Created by szyns on 23.10.2023.
//
#include <iostream>
#include <utility>
#ifndef UNTITLED10_STUDENT_H
#define UNTITLED10_STUDENT_H
using namespace std;

template <typename T>
class Student
{
private:
    string name;
    int mark;
public:
    Student(int mark, const string& name)
    {
        this->mark=mark;
        this->name=name;
    }
    Student()
    {

    }
    void show()
    {
        cout<<"Imie: "<<name<<" ocena "<<mark<<endl;

    }
    void showMark()
    {
        cout<<mark<<endl;

    }



};
template<>
void Student<int>::showMark() {

    cout<<"Twoja ocena to: "<<mark<<endl;
}
template<>
class Student<string>
{
private:
    string name;
    int mark;
public:
    Student(int mark, string name)
    {
        this->mark=mark;
        this->name=std::move(name);
    }
    Student()
    {}
    void show()
    {
        cout<<"Imie: "<<name<<" ocena "<<mark<<endl;
    }
    int showMark()
    {
        string word [6] = {"jedynka","dwojka","trojka","czworka",
        "piatka","szostka"};
        cout <<"Twoja ocena to: "<<word[mark-1]<<endl;
        return mark;


    }
};
#endif //UNTITLED10_STUDENT_H
