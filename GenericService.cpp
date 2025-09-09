#include "GenericService.h"
#include<iostream>
using namespace std;

myObject GenericService :: arr[100];
int GenericService :: count=0;


 void GenericService::AddObject()
 {
  if (count>=100){
      cout<<"array is full";
      return;
  }   
  arr[count].getdata();
  count++;
 }

 void GenericService::DisplayAll()
 {
     if(count==0)
     {
         cout<<"array is empty";
         return;
     }
     for(int i=0;i<count;i++)
     arr[i].showdata();
 }

void GenericService::SearchId()
{
    int id;
    cout<<"enter Id :";
    cin>>id;
    for (int i=0;i<count;i++)
    if (arr[i].id==id){
        arr[i].showdata();
        return;
    }
    cout<<"id not found";
 }

void GenericService::SearchByName(){
    char name[50];
    cin.ignore();
    cout<<"Enter name :";
    cin.getline(name,50);
    for(int i=0;i<count;i++)
    {
        arr[i].showdata();
        return;
    }
    cout<<"not found";
}

void GenericService::SortById(){
    for (int i=0;i<count;i++)
      for (int j=i+1;j<count;j++)
          if (arr[i].id>arr[j].id)
          swap(arr[i],arr[j]);
          cout<<"sorted by ID ";
}

void GenericService::SortByName(){
    for(int i=0;i,count;i++)
        for(int j=i+1;j<count;j++)
          if (strcmp (arr[i].name,arr[j].name)>0)
         swap (arr[i],arr[j]);
         cout<<"sortedbyname";

}

void GenericService::modifyExtraByrId(){
    int id;
    cin.ignore();
    cout<<"enter id to modify";
    cin>>id;
    for(int i=0;i<count;i++)
    {
        cout<<"enter new extra info ";
        cin.getline(arr[i].extradata,50);
        cout<<"update";
        return;
    }
    cout<<"not found";
}


