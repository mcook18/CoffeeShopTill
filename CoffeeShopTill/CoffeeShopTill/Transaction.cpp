#include "Transaction.h"

double transaction::totalpt(){
	
}
double transaction::total() {}
double transaction::tip(double totalpt, int tipPer){
	double tip;
	tip = totalpt / tipPer;
	return tip;
}
double transaction::tax(bool iftax, double totalpt){
	double tax=0;
	if (iftax){
		tax = totalpt*.089;
	}
	return tax;
}
double transaction::getcost(){ return cost; }
string transaction::getitem(){ return item; }
int transaction::gettipPer(){ return tipPer; }
string transaction::getdate(){ return date; }
bool transaction::getifTax(){ return ifTax; }
transaction::transaction(){
	cost = 0;
	item = "";
	tipPer = 0;
	ifTax = true;
	date = "";
}
transaction::transaction(double _cost, string _item, int _tipPer, bool _iftax, string _date){
	cost = _cost;
	item = _item;
	tipPer = _tipPer;
	ifTax = _iftax;
	date = _date;
}
double cash::change(double total, double AmountGiven){
	double change;
	change = AmountGiven - total;
	return change;
}
void debit::GetPIN(){
	cout << "Ask customer to input their PIN. " << endl;
}
void credit::Getsignature(){
	cout << "Ask customer to sign receipt. " << endl;

}