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
#include "tasks.h"
#include "myvec.h"

using namespace std;


int main()
{
    char type = 'v';

    cout<<"Irasymas i naujus konteinerius | irasymas i nauja ir senu duomenu panaikinimas "<<endl;
    for(int kiekis = 1000; kiekis <= 10000000; kiekis*=10)
    {
        cout<<"******"<<kiekis<<"******"<<endl;
        create(kiekis, type);
        cout<<"vector   "<<endl;
        readfileV(type, kiekis);
        cout<<"My vector   "<<endl;
        readfileM(type, kiekis);


    }



    //capacity = size counting

/*
    int countv1 = 0, countv2 = 0;
    vector <int> v1;
    myvector <int>v2;
    long long s1, s2, cap1, cap2;
    s1 = v1.size();
    s2 = v2.size();
    cap1 = v1.capacity();
    cap2 = v2.getcapacity();


    for (int i = 1; i <= 100000000; ++i)
    {
        v1.push_back(i);
        v2.push_back(i);
        if(v1.capacity()==v1.size()) countv1++;
        if(v2.getcapacity()==v2.size()) countv2++;
    }

    cout<<"std::vector perskirstymai: "<<countv1<<endl;
    cout<<"my_vector clases perstatymai: "<<countv2<<endl;
    */






    // std::vector ir myvector palyginimas
    /*
    vector <int>v;
    myvector <int>mv;


    // Pradëti v1 uþpildymo laiko matavimà
    //unsigned int sz = 10000;  // 100000, 1000000, 10000000, 100000000
   for(int sz = 10000; sz <=100000000; sz*=10){
    cout<<"     "<<sz<<"           "<<endl;
    auto start = high_resolution_clock::now();
    for (int i = 1; i <= sz; ++i)
    v.push_back(i);
    // Baigti v1 uþpildymo laiko matavimà
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"std::vector: "<<(double)duration.count()/1000000<<endl;

    // Pradëti v2 uþpildymo laiko matavimà
    auto start2 = high_resolution_clock::now();
    for (int i = 1; i <= sz; ++i)
    mv.push_back(i);
     auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop - start);
    cout<<"My vector: "<<(double)duration.count()/1000000<<endl;
    // Baigti v2 uþpildymo laiko matavimà
   }*/
    return 0;
}
