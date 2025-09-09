#include<iostream>
using namespace std;
int main(){
	cout<<"size of int : "<<sizeof(int)<<"bytes"<<endl;
	cout<<"size of short int : "<<sizeof(short int)<<"bytes"<<endl;
	cout<<"size of long int :"<<sizeof(long int)<<"bytes"<<endl;
	cout<<"size of char :"<<sizeof(char)<<"bytes"<<endl;
	cout<<"size of float :"<<sizeof(float)<<"bytes"<<endl;
	cout<<"size of boolean :"<<sizeof(bool)<<"bytes"<<endl;
}
/*
int main()
{
	int num;
	bool isprime=true;


 cout<<"enter a number";
 cin>>num;
 
 if(num<=1)
 {
 	isprime=false;	
 }
 else{
 	
 	for(int i=2;i*i<num;i++)
 	{
 		if(num%i==0)
 		{
 			isprime=false;
 			break;
		 }
	 }
 }
 
 if(isprime)
 cout<<num<<"is a prime number"<<endl;
 else
 cout<<num<<"is not a prime nmber"<<endl;
 
 return 0;
}
*/
///////////////////////////////**************************************
/*
int main()
{
	int num;
	cout<<"enter a number";
	cin>>num;
	
	cout<<"the multiplication table of : = "<< num <<endl;
	for(int i=1;i<=10;i++){
		cout<<num <<"x" <<i<<"="<<num*i<<endl;
		
	}
	 return 0;
}*/
