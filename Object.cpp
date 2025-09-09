#include "Object.h"
#include<iostream>
using namespace std;
 
 void myObject::getdata(){
     cout<<"ID :";
     cin>>id;
     cin.ignore();
     cout<<"Name:";
     cin.getline(name,50);
     cout<<"Extra info:";
     cin.getline(extradata,100);
 }
 void myObject::showdata(){
     cout<<"ID :"<<id<<endl;
     cout<<"name :"<<name<<endl;
     cout<<"Extra info :"<<extradata<<endl;
}