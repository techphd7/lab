#include "GenericService.h"
#include<iostream>
using namespace std;

int main(){
     int choice;
    do{
        cout<<".......menu......."<<endl;
        cout<<"1. Add object"<<endl;
        cout<<"2.Display All"<<endl;
        cout<<"3.search id"<<endl;
        cout<<"4.search by name"<<endl;
        cout<<"5.sort by id"<<endl;
        cout<<"6.sort by name"<<endl;
        cout<<"7.modifyExtraByrId"<<endl;
        cout<<"8.Exit"<<endl;
        cout<<"enter choice";
        cin>>choice;
        switch(choice){
            case 1:GenericService::AddObject();
            break;
            case 2:GenericService::DisplayAll();
            break;
            case 3:GenericService::SearchId();
            break;
            case 4:GenericService::SearchByName();
            break;
            case 5:GenericService::SortById();
            break;
            case 6:GenericService::SortByName();
            break;
            case 7:GenericService::modifyExtraByrId();
            break;
            case 8:cout<<"existing..!";
            break;
            default : cout<<"Invalid Choice...!";
        }
        }
             while (choice!=8);
            return 0;
        }
    