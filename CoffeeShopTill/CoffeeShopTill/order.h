#include <iostream>
#include <string>
#include <vector>
using namespace std;

class order{
protected:
	vector<item> _order;
public:
	vector<item> additem(item thing);
	vector <item> get_order();
	order(item thing);

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