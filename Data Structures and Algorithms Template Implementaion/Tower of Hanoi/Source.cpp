#include <iostream>
using namespace std;
void tower ( int , char , char , char);
int main()
{

	   int nDisks =0;
	   cin>>nDisks;
	   tower (nDisks , 'A' , 'C' , 'B'  );
	


	return 0;
}									  
void tower ( int nDisks , char A ,char B , char C)
{
	
		if (nDisks > 0)
			{
				tower (nDisks-1,A,C,B);
				cout<<nDisks<<"  Move from " << A <<"----->"<<B<<endl;
				tower (nDisks-1,C, B, A);
			}
		


}
					