#include <iostream>
#include <string>
using namespace std;

class transaction{
protected:
	double cost;
	string item;
	int tipPer;//this is the tip percentage
	bool ifTax;// this tells the program to include tax or not
	string date;
public:
	double totalpt();// this is the total before tax
	double total();// final total 
	double tip(double total, int tipPer);
	double tax(bool iftax, double totalpt);
	double getcost();
	string gettype();
	string getitem();
	int gettipPer();
	string getdate();
	bool getifTax();
	transaction();
	transaction(double _cost, string _item, int _tipPer, bool _iftax, string _date);
		
};
class cash :public transaction{
public:
	double change(double total, double AmountGiven);

};
class debit :public transaction{
public:
	void GetPIN();
};
class credit :public transaction{
public:
	void Getsignature();
};