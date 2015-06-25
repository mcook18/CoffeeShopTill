#include "Transction.cpp"
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
}

void readmenu(){
	ifstream fin("menu.txt");
	while ()

}
void writeToNewDay(){}
void writeToOldDay(){}
