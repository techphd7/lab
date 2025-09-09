#include<iostream>
using namespace std;

class Array{
	
	private:
	       int arr[5];
	
	public:
		//taking input
		void input(){
			
			cout<<"enter 5 elements:";
			for(int i=0;i<5;i++)
			{
				cin>>arr[i];
			}
		}
		
		//user directly take values using constructor
		/*
		Array()
		{
			for(int i=0;i<5;i++)
			
			arr[i]=0;
		}
		
	   Array(int a[5])
	   {
	   	for (int i=0;i<5;i++)
	   	{
		   
	   	arr[i]=a[i];
	   	
		   }	
	
	}
	/*****----------------------------********************/	
		
	void display()
	{
		for(int i=0;i<5;i++)
		{
			cout<<arr[i]<<" ";
			
		}
		cout<<endl;
	}
	
	//display array at index position
	 int operator[] (int index)const
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
	/* Direct value assign
	int data1[5]={1,2,3,4,5};
	int data2[5]={2,3,4,5,6};
	
	Array A1(data1);
	Array A2(data2);
	Array A3,A4,T;
	*/
	
	Array A1,A2,A3,A4,T;
	
	 cout<<"enter element of first array:";
	A1.input();	
	
	cout<<"enter element of second array:";
	A2.input();
		
	cout<<"First Array:";
	A1.display();
	
	cout<<"Second Array:";
	A2.display();
	
	A3=A1+A2;
	cout<<"Result of Array After Addition :";
	 A3.display();
	 
	 A4=A1-A2;
	 cout<<"Result of Array After Substraction :";
	 A4.display();
	 
	 cout<<"Element at index 2 in First Array:"<<A1[2]<<endl;
	 
	 T = ~A2;
	 cout<<"Transpose Of Second Array:";
	 T.display();
	 
	 
	 return 0;
}
