#include<iostream>
//to find the no of note requie in amount
using namespace std;
 int main(){
     int amt,i,count2000=0,count500=0,count100=0,count50=0,count10=0,count5=0,count2=0,count1=0;
     cout<<"enter the amount:";
     cin>>amt;
     while(amt>=2000){
         amt -=2000 ;
         count2000++;
     }
     cout<<"2000 ="<<count2000<<"notes"<<endl;

     while (amt>=500){
         amt -=500;
         count500++;

     }
     cout<<"500 ="<<count500<<"notes"<<endl;
      while (amt>=100){
         amt -=100 ;
         count100++;
     }
     cout<<"100="<<count100<<"notes"<<endl;
     
 while (amt>=50){
         amt -=50 ;
         count50++;
     }
     cout<<"50="<<count50<<"notes"<<endl;
 while (amt>=10){
         amt -=10 ;
         count10++;
     }
     cout<<"10 ="<<count10<<"notes"<<endl;
while (amt>=5){
         amt -=5 ;
         count5++;
     }
     cout<<"5="<<count5<<"notes"<<endl;
 while (amt>=2){
         amt -=2;
         count2++;
     }
     cout<<"2 ="<<count2<<"coin"<<endl;
while (amt>=1){
         amt -=1 ;
         count1++;
     }
     cout<<"1 ="<<count1<<"coin"<<endl;
     return 0;


 }