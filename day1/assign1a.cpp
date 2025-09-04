#include<iostream>
using namespace std;

 int main()
 {
     int num ,i;
     bool prime=true;
     cout <<"enter the number:";
    cin>>num;
    //0 and 1 are not prime number
    if(num==0||num==1){
        prime=false;
    }else{
        for(i=2;i<num;i++)
        {
            if(num%i==0){
                prime=false;
                break;
            }

        }
    }

    
    
    if(prime){
    cout<<"this number is prime"<<endl;
    }
    else{
    cout<<"this number is not prime"<<endl;
    }
    return 0;
 }