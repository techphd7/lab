#include<iostream>
using namespace std;
 int main()
 {
     int num,i;
     cout<<"enter the table num:";
     cin>>num;
     if(num<1){
         cout<<"enter valid table no.";
     }else
     {for(i=1;i<=10;i++){
         cout<<num<<"X"<<i<<"="<<(num*i)<<endl;
        }
     }
     return 0;


 }