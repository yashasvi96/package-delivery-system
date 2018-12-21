#ifndef PACKAGE_YASHASVI_H
#define PACKAGE_YASHASVI_H
#include<string.h>
using namespace std;

class package
{
public:
    package(string, string, string, string,string, string, string, string, string, string, double, double); //constructor
	
	string get_sname();  //function to get sender's name
	
	string get_sadd();    //function to get sender's address
	
	string get_scity();   //function to get sender's city
	
	string get_sstate();   //function to get sender's state
	
	string get_szip();    //function to get sender's zip


	
	string get_rname();   //function to get reciver's name
	
	string get_radd();   //function to get reciver's address
	
	string get_rcity();   //function to get reciver's city
	
	string get_rstate();   //function to get reciver's state
	
	string get_rzip();    //function to get reciver's zip

	

	
	double getweight();    //function to get weight of package
	void setcost(double);   //function to set cost
	double getcost();    //function to get cost
	 virtual double calcost();  //virtual function to calculate cost
private:
	string s_name;  //variable for senders name
	string s_add;   //variable for senders address
	string s_city;  //variable for senders city
	string s_state;  //variable for senders state
	string s_zip;    //variable for senders zip


	string r_name;   //variable for recievers name
	string r_add;    //variable for recievers address
	string r_city;   //variable for recievers city
	string r_state;   //variable for recievers state
	string r_zip;     //variable for recievers zip


	double weight;  //variable to store weight
	double cost;   //variable to store cost

};
#endif;
