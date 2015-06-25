#include <iostream>
#include <string>
#include <vector>
using namespace std;

class order{
protected:
	item _item;
	vector<item> _order;
public:
	item get_item();
	vector<item> additem(item thing);
	vector <item> get_order();
	order(item thing);
	order();

};
class item{
protected:
	double cost;
	string name;
public:
	string getname();
	double getcost();
	item(double _cost, string _name);
};