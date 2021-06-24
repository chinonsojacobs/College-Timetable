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
		int timing;
		
		void mod4005();
		void mod4003();
		void mod4007();
		void mod4004();
		
		 void timeT(){
			cout <<"Enter Student Name: " << endl << "->";
			cin >> n;
			cout <<endl<<"Enter Class: "<< endl <<"->";
			cin >> c;
			
			cout <<endl<<"Available Modules for " + c +":" << endl;
			cout << endl << module[0];
			cout << "\t" + module[1] ;
			cout << "\t" + module[2] ;
			cout << "\t" + module[3] <<endl ;
			
			// --------------------------------------------------------------------------------------------------------------
			
			cout <<endl<<"Select suitable time for each Modules: "<< endl;
			
			cout <<endl << "Please enter 1 for " + day[0] +" " + Time[0] + " " + "-" + " " + Time[1] + " "+ " "+ module[0]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[0] +" " + Time[4] + " " + "-" + " " + Time[5] + " "+ " "+ module[0] << endl ;
			cin >> timing;
			
			  mod4005();
			
		}
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		 void mod4005(){
		
		
			
			if(timing == 1){
				
			cout <<endl << "Please enter 1 for " + day[3] +" " + Time[1] + " " + "-" + " " + Time[2] + " "+ " "+ module[0]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[3] +" " + Time[5] + " " + "-" + " " + Time[6] + " "+ " "+ module[0] << endl ;
			cin >> timing;
		
			mod4003();
		}
			
			else if (timing==2){  
			 cout <<endl << "Please enter 1 for " + day[3] +" " + Time[1] + " " + "-" + " " + Time[2] + " "+ " "+ module[0]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[3] +" " + Time[5] + " " + "-" + " " + Time[6] + " "+ " "+ module[0] << endl ;
			cin >> timing;
					mod4003();
			}
		}
		
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		void mod4003(){
				if(timing == 1){
				
			cout <<endl << "Please enter 1 for " + day[1] +" " + Time[1] + " " + "-" + " " + Time[3] + " "+ " "+ module[1]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[1] +" " + Time[4] + " " + "-" + " " + Time[6] + " "+ " "+ module[1] << endl ;
			cin >> timing;
			
			mod4007();
		
		    }
			
			else if (timing==2){
							
			cout <<endl << "Please enter 1 for " + day[1] +" " + Time[1] + " " + "-" + " " + Time[3] + " "+ " "+ module[1]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[1] +" " + Time[4] + " " + "-" + " " + Time[6] + " "+ " "+ module[1] << endl ;
			cin >> timing;
			
			mod4007();
			}
		}
		
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		void mod4007(){
				if(timing == 1){
				
			cout <<endl << "Please enter 1 for " + day[2] +" " + Time[1] + " " + "-" + " " + Time[2] + " "+ " "+ module[0]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[2] +" " + Time[5] + " " + "-" + " " + Time[6] + " "+ " "+ module[0] << endl ;
			cin >> timing;
		
		       mod4004();
		    }
			
			else if (timing==2){
					cout <<endl << "Please enter 1 for " + day[2] +" " + Time[1] + " " + "-" + " " + Time[2] + " "+ " "+ module[0]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[2] +" " + Time[5] + " " + "-" + " " + Time[6] + " "+ " "+ module[0] << endl ;
			cin >> timing;
		
		       mod4004();
			}
		}
		
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		void mod4004(){
			if(timing == 1){
					
				cout <<endl << "Please enter 1 for " + day[4] +" " + Time[0] + " " + "-" + " " + Time[2] + " "+ " "+ module[0]  <<endl ;
				
				cout << endl << "\t OR" <<endl;
				
				cout <<endl << "Please enter 2 for " + day[4] +" " + Time[3] + " " + "-" + " " + Time[5] + " "+ " "+ module[0] << endl ;
				cin >> timing;
				
				cout <<timing;
			
			}
			
			else if (timing==2){
					cout <<endl << "Please enter 1 for " + day[4] +" " + Time[0] + " " + "-" + " " + Time[2] + " "+ " "+ module[0]  <<endl ;
				
				cout << endl << "\t OR" <<endl;
				
				cout <<endl << "Please enter 2 for " + day[4] +" " + Time[3] + " " + "-" + " " + Time[5] + " "+ " "+ module[0] << endl ;
				cin >> timing;
					
			}
		}
			
			
		 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			
			
		int main(int argc, char** argv) {
			timeT();
			return 0;
		}
