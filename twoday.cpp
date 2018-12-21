#include<iostream>
#include"twoday.h"

using namespace std;

twoday::twoday(string sn, string sa, string sc, string ss, string sz, string rn, string ra, string rc, string rs, string rz, double w, double ct,double f):package( sn, sa, sc,  ss,sz,rn,ra,rc,rs,rz, w,  ct)
{
	setfee(f);
}
void twoday::setfee(double f)
{
	flat_fee = f > 0 ? f : 0.0;  //validating the fee
}
double twoday::getfee()
{
	return flat_fee; 
}
double twoday::calcost()
{
	double cost;
	cost = getweight() * (getcost()+flat_fee);  //formula to calculate cost
	return cost;
}
