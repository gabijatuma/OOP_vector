#ifndef TASKS_H_INCLUDED
#define TASKS_H_INCLUDED


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <time.h>
#include <string>
#include <chrono>
#include <list>
#include <deque>
#include <algorithm>


using namespace std;
using namespace std::chrono;

class Human{
protected:
    string name, surname;
public:
    virtual void setName(string nam, string sur) = 0; //setter

    string getName()
    {
        return name;
    }
    string getSurname()
    {
        return surname;
    }
};


class Student : public Human{
private:
    //string name, surname;
    double vid;
public:
    Student(): vid(0){}
    void setVid(double V) //setter
    {
        vid = V;
    }
    double getVid() const
    {
        return vid;
    }

    void setName(string nam, string sur) //setter
    {
        name = nam;
        surname = sur;
    }

    ~Student() {}; //destructor
     Student(const Student &p2) //copy constructor
     {
        this -> name = p2.name;
        this -> surname = p2.surname;
        this -> vid = p2.vid;

     }
     Student& operator = (const Student& p2)
     {
        if(&p2 == this) return *this;

        name = p2.name;
        surname = p2.surname;
        vid = p2.vid;
        return *this;
    }


};





void readfileV(char ty, int k);
void writefile(vector<Student>S, char type, int k);
void writetwoV(vector<Student>S, int k);
void writedeleteV(vector<Student>S, int k);

bool sortings (const Student& a, const Student& b);
void create (int k, char type);









#endif // TASKS_H_INCLUDED
