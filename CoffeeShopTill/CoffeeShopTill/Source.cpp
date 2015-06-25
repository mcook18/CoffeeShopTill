#include "Transction.cpp"
#include "order.cpp"
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

void readmenu();

void writeToNewDay();
void writeToOldDay();

int main(){
	char ans;
	cout << "Is today a new day?(Y or N)" << endl;
	cin >> ans;
	if (tolower(ans) == 'y'){
		writeToNewDay();
	}
	else if (tolower(ans) == 'n'){
		writeToOldDay();
	}
	else {
		cout << "that was an invalid answer." << endl;
	}
	
	string items;
	char endOrder;
	vector <item> menu = readmenu();
	string 
	do{
		cout << "What is the order?" << endl;
		cin >> items;
		for (int i = 0; i < menu.size() - 1; i++){
			
			menu[i].getname()
		}
		cout << "Is that everything?(y or n)" << endl;
		cin >> endOrder;
	} while (endOrder == 'y'); 

}
vector <item> readmenu(){
	double _Cost;
	string _Name;
	vector <item> _Order;
	ifstream fin("menu.txt");
	while (fin >> _Cost >> _Name){
		item thing(_Cost, _Name);
		 _Order.pushback(thing);
	}
	return _Order;
}
void writeToNewDay(){}
void writeToOldDay(){}
