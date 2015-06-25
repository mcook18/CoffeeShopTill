//Sorry my code is such a mess and doesn't work. I honestly don't think I should be a computer science major anymore or at least do online classes anymore. 
//Also i am very dissappointed in myself for not making my code work correctly. 

#include "Transaction.cpp"
#include "order.cpp"
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

vector <item> readmenu();

void writeToNewDay();
void writeToOldDay();

int main(){
	char ans;
	
	string items;
	char endOrder;
	vector <item> menu = readmenu();
	double OTotal;
	double Cost;
	do{
		cout << "What is the order?" << endl;
		cin >> items;
		for (int i = 0; i < menu.size() - 1; i++){
			
			if (menu[i].getname() == items){
				Cost=menu[i].getcost();
				OTotal += Cost;

				break;
			}
			
		}
		cout << "Is that everything?(y or n)" << endl;
		cin >> endOrder;
	} while (endOrder != 'y'); 

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
	
}
vector <item> readmenu(){
	double _Cost;
	string _Name;
	vector <item> _Order;
	ifstream fin("menu.txt");
	while (fin >> _Cost >> _Name){
		item thing(_Cost, _Name);
		 _Order.push_back(thing);
	}
	return _Order;
}
void writeToNewDay(transaction money_in){
	ofstream fout;
	string date;
	cout << "What is today's date?" << endl;
	cin >> date;
	fout.open(date + ".txt");
	fout >> money_in;

}
void writeToOldDay(transaction money_in){
	ofstream fout;
	string date;
	cout << "What is today's date?" << endl;
	cin >> date;
	fout.open(date+".txt");
	fout >> money_in;


}
