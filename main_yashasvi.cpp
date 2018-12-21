//Name:Yashasvi kahatavkar
//HW-9

#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include"twoday.h"  //including the package,overnight and two day header files.
#include"overnight.h"
#include"package_yashasvi.h"


using namespace std;


int main()
{
	vector<package*>pntr(3);  //vector pointer of base class

	pntr[0] = new package("Yashasvi khatavkar", "255 somerset streer", "new bruswick", "New Jersey", "08901", "Pooja yadav", "10 commercial ave", "New Brunswick", "New Jersey", "08901", 10, 0.5);

	pntr[2] = new overnight("Yashasvi khatavkar", "255 somerset streer", "new bruswick", "New Jersey", "08901", "John Paulo", "2 Davidson Road", "Piscataway Township", "New Jersey", "08854", 10, 0.5, 5);

	pntr[1] = new twoday("Yashasvi khatavkar", "255 somerset streer", "new bruswick", "New Jersey", "08901", "Angelina Smith", "3 Davidson Road", "Piscataway Township", "New Jersey", "08854", 10, 0.5, 2);

	double totalcost = 0;  //to store all package costs

	cout << fixed << setprecision(2);

	cout << "Package delivery services program" << endl;
	cout << "Cost per ounce for a package : $.50 / ounce" << endl;
	cout << "Additional cost for two - day delivery : $2.00 / ounce" << endl;
	cout << "Additional cost for overnight delivery : $5.00 / ounce" << endl;



	for (int i = 0; i < pntr.size(); i++)   //Loop to print appropriate results according to the packages
	{
		double result;
		cout << "Package " << i + 1 << "\n\nSender:\n" << pntr[i]->get_sname() << '\n' << pntr[i]->get_sadd() << '\n' << pntr[i]->get_scity() << ", " << pntr[i]->get_sstate() << ' ' << pntr[i]->get_szip();
		cout << "\n\n Reciever:\n" << pntr[i]->get_rname() << '\n' << pntr[i]->get_radd() << '\n' << pntr[i]->get_rcity() << ", " << pntr[i]->get_rstate() << ' ' << pntr[i]->get_rzip() << endl;

		cout << "\nWeight of Package : " << pntr[i]->getweight() << " Ounces" << endl;

		
		if (i == 0)  //Regular delivery
		{
			cout << "Type of delivery:Regular" << endl;
			result = pntr[i]->calcost();
		}
		else if (i == 1)  //two day delivery
		{
			cout << "Type of delivery: two day" << endl;
			result = pntr[i]->calcost();
		}
		else   //overnight delivery
		{
			cout << "Type of delivery: Overnight" << endl;
			result = pntr[i]->calcost();
		}
		cout << "Cost of package : $ " << result << endl;
		totalcost = totalcost + result;   //calculating the total cost.
	}
	cout << "Total shipping cost: $" << totalcost;
	return 0;
}