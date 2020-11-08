#include <iostream>
#include "Motorbike.h"

using namespace std;

Motorbike::Motorbike(string bikeMake, string bikeModel, int bikeEngineSize, string bikeColour, bool isRacePackage, double dealershipDistance, int bikePrice)
{
	make = bikeMake;
	model = bikeModel;
	engineSize = bikeEngineSize;
	colour = bikeColour;
	racePackage = isRacePackage;
	nearestDealership = dealershipDistance;
	price = bikePrice;
}

void Motorbike::MotorbikeSearch() // Prints out the details of a Motorbike object
{
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Engine Size: " << engineSize << "cc" << endl;
	cout << "Colour: " << colour << endl;
	cout << "Race Package: ";
	if (racePackage == true) {
		cout << "Yes." << endl;
	}
	else {
		cout << "No." << endl;
	};
	cout << "Distance to dealership: " << nearestDealership << " miles." << endl;
	cout << "Price: " << price << " pounds." << endl;
}

int Motorbike::GetPrice() //Returns the price attribute of a Motorbike object
{
	return price;
}

int Motorbike::GetEngineSize() //Returns the engine size attribute of a Motorbike object
{
	return engineSize;
}

bool Motorbike::GetRacePackage() //Returns the race package attribute of a Motorbike object
{
	return racePackage;
}

double Motorbike::GetNearestDealership() //Returns the nearest dealership attribute of a Motorbike object
{
	return nearestDealership;
}

string Motorbike::GetMake() //Returns the make attribute of a Motorbike object
{
	return make;
}

string Motorbike::GetModel() //Returns the model attribute of a Motorbike object
{
	return model;
}

string Motorbike::GetColour() //Returns the colour attribute of a Motorbike object
{
	return colour;
}