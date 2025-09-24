// This code will contain the code for Distance Per Tank of Gas.
//

#include <iostream>
using namespace std; 
int main()
{
	double vehicleTankCapacity = 20.0; // in gallons  

	double distanceOfTankInTown = 23.5; // in miles  

	double distanceOfTankOnHighway = 28.9; // in miles  

	cout << "Distance per Tank of Gas shown below" << endl;

	cout << "~~~~~~~~~~" << endl;

	cout << "Distance in Town: " << vehicleTankCapacity * distanceOfTankInTown << " miles" << endl;

	cout << "Distance on Highway: " << vehicleTankCapacity * distanceOfTankOnHighway << " miles" << endl;

return 0;
}