// How To program 8th Edition 
// Number page of problem : 223 , question number : 5.14 
// Calculating Total Sales 

#include <iostream>
using namespace std;
int main()
{
int num;
double sumItem=1, quantity=0, sumAllItems=0;

do
 {
	cin>>num;
	switch (num)

	{
		case 1:

			sumItem=1;
			cout << " Enter the quantity of Product number 1 : ";
			cin>>quantity;
			sumItem = 2.98 * quantity;
			sumAllItems += sumItem;
			break;

		case 2:

			sumItem = 1;
			cout << " Enter the quantity of Product number 2 : ";
			cin >> quantity ;
			sumItem = 4.50 * quantity ;
			sumAllItems += sumItem;
			break;

		case 3:

			sumItem=1;
			cout << " Enter the quantity of Product number 3 : ";
			cin>> quantity ;
			sumItem = 9.98 * quantity;
			sumAllItems += sumItem;
			break;

	case 4:

			sumItem=1;
			cout << " Enter the quantity of Product number 4 : ";
			cin>> quantity ;
			sumItem =4.49 * quantity ;
			sumAllItems += sumItem;
			break;

	case 5:

			sumItem=1;
			cout << " Enter the quantity of Product number 5 : ";
			cin>> quantity ;
			sumItem = quantity * 6.87;
			sumAllItems += sumItem;
			break;

	default:
		break;
}
	} while (num>=1 && num <=5);

	cout<<"Sum of All Items : "<<sumAllItems<<endl;

	return 0;
}
