#include<iostream>
#include<fstream>
using namespace std;

class student{
	
 public: int id;
 char name[50];
 void getdata()
 {
 	cout<<"Enter Id:";
 	cin>>id;
 	cout<<"Enter Name:";
 	cin>>name;
 }
 void showdata()
 {
 	cout<<"ID:"<<id<<"NAME:"<<name<<endl;
 }
};
 int main()
 {
 	
 	student s;
 	s.getdata();
 	ofstream outfile("student.dat",ios::binary);
 	
 	outfile.write(reinterpret_cast<char*>(&s),sizeof(s));
 	outfile.close();
	 
	 cout<<"serialization done!!(object saved in file)"<<endl;
	 return 0; 	
 	
 }
