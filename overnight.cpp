#include<iostream>
#include "overnight.h"

using namespace std;

overnight::overnight(string sn, string sa, string sc, string ss, string sz, string rn, string ra, string rc, string rs, string rz, double w, double ct, double f) :package(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, w, ct)
{
	setfee(f);
}
void overnight::setfee(double f)

{
	flat_fee_over = f > 0 ? f : 0.0;  //validating the fees
}
double overnight::getfee()
{
	return flat_fee_over;   //returning the fee
}
double overnight::calcost()
{
	double cost;
	cost = getweight() * (getcost() + flat_fee_over);  //cost formula
	return cost;
}
