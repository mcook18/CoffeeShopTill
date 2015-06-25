#include "Transaction.h"

double transaction::totalpt(order Order){
	double total;
	for (int i = 0; i < Order.size() - 1; i++){
		total += Order[i].getcost()
	}
	return total;
}
double transaction::total(double totalpt, double tax) {
	double _total = totalpt + tax;
	return _total;
}
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

int transaction::gettipPer(){ return tipPer; }
string transaction::getdate(){ return date; }
bool transaction::getifTax(){ return ifTax; }
order transaction::get_order(){ return _order; }

transaction::transaction(order _Order,  int _tipPer, bool _iftax, string _date){
	
	_order = _Order;
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