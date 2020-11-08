#pragma once
#ifndef MOTORBIKE_H
#define MOTORBIKE_H

using namespace std;

class Motorbike
{
	//Public functions of class Motorbike
public:
	Motorbike(string make, string model, int engineSize, string colour, bool racePackage, double nearestDealership, int price);
	void MotorbikeSearch();
	int GetPrice();
	int GetEngineSize();
	bool GetRacePackage();
	double GetNearestDealership();
	string GetMake();
	string GetModel();
	string GetColour();

	//Private attributes of class Motorbike
private: 
	string make;
	string model;
	int engineSize;
	string colour;
	bool racePackage;
	double nearestDealership;
	int price;	
};

#endif