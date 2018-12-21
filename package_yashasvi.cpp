#include<iostream>
#include"package_yashasvi.h"  //header file for package
#include<iostream>

using namespace std;

package::package(string sn, string sa, string sc, string ss, string sz, string rn, string ra, string rc, string rs,string rz, double w, double ct)  //constructor
{
	s_name = sn;
	s_add = sa;
	s_city = sc;
	s_state = ss;
	s_zip = sz;

	r_name = rn;
	r_add = ra;
	r_city = rc;
	r_state = rs;
	r_zip = rz;

	weight = w > 0 ? w : 0.0;
	cost = ct > 0 ? ct : 0.0;
}

double package::getweight()
{
	return weight;   //function to return weight
}
void package::setcost(double ct)  
{
	cost = ct;   //set cost function
}
double package::getcost()
{
	return cost;  //get the cost value
}

string package::get_sname()
{
	return s_name;
}

string package::get_rname()
{
	return r_name;
}

string package::get_sadd()
{
	return s_add;
}
string package::get_radd()
{
	return r_add;
}

string package::get_scity()
{
	return s_city;
}

string package::get_rcity()
{
	return r_city;
}

string package::get_sstate()
{
	return s_state;
}
string package::get_rstate()
{
	return r_state;
}
string package:: get_rzip()
{
	return r_zip;
}
string package::get_szip()
{
	return s_zip;
}
double package::calcost()
{
	return weight*cost;  //Cost formula
}

