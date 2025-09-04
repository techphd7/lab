#include<iostream>
using namespace std;

int main(){
    int num;
    int count=0;
    double prd=1,sum,avg;;
    char quit;
    do{
        cout<<"enter the number :";
        cin>>num;
        cout<<num<<endl;
        
        sum +=num;
        count++;
        prd *=num;
        cout<<"press q to quit or any other no to continue"<<endl;
        cin>>quit;
    }while(quit!='q');
    cout<<"avg:"<<(sum/count)<<endl;
    cout<<"product:"<<prd<<endl;
    return 0;

}