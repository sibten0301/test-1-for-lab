#include <iostream>
using  namespace std;
int main()
{
	double salesperweek, commission;
	// reading gross sales for this week 
	cout << "Enter gross sales for this week: ";
	cin >> salesperweek;

	// checking salesperweek is zero 
	switch (salesperweek == 0) {

		//when salesperweek is zero
	case 1:
		commission = 250;
		break;

		//otherwise
	default:
		commission = 250 + salesperweek * 0.07;
		break;
	}

	 
	//printing commission 
	cout << "commission = " << commission << endl;

	//total earning 
	cout << "total earning of salesperson:" << salesperweek + commission;

	

	return 0;


}