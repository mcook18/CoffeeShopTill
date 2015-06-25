#include "order.h"

order::order(item thing){
	_order.push_back(thing);
}
vector <item> get_order(){ return _order; }
vector<item>order::additem(item thing){

	_order.push_back(thing);
	return _order;

}

item::item(double _cost, string _name){
	cost = _cost;
	name = _name;
}
string item::getname(){
	return name;
}
double item::getcost(){
	return cost;
}