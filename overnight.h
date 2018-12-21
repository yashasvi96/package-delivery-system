#ifndef OVERNIGHT_H
#define OVERNIGHT_H 
#include "package_yashasvi.h"

class overnight :public package //inheriting from package class
{
public:
	overnight(string, string, string, string, string, string, string, string, string, string, double, double, double);  //constructor
	void setfee(double);   //function to set the fee
	double getfee();      //function to get the fee 
	virtual double calcost();  //virtual function to calculate cost

private:
	double flat_fee_over;  //private variable to store flat fees of overnight package.
};
#endif;
