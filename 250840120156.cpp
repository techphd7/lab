#include<iostream>
using namespace std;

class Array{
	
	private:
	       int arr[5];
	
	public:
		void input(){
			
			cout<<"enter 5 elements:";
			for(int i=0;i<5;i++)
			{
				cin>>arr[i];
			}
		}
	void display()
	{
		for(int i=0;i<5;i++)
		{
			cout<<arr[i]<<" ";
			
		}
		cout<<endl;
	}
	
	//display array at index position
	 int operator[] (int index)
	 {
	 
	 	if (index<0 || index>=5)
	 	{
	 		cout<<"Array out of range:"<<endl;
	 		return -1;
		 }
		 return arr[index];
	 }
	 
	 //transpose
	 Array operator~()
	 {
	 	Array Temp;
	 	for(int i=0;i<5;i++)
	 	{
	 		Temp.arr[i]=arr[4-i];
		 }
	 	return Temp;
	 }
	
	
	//here using friend function
	friend Array operator+(Array &a, Array &b);
	friend Array operator-(Array &a, Array &b); 
	
	
};
     //operator overloading
	 Array operator+(Array &a, Array &b){
	 	Array temp;
	 	for(int i=0;i<5;i++)
	 	{
	 		
	 		temp.arr[i]=a.arr[i]+b.arr[i];
		 }
	 	return temp;
	 	
	 }
	 
	 Array operator-(Array &a, Array &b){
	 	Array temp;
	 	for(int i=0;i<5;i++)
	 	{
	 		
	 		temp.arr[i]=a.arr[i]-b.arr[i];
		 }
	 	return temp;
	 	
	 }
	 

int main()
{
	Array A1,A2,A3,A4,T;
	 cout<<"enter element of first array:";
	A1.input();	
	
	cout<<"enter element of second array:";
	A2.input();	
	
	A3=A1+A2;
	A4=A1-A2;
	
	cout<<"First Array:";
	A1.display();
	
	cout<<"Second Array:";
	A2.display();
	
	cout<<"Result of Array After Addition :";
	 A3.display();
	 
	 cout<<"Result of Array After Substraction :";
	 A4.display();
	 
	 cout<<"Element at index 2 in First Array:"<<A1[2]<<endl;
	 
	 T = ~A2;
	 cout<<"Transpose Of Second Array:";
	 T.display();
	 
	 
	 return 0;
}
