 // How To program 8th Edition 
// Number page of problem : 291 , question number : 6.22
// Rectange of Asterisks 		 using recursion
#include <iostream>
using namespace std;
void Rectange (int  side1 ,int side2) ;

int main()
{
		int   side1 , side2 =0 ;

		cin >>side1>>side2;

		  Rectange ( side1 , side2)	 ;

	return 0;
}
void Rectange (int  side1 ,int side2)
{
	if (side1 == 0 )
		return ;
	else 
		for(int j =1;j<=side2 ; j++)
			cout<<"*";

		cout<<endl;

		return Rectange( side1-1 , side2);
	

}
