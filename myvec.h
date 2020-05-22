#ifndef MYVEC_H_INCLUDED
#define MYVEC_H_INCLUDED

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



using namespace std;

template<typename DT> //to create vector of different data types

class myvector{

    DT* arr;//*
    long long vsize; // size of the vector
    long long  maxsize; //max size of the vector
    DT* array;
    void alloc_new();
public:
    myvector();
    myvector(DT);
    myvector(const myvector& v);//copy constructor
    ~myvector();
    void push_back(DT);//*int->DT
    int size();//changes
    DT operator[](int i);
    myvector& operator+=(DT i)
    {
    this->push_back(i);
    return *this;
    };
    myvector& operator=(const myvector& v)
    {
        if(this!=&v)
        {
            maxsize = v.maxsize;
            vsize = v.vsize;
            delete[] array;
            array = new DT[maxsize];
            for(int i = 0; i < v.vsize; i++)
            array[i] = v.array[i];

        }
        return *this;
    }; //vector = vector
    DT at (int i);
    long long getcapacity()
    {
        return maxsize;
    };
     void resize(int count);







     // Iterator Class
    class iterator {
    private:
        // Dynamic array using pointers
        DT* ptr;

    public:
        explicit iterator()
            : ptr(nullptr)
        {
        }
        explicit iterator(DT* p)
            : ptr(p)
        {
        }
        bool operator==(const iterator& rhs) const
        {
            return ptr == rhs.ptr;
        }
        bool operator!=(const iterator& rhs) const
        {
            return !(*this == rhs);
        }
        DT operator*() const
        {
            return *ptr;
        }
        iterator& operator++()
        {
            ++ptr;
            return *this;
        }
        iterator operator++(int)
        {
            iterator temp(*this);
            ++*this;
            return temp;
        }
         iterator& operator--()
        {
            --ptr;
            return *this;
        }
        iterator operator--(int)
        {
          iterator temp(*this);
            --*this;
            return temp;
        }
        iterator operator-(int sub)
        {
        iterator temp(ptr - sub);
        return temp;
        }

    };

    // Begin iterator
    iterator begin() const;

    // End iterator
    iterator end() const;




};


template<typename DT>
void myvector<DT>::resize(int count) {
    if (count < 0)
        throw 5;
    else if (count < vsize)
        vsize = count;
    else if (count > maxsize) {
        DT *tempTab = new DT[count];
        for (int i = 0; i < vsize; i++)
            tempTab[i] = array[i];
        delete[] array;
        array = tempTab;
    }
}



template<typename DT>
myvector<DT>::myvector()
{
    maxsize = 20;
    array = new DT[maxsize];
    vsize = 0;
}
template<typename DT>
myvector<DT>::myvector(DT i)
{
    maxsize = 20;
    array = new DT[maxsize];
    vsize = 0;
}
template<typename DT>
myvector<DT>::myvector(const myvector& v)
{

        maxsize = v.maxsize;
        vsize = v.vsize;
        array = new DT[maxsize];
        for(int i = 0; i < v.vsize; i++)
            array[i] = v.array[i];
}
template<typename DT>
myvector<DT>::~myvector()
{
    delete[] array;
}

template<typename DT>
void myvector<DT>::push_back(DT i)
{
    if(vsize+1>maxsize)
        alloc_new();
    array[vsize]=i;
    vsize++;
}
template<typename DT>
DT myvector<DT>::operator[] (int i)
{
    return array[i];
}
template<typename DT>
DT myvector<DT>::at(int i)
{
    if(i<vsize)
        return array[i];
    throw 10;
}
template<typename DT>
void myvector<DT>::alloc_new()
{
    maxsize = vsize*2;
    DT* tmp = new DT[maxsize];
    for(int i = 0; i <vsize; i++)
    {
        tmp[i]=array[i];
    }
    delete[] array;
    array=tmp;
}
template<typename DT>
int myvector<DT>::size ()
{
    return vsize;
}

void readfileM(char ty, int k);
void writetwoM(myvector<Student>S, int k);
void writedeleteM(myvector<Student>S, int k);




#endif // MYVEC_H_INCLUDED
