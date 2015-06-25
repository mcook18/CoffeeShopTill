#include "order.h"
order::order(){
	item thing( 0, "");
	_order.push_back(thing);
}
order::order(item thing){
	_order.push_back(thing);
}
vector <item> order::get_order(){ return _order; }
item order::get_item(){ return _item; }
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