#ifndef TWODAY_H
#define TWODAY_H
#include"package_yashasvi.h"
#include<string.h>

class twoday :public package  //public inheritance from package
{

public:
	twoday(string, string, string, string, string, string, string, string, string, string, double, double,double); //twoday class constructor
	void setfee(double);  //function to set flat fee
	double getfee();  //funtion to get fee
	virtual double calcost();  //function to calculate the cost
	
private:
	double flat_fee;  //varaiable to store flat fee
};
#endif;
