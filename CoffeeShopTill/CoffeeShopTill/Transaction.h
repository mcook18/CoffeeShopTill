#include <iostream>
#include <string>
#include "order.cpp"
using namespace std;

class transaction{
protected:
	order _order;
	int tipPer;//this is the tip percentage
	bool ifTax;// this tells the program to include tax or not
	string date; 
public:
	double totalpt(order Order);// this is the total before tax
	double total(double totalpt, double tax);// final total 
	double tip(double total, int tipPer);
	double tax(bool iftax, double totalpt);
	int gettipPer();
	string getdate();
	bool getifTax();
	order get_order();
	transaction(order _Order, int _tipPer, bool _iftax, string _date);
		
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