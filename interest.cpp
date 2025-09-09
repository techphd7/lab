#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double p,a,ci,r,t;
	
	cout<<"enter principal amount = ";
	cin>>p;
	
	cout<<"enter rate of interest (%) = ";
	cin>>r;
	
	cout<<"enter time in years = ";
	cin>>t;
	
	a=p * pow((1+r/100),t);
	
	ci=a-p;
	
	cout<<"compound interest = " <<ci<<endl;
	
	cout<<"total amount = " <<a;
}
