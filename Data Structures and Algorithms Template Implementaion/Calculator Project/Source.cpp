// Calculator Using Function & Function Inline

#include <iostream>
#include <cmath>
using namespace std;

// Functions Prototypes
void enterData ();

inline double Add(double ,double )	 ;

inline double Subtract (double , double ) ;

inline double Multiply (double , double ) ;

inline double Divide (double , double )	;

inline  int Modulus (int  , int  );

inline double power (double , double );

void operation (double , char, double);


int main ()
{		
	  
	   	char yn;

	while (true )
	{  	
		enterData();

		cout<<" If u want to  repete the Operation again Choose Y else Choose N ( y / n) : ";

		cin>>yn;

		if (yn == 'y' || yn=='Y')
		{
			cout<<endl;
			enterData();		 // to go to Start Point .
		}
		else 
			return 0;

	}
}

void enterData ()
{
	double num1 , num2;
	char op;

	cout<<" Please Enter Two Valid Number and Valid Operation : " ;

		cin>> num1 >> op >> num2;
		
		if(cin.fail())
		{
			cout<<"\a You should Enter Valid Numbers "<<endl;
			cin.clear();
			cin.ignore(10000,'\n');
			enterData();
		}
		else 
			operation(num1 , op , num2);



}
void operation ( double num1 , char op , double num2 )
{

	switch (op)
				   {

				   case '+':
						 cout<<"The Addition OF the Two Number is :"<<   Add(num1,num2)<<endl;
						 cout<<endl;
						 break;
					 
				   case '-':
					 	 cout<<"The Subtract OF the Two Number is :"<< Subtract(num1,num2) <<endl;
						 cout<<endl;
					     break; 
				   
				   case '*':
					 	 cout<<"The Multiply OF the Two Number is :"<< Multiply(num1,num2)<<endl;
						 cout<<endl;
					     break;

				   case '/':
					 	 cout<<"The  Divide OF the Two Number is :"<<   Divide(num1,num2)<<endl;
						 cout<<endl;
					     break;

				   case '%':
						 cout<<"The  Modulus OF the Two Number is :"<< Modulus(num1,num2)<<endl;
						 cout<<endl;
						 break;

				   case '^':
						 cout<<"The  Power OF the Two Number is :"<< power(num1,num2)<<endl;
						 cout<<endl;
						 break;
					
				   default:
					    cout<<"\a Please Enter Valid Arthimetic Operator "<<endl;
					    cout<<endl;

					    enterData();  // to repet the all Opertations

					   break;
				   }

}

inline double Add( double num1,double num2)
{
	return num1+num2;
}

inline  double Subtract(double num1 ,double num2)	 
{
	return 	num1 - num2;
}

inline  double Multiply(double num1 ,double num2 )	 
{
	return num1 * num2;
}

 inline  double Divide (double num1 ,double num2 )	
{
	if (num2 ==0) // Check the number if one of them = 0 .
	{
		cout<<"Error Please Enter Numbers Not equal Zeros \n";
		main ( );
	}
	else 
		return num1 / num2;

 }
	
 inline  int Modulus(int num1 ,int  num2)	
	{
		return num1	 % num2;
	}	
 inline double power(double num1,double num2)
 {
	 return pow(num1,num2);
 }

