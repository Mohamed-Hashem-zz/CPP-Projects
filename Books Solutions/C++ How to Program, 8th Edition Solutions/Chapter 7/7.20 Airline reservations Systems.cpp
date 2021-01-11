// How To program 8th Edition 
// Number page of problem : 354 , question number : 7.20 
// airline reservations systems 

#include <iostream>
#include <iomanip>
#include <string >
using namespace std;
const int size = 10;
void classEconomy(int numOFSeat ,int arr[]);

void firstClass( int numOFSeat , int  arr[] );

void typeOFPlane (int arr[] )
{
		int type = 0 , numOFSeat = 0; 
	
		cout<<"Enter the Type of Plane u need ( First class or Economy class ) , choose ( 1 or 2 )	:  " ;
	
		cin>>type ;

	switch (type)
	{
	case 1: 

	cout<<" You have been reserved in the fist class \n";
			cout << " which seat you need to reserve is first class , you should choose between seats (1:5)  : ";
									cin>>numOFSeat;		
		firstClass(numOFSeat,arr);

				break;

	default:
	 	cout<<" You have been reserved in the \" Economy \" class \n";
			cout << " which seat you need to reserve is  \" Economy \"  class , you should choose between seats (6:10)  : ";
									cin>>numOFSeat;		
		classEconomy(numOFSeat,arr);
		break;
	}

}

void firstClass( int numOFSeat , int  arr[] )

{
	int counter  = 0;
							for (int i = 1; i <=numOFSeat; i++)

							{		 
								if (i == numOFSeat )
									{
										if ( arr[i] == true)
										{
											cout<<"Please sir , choose another seat  : "  ;

											cin>>numOFSeat;

											firstClass(numOFSeat , arr);
												
										}

										else if (counter == 5)
										{
											  int k =0;

										cout<<"Please sir the first class is completed , are u ready to reserve in the \"Economy \"	class Enter ( 1 to acceped or 2 to refuse ) : "	   ;
											
										cin>>k;
												switch (k)
													{
												case 1	:

															cout<<"Please sir , choose seat  : "  ;
																cin>>numOFSeat;
																classEconomy(numOFSeat,arr);

																break;
														default:
																cout<<"Next flight Leaves after 3 hours \n"	;
																exit(0);
																break;
													}
										}

										else if (arr[i] == false )
										{
											counter++;

											 arr[i] = true;

											char yn ;

											 cout<<" You have been Reserved Sir , Do u need any other Operation ( y / n )  :  ";
													cin>>yn;
													
													if( yn == 'y' || yn =='Y' )
														typeOFPlane(arr);

													else 
														break;
										}
										
									}
							}


}
void classEconomy(int numOFSeat ,int  arr[])
{
		int counter=0;


	for (int i =5;i<=numOFSeat;i++)
			  {
				  if(i == numOFSeat)
				  {
					  if (arr[i]==true)
					  {
						cout<<"Please sir , choose another seat  : "  ;
								cin>>numOFSeat;
										classEconomy(numOFSeat,arr);
					  }
					  
					  else if (counter == 5)
					  {
										  int k =0;
									
										  cout<<"Please sir the first class is completed , are u ready to reserve in the Fisr class Enter ( 1 to acceped or 2 to refuse ) : "	   ;
											
										  cin>>k;
												switch (k)
													{
														case 1:

															cout<<"Please sir , choose seat  : "  ;
																cin>>numOFSeat;
																firstClass(numOFSeat,arr);
																break;

														default:
																cout<<"Next flight Leaves after 3 hours \n"	;
																break;
													}
									
									}

							  else if (arr[i]==false )
							  {
								 
								  counter++;
											 arr[i] = true;

											char yn ;

											 cout<<" You have been Reserved Sir , Do u need any other Operation ( y / n )  :  ";
													cin>>yn;

													if( yn == 'y' || yn =='Y' )
														typeOFPlane(arr);

													else if ( yn == 'n' || yn == 'N') 
														break;

										 }


				  }


			  }


}


int main()
{
	int arr[size ] ={ } ;
	
	typeOFPlane(arr);

	return 0;
}