#include <iostream>
#include<conio.h>
#include<ctime>
#include<string.h>
#include<cstring>
using namespace std;

string name[] = {};
string classes[] = {};
string module[4] = {"MD4005", "MD4003", "MD4007", "MD4004"};
string lecturers[7] = {"Prof John Smith", "Prof Emma Barkley", "Prof Harry Porter", "Prof Tom Hardy", "Prof Daniel Ezra", "Prof Emma Stone", "Prof Zendaya Winterfield"};
string room[7] = {"Room 12", "Room 03", "Room 14", "Room 11", "Room 16", "Room 09", "Room 17"};
string day[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
string Time[7] = { "10", "11", "12", "1", "2", "3", "4"};

string n = name[10];
string c = classes[19];
int moduleno;
void timeT(){
	cout <<"Enter Student Name: "<< endl <<"->";
	cin >> n;
	cout <<endl<<"Enter Class: "<< endl <<"->";
	cin >> c;
	cout <<endl<<"Select Module: "<< endl;
	cout << "1. " + module[0] <<endl;
	cout << "2. " + module[1] <<endl;
	cout << "3. " + module[2] <<endl;
	cout << "4. " + module[3] <<endl <<"->";
	cin >> moduleno;
	
	switch(moduleno){
		case 1: 
		cout <<endl<<"Lecturers and Rooms for " + module[0] + " " + c <<endl;
		cout << "1. " + module[0] + " - " + lecturers[0] + " - " + room[0]<< endl;
		cout <<endl<< "2. " + module[0] + " - " + lecturers[1] + " - " + room[1]<< endl <<"->";
		int lec;
		cin >> lec;
		switch(lec){
			case 1: 
			cout <<endl<<"Days for " + module[0] + " " + c <<endl;
			cout <<"-> " + day[0] + " & " + day[3] <<endl;
			cout <<endl<<"Select Suitable Time: "<< endl;
			cout << "1. " + Time[0] + " - " + Time[1]<<endl;
			cout << "1. " + Time[3] + " - " + Time[4]<<endl <<"->";
			int lecTime;
			cin >>lecTime;
			switch(lecTime){
			case 1: 
			//is this where we put the for loop??
			cout <<endl<<module[0]+ "  " + c + "  " + lecturers[0] + "  " + room[0] + "  " + day[0] + "&" + day[3] + "  " + Time[0] + "-" + Time[1] <<endl;
			break;
		}
		break;
		}
		break;
	}
}

int main(int argc, char** argv) {
	timeT();
	return 0;
}
