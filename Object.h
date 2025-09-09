#ifndef MyObject_H
#define MyObject_H
#include<iostream>
using namespace std;

class myObject{ 
public:

    int id;
    char name[50];
    char extradata[50];

    void getdata();
    void showdata();
};
#endif