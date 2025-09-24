// This code will have the drink consumption of surveyed customers. 
// It will also calculate the number of customers purchasing one or more energy drinks per week and the number of customers purchasing citrus flavored energy drinks.
//

#include <iostream>
using namespace std; 
int main()
{
	double drinkConsumptionSurveyedCustomers = 16500;

	double surveyedCustomersPurchaseMultipleDrinks = 15;

	double customersPurchasedCitrusFlavoredDrinks = 58;

	cout << "Total number of customers surveyed: " << drinkConsumptionSurveyedCustomers << endl;

	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; 

	cout << " Approximate number of customers purchasing one or more energy drinks per week: ";

	cout << drinkConsumptionSurveyedCustomers * surveyedCustomersPurchaseMultipleDrinks / 100 << " out of 16500 surveyors" << endl;

	cout << " Approximate number of customers purchasing citrus flavored energy drinks: ";

	cout << drinkConsumptionSurveyedCustomers * customersPurchasedCitrusFlavoredDrinks / 100 << " out of 16500 surveyors" << endl;

	return 0;
}