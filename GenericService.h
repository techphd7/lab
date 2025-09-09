#ifndef GenericService_H
#define GenericService_H
#include<iostream>
using namespace std;
#include<cstring>
#include "Object.h"

class GenericService{
    public:
    static myObject arr[100];
    static int count;
    static void AddObject();
    static void DisplayAll();
    static void SearchId();
    static void SearchByName();
    static void SortById();
    static void SortByName();
    static void modifyExtraByrId();

};
#endif