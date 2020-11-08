#include <iostream>
#include "Motorbike.h"
#include <vector>

using namespace std;

void AllMotorbikes(vector<Motorbike> bikes) // Loops through the Motorbike vector and calls the MotorbikeSearch() function on each element, printing it's contents.
{
	cout << "All motorbikes currently available. " << endl;
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
	for (unsigned int i = 0; i < bikes.size(); i++) {
		cout << " " << endl;
		bikes[i].MotorbikeSearch();
		cout << " " << endl;
		cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
	}
}

void CheapestMotorbike(vector<Motorbike> bikes) //Loops through a vector of the type Motorbike, finding the element containing the lowest value of price
{
	Motorbike cheapest = bikes.front();
	int minimum = 0;
	int price;
	cout << "The cheapest motorbikes we have " << endl;
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
	for (unsigned int i = 0; i < bikes.size(); i++)
	{
		price = bikes[i].GetPrice();
		if ((minimum == 0) || (minimum > price))
		{
			minimum = price;
			cheapest = bikes[i];
		}
	}
	cheapest.MotorbikeSearch();
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
}

void MostExpensiveMotorbike(vector<Motorbike> bikes) //Loops through a vector of the type Motorbike, finding the element containing the highest value of price
{
	Motorbike mostExpensive = bikes.front();
	int maximum = 0;
	int price;
	cout << "The most expensive motorbikes we have " << endl;
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
	for (unsigned int i = 0; i < bikes.size(); i++)
	{
		price = bikes[i].GetPrice();
		if (maximum < price)
		{
			maximum = price;
			mostExpensive = bikes[i];
		}
	}
	mostExpensive.MotorbikeSearch();
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
}

void SearchMake(vector<Motorbike> bikes) // Takes a user input and loops through the vector, searching for a matching 'Make' attribute values, then prints it/them to console
{
	string search;
	string match;
	bool matchFound = false;
	Motorbike foundMake = bikes.front();
	cout << "Search Motorbike by Make." << endl;
	cout << " " << endl;
	cout << "Please type the make and press ENTER: " << endl;
	cout << " " << endl;
	cin >> search;
	cout << "This is what we found " << endl;
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
	for (unsigned int i = 0; i < bikes.size(); i++)
	{
		match = bikes[i].GetMake();
		if (match == search)
		{
			matchFound = true;
			foundMake = bikes[i];
			cout << " " << endl;
			foundMake.MotorbikeSearch();
			cout << " " << endl;
			cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
		}
	}
	if (!matchFound)
	{
		cout << " " << endl;
		cout << "Sorry we couldn't find any results matching your criteria. Please try again." << endl;
	}
}

void SearchModel(vector<Motorbike> bikes) // Takes a user input and loops through the vector, searching for a matching 'Model' attribute values, then prints it/them to console
{
	string search;
	string match;
	bool matchFound = false;
	Motorbike foundModel = bikes.front();
	cout << "Search Motorbike by Model." << endl;
	cout << " " << endl;
	cout << "Please type the model and press ENTER " << endl;
	cin >> search;
	cout << "Search result: " << endl;
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
	for (unsigned int i = 0; i < bikes.size(); i++)
	{
		match = bikes[i].GetModel();
		if (match == search)
		{
			matchFound = true;
			foundModel = bikes[i];
			cout << " " << endl;
			foundModel.MotorbikeSearch();
			cout << " " << endl;
			cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
		}
	}
	if (!matchFound)
	{
		cout << " " << endl;
		cout << "Sorry we couldn't find any results matching your criteria. Please try again." << endl;
	}
}

void SearchColour(vector<Motorbike> bikes) // Takes a user input and loops through the vector, searching for a matching 'Colour' attribute values, then prints it/them to console
{
	string search;
	string match;
	bool matchFound = false;
	Motorbike foundColour = bikes.front();
	cout << "Search Motorbike by Colour." << endl;
	cout << " " << endl;
	cout << "Please enter the colour and press ENTER " << endl;
	cin >> search;
	cout << "Search result: " << endl;
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
	for (unsigned int i = 0; i < bikes.size(); i++)
	{
		match = bikes[i].GetColour();
		if (match == search)
		{
			matchFound = true;
			foundColour = bikes[i];			
			cout << " " << endl;
			foundColour.MotorbikeSearch();
			cout << " " << endl;
			cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
		}
	}
	if (!matchFound)
	{
		cout << " " << endl;
		cout << "Sorry we couldn't find any results matching your criteria. Please try again." << endl;
	}
}

void SmallestEngine(vector<Motorbike> bikes) // Takes a vector of the type 'Motorbike'and loops through it looking for the smallest value of the 'Engine Size' attribute
{
	Motorbike smallestEngine = bikes.front();
	int minimum = 0;
	int engineSize;
	cout << "The smallest engine size motorbike we have is: " << endl;
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
	for (unsigned int i = 0; i < bikes.size(); i++)
	{
		engineSize = bikes[i].GetEngineSize();
		if ((minimum == 0) || (minimum > engineSize))
		{
			minimum = engineSize;
			smallestEngine = bikes[i];
		}
	}
	smallestEngine.MotorbikeSearch();
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
}

void BiggestEngine(vector<Motorbike> bikes) // Takes a vector of the type 'Motorbike'and loops through it looking for the highest value of the 'Engine Size' attribute
{
	Motorbike biggestEngine = bikes.front();
	int maximum = 0;
	int engineSize;
	cout << "The biggest engine size motorbike we have is: " << endl;
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
	for (unsigned int i = 0; i < bikes.size(); i++)
	{
		engineSize = bikes[i].GetEngineSize();
		if (maximum < engineSize)
		{
			maximum = engineSize;
			biggestEngine = bikes[i];
		}
	}
	biggestEngine.MotorbikeSearch();
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
}

void WithoutRacePackage(vector<Motorbike> bikes) // Takes a vector of the type 'Motorbike'and loops through it looking for the values of the 'Race Package' attribute, which are FALSE
{
	Motorbike racePackage = bikes.front();
	cout << "The Motorbikes WITHOUT race package we have are: " << endl;
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
	for (unsigned int i = 0; i < bikes.size(); i++)
	{

		if (bikes[i].GetRacePackage() == false)
		{
			racePackage = bikes[i];
			cout << " " << endl;
			racePackage.MotorbikeSearch();
			cout << " " << endl;
			cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
		}
	}
}

void WithRacePackage(vector<Motorbike> bikes) // Takes a vector of the type 'Motorbike'and loops through it looking for the values of the 'Race Package' attribute, which are TRUE
{
	Motorbike racePackage = bikes.front();
	cout << "The Motorbikes WITH race package we have are: " << endl;
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
	for (unsigned int i = 0; i < bikes.size(); i++)
	{
		
		if (bikes[i].GetRacePackage() == true)
		{
			racePackage = bikes[i];
			cout << " " << endl;
			racePackage.MotorbikeSearch();
			cout << " " << endl;
			cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
		}
	}	
}

void NearestDealership(vector<Motorbike> bikes) // Takes a vector of the type 'Motorbike', loops through it looking for the lowest value of the attribute 'Nearest Dealership'
{
	Motorbike nearestBike = bikes.front();
	double minimum = 0;
	double nearest;
	cout << "The nearest dealership has the following bikes: " << endl;
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
	for (unsigned int i = 0; i < bikes.size(); i++)
	{
		nearest = bikes[i].GetNearestDealership();
		if ((minimum == 0) || (minimum >= nearest))
		{
			minimum = nearest;
			nearestBike = bikes[i];
		}
	}
	nearestBike.MotorbikeSearch();
	cout << " " << endl;
	cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;
}

void CreateBikeWithRacePackage(vector<Motorbike> bikes) // Takes user input and constructs a Motorbike Object, which then is added to the vector using the push_back() vector function
{
	string make;
	string model;
	int engineSize;
	string colour;
	double nearestDealership;
	int price;

	cout << "Enter bike Make: " << endl;
	cin >> make;
	cout << "Enter bike Model: " << endl;
	cin >> model;
	cout << "Enter engine size: " << endl;
	cin >> engineSize;
	cout << "Enter bike colour: " << endl;
	cin >> colour;
	cout << "Enter the distance to the dealership in miles: " << endl;
	cin >> nearestDealership;
	cout << "Enter the bike's Price: " << endl;
	cin >> price;

	Motorbike add(make, model, engineSize, colour, true, nearestDealership, price);
	bikes.push_back(add);
}

//void RemoveBike(vector<Motorbike> bikes) // TODO: Remove the Motorbike element in the vector from the specified position
//{
//	int position;
//	cout << "Please enter the position in list of the bike you would like to remove and press ENTER. " << endl;
//		cin >> position;
//	bikes.erase(position);
//}


void MenuPrompt() // Prompts the user to enter 'M' if they want to exit the current sub-menu
{
	char choice;
	do
	{
		cout << " " << endl;
		cout << "Enter M to exit." << endl;
		cin >> choice;
	}
	while ((choice != 'M')&&(choice != 'm'));
}

int GetMenuInput() // Gets the user menu input
{
	int menuInput;
	cin >> menuInput;
	return menuInput;
}

void ShowMainMenu() // Displays the Main menu
{
	cout << "\n\t\t____________________________" << endl;
	cout << "\n\t\t| Martin's Motorbike Shop  |" << endl;
	cout << "\n\t\t|      ~ MAIN MENU ~       |" << endl;
	cout << "\n\t\t|__________________________|" << endl;
	cout << " " << endl;
	cout << "1. Show all motorbikes for sale" << endl;
	cout << "2. Show cheapest" << endl;
	cout << "3. Show most expensive" << endl;
	cout << "4. Search by make" << endl;
	cout << "5. Search by model" << endl;
	cout << "6. Search by colour" << endl;
	cout << "7. Show smallest engine size" << endl;
	cout << "8. Show biggest engine size" << endl;
	cout << "9. Show with race package" << endl;
	cout << "10. Show without race package" << endl;
	cout << "11. Show bikes in nearest dealership" << endl;
	cout << "12. ADD Motorbike with Race Package" << endl;
	cout << "13. Exit" << endl;
	cout << " " << endl;
	cout << "Please type your option and press ENTER: " << endl;
	cout << " " << endl;
}

int main()
{
	// Data setup. 10 Motorbike objects created below
	Motorbike bike1("Honda", "CBR", 600, "Red", true, 15, 9000);
	Motorbike bike2("Suzuki", "GSX-R", 650, "Yellow", false, 12, 8000);
	Motorbike bike3("Kawasaki", "Ninja", 1100, "Green", true, 30, 12000);
	Motorbike bike4("Ducati", "Panigale", 999, "Black", true, 8, 18000);
	Motorbike bike5("Yamaha", "R1", 1000, "Blue", false , 3, 9500);
	Motorbike bike6("Honda", "CBR", 750, "Red", true, 15, 12500);
	Motorbike bike7("Honda", "CBR", 650, "Red", true, 0.3, 12500);
	Motorbike bike8("Suzuki", "DRZ", 400, "Yellow", false, 5, 6500);
	Motorbike bike9("Yamaha", "R6", 600, "White", false, 5, 7500);
	Motorbike bike10("Aprilia", "RSX", 1200, "Red", true, 8, 11500);

	// Vector of the type Motorbike created and 10 elements added to it using the push_back() vector function
	vector<Motorbike> motorbikesVector;
	motorbikesVector.push_back(bike1);
	motorbikesVector.push_back(bike2);
	motorbikesVector.push_back(bike3);
	motorbikesVector.push_back(bike4);
	motorbikesVector.push_back(bike5);
	motorbikesVector.push_back(bike6);
	motorbikesVector.push_back(bike7);
	motorbikesVector.push_back(bike8);
	motorbikesVector.push_back(bike9);
	motorbikesVector.push_back(bike10);

	int menuInput = 0;

	// Menu control logic using a switch statement
	do
	{
	ShowMainMenu();
	menuInput = GetMenuInput();

		switch (menuInput)
		{
		case 1:
			AllMotorbikes(motorbikesVector);
			MenuPrompt();
			break;
		case 2:
			CheapestMotorbike(motorbikesVector);
			MenuPrompt();
			break;
		case 3:
			MostExpensiveMotorbike(motorbikesVector);
			MenuPrompt();
			break;
		case 4:
			SearchMake(motorbikesVector);
			MenuPrompt();
			break;
		case 5:
			SearchModel(motorbikesVector);
			MenuPrompt();
			break;
		case 6:
			SearchColour(motorbikesVector);
			MenuPrompt();
			break;
		case 7:
			SmallestEngine(motorbikesVector);
			MenuPrompt();
			break;
		case 8:
			BiggestEngine(motorbikesVector);
			MenuPrompt();
			break;
		case 9:
			WithRacePackage(motorbikesVector);
			MenuPrompt();
			break;
		case 10:
			WithoutRacePackage(motorbikesVector);
			MenuPrompt();
			break;
		case 11:
			NearestDealership(motorbikesVector);
			MenuPrompt();
			break;
		case 12:
			CreateBikeWithRacePackage(motorbikesVector);
			MenuPrompt();
			break;
		case 13:
			break;
		default:
			cout << " " << endl;
			cout << "~|~|~ Unrecognised choice, please try again. ~|~|~" << endl;
		}
	} while (menuInput != 13);
	return 0; 
}