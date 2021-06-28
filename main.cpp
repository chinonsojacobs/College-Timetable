		#include <iostream>
		#include<conio.h>
		#include<ctime>
		#include<string.h>
		#include<cstring>
		using namespace std;
		
		string name[] = {};
		string classes[] = {};
		string module[4] = {"MD4005", "MD4003", "MD4007", "MD4004"};
		string lecturers[8] = {"Prof John Smith", "Prof Emma Barkley", "Prof Harry Porter", "Prof Tom Hardy", "Prof Daniel Ezra", "Prof Emma Stone", "Prof Zendaya Winterfield", "Prof Johhny Depp"};
		string room[8] = {"Room 12", "Room 03", "Room 14", "Room 11", "Room 16", "Room 09", "Room 17", "Room01"};
		string day[3] = {"Monday","Wednesday", "Thursday"};
		string Time[8] = { "10am", "11am", "12pm", "1pm", "2pm", "3pm", "4pm", "5pm"};
		string monday[6]= {};
		string wednesday[6]= {};
		string wednesdaysec[6]= {};
		string thursday[6]= {};
		
		string n = name[10];
		string c = classes[19];
		int timing;
		
		void mod4005();
		void mod4003();
		void mod4007();
		void mod4004();
		void display();
		
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
			//HERE HERE HERE HERE HERE HERE HERE HERE HERE HERE HERE HERE HERE HERE HERE HERE HERE
			mod4005();
			
		}
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		 void mod4005(){
			if(timing == 1){
				
			cout <<endl << "Please enter 1 for " + day[0] +" " + Time[0] + " " + "-" + " " + Time[2] + " "+ " "+ module[0]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[0] +" " + Time[4] + " " + "-" + " " + Time[6] + " "+ " "+ module[0] << endl ;
			cin >> timing;
			
			if(timing == 1){
				monday[0]= {"\t" + c + " -> " + module[0] + " -> " + day[0] + " -> " + Time[0] + " - " + Time[2] + " -> " + lecturers[0] + " -> " + room[0]};
			} 
			else if(timing == 2){
				monday[0]= {"\t" + c + " -> " + module[0] + " -> " + day[0] + " -> " + Time[4] + " - " + Time[6] + " -> " + lecturers[1] + " -> " + room[1]};
			}
		
			mod4003();
		}
			
			else if (timing==2){  
			cout <<endl << "Please enter 1 for " + day[0] +" " + Time[0] + " " + "-" + " " + Time[2] + " "+ " "+ module[0]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[0] +" " + Time[4] + " " + "-" + " " + Time[6] + " "+ " "+ module[0] << endl ;
			cin >> timing;
				
			if(timing == 1){
				monday[0]= {"\t" + c + " -> " + module[0] + " -> " + day[0] + " -> " + Time[0] + " - " + Time[2] + " -> " + lecturers[0] + " -> " + room[0]};
			} 
			else if(timing == 2){
				monday[0]= {"\t" + c + " -> " + module[0] + " -> " + day[0] + " -> " + Time[4] + " - " + Time[6] + " -> " + lecturers[1] + " -> " + room[1]};
			}
			
			mod4003();
			}
		}
		
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		void mod4003(){
			if(timing == 1){
				
			cout <<endl << "Please enter 1 for " + day[1] +" " + Time[0] + " " + "-" + " " + Time[1] + " "+ " "+ module[1]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[1] +" " + Time[4] + " " + "-" + " " + Time[5] + " "+ " "+ module[1] << endl ;
			cin >> timing;
			
			if(timing == 1){
				wednesday[0]= {"\t" + c + " -> " + module[1] + " -> " + day[1] + " -> " + Time[0] + " - " + Time[1] + " -> " + lecturers[2] + " -> " + room[2]};
			} 
			else if(timing == 2){
				wednesday[0]= {"\t" + c + " -> " + module[1] + " -> " + day[1] + " -> " + Time[4] + " - " + Time[5] + " -> " + lecturers[3] + " -> " + room[3]};
			}
			
		
			mod4007();
		
		    }
			
			else if (timing==2){
							
			cout <<endl << "Please enter 1 for " + day[1] +" " + Time[0] + " " + "-" + " " + Time[1] + " "+ " "+ module[1]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[1] +" " + Time[4] + " " + "-" + " " + Time[5] + " "+ " "+ module[1] << endl ;
			cin >> timing;
			
			if(timing == 1){
				wednesday[0]= {"\t" + c + " -> " + module[1] + " -> " + day[1] + " -> " + Time[0] + " - " + Time[1] + " -> " + lecturers[2] + " -> " + room[2]};
			} 
			else if(timing == 2){
				wednesday[0]= {"\t" + c + " -> " + module[1] + " -> " + day[1] + " -> " + Time[4] + " - " + Time[5] + " -> " + lecturers[3] + " -> " + room[3]};
			}
			mod4007();
			}
		}
			
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		void mod4007(){
			if(timing == 1){
				
			cout <<endl << "Please enter 1 for " + day[1] +" " + Time[2] + " " + "-" + " " + Time[3] + " "+ " "+ module[2]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[1] +" " + Time[6] + " " + "-" + " " + Time[7] + " "+ " "+ module[2] << endl ;
			cin >> timing;
			
			if(timing == 1){
				wednesdaysec[0]= {"\t" + c + " -> " + module[2] + " -> " + day[1] + " -> " + Time[2] + " - " + Time[3] + " -> " + lecturers[4] + " -> " + room[4]};
			} 
			else if(timing == 2){
				wednesdaysec[0]= {"\t" + c + " -> " + module[2] + " -> " + day[1] + " -> " + Time[6] + " - " + Time[7] + " -> " + lecturers[5] + " -> " + room[5]};
			}
		    mod4004();
		    }
			
			else if (timing==2){
			cout <<endl << "Please enter 1 for " + day[1] +" " + Time[2] + " " + "-" + " " + Time[3] + " "+ " "+ module[2]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[1] +" " + Time[6] + " " + "-" + " " + Time[7] + " "+ " "+ module[2] << endl ;
			cin >> timing;
			
			if(timing == 1){
				wednesdaysec[0]= {"\t" + c + " -> " + module[2] + " -> " + day[1] + " -> " + Time[2] + " - " + Time[3] + " -> " + lecturers[4] + " -> " + room[4]};
			} 
			else if(timing == 2){
				wednesdaysec[0]= {"\t" + c + " -> " + module[2] + " -> " + day[1] + " -> " + Time[6] + " - " + Time[7] + " -> " + lecturers[5] + " -> " + room[5]};
			}
		
		       mod4004();
			}
		}
		
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		void mod4004(){
			if(timing == 1){
				
			cout <<endl << "Please enter 1 for " + day[2] +" " + Time[0] + " " + "-" + " " + Time[1] + " "+ " "+ module[3]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[2] +" " + Time[4] + " " + "-" + " " + Time[5] + " "+ " "+ module[3] << endl ;
			cin >> timing;
			
			if(timing == 1){
				thursday[0]= {"\t" + c + " -> " + module[3] + " -> " + day[2] + " -> " + Time[0] + " - " + Time[1] + " -> " + lecturers[6] + " -> " + room[6]};
			} 
			else if(timing == 2){
				thursday[0]= {"\t" + c + " -> " + module[3] + " -> " + day[2] + " -> " + Time[4] + " - " + Time[5] + " -> " + lecturers[7] + " -> " + room[7]};
			}
		    display();
		    }
			
			else if (timing==2){
			cout <<endl << "Please enter 1 for " + day[2] +" " + Time[0] + " " + "-" + " " + Time[1] + " "+ " "+ module[3]  <<endl ;
			
			cout << endl << "\t OR" <<endl;
			
			cout <<endl << "Please enter 2 for " + day[2] +" " + Time[4] + " " + "-" + " " + Time[5] + " "+ " "+ module[3] << endl ;
			cin >> timing;
			
			if(timing == 1){
				thursday[0]= {"\t" + c + " -> " + module[3] + " -> " + day[2] + " -> " + Time[0] + " - " + Time[1] + " -> " + lecturers[6] + " -> " + room[6]};
			} 
			else if(timing == 2){
				thursday[0]= {"\t" + c + " -> " + module[3] + " -> " + day[2] + " -> " + Time[4] + " - " + Time[5] + " -> " + lecturers[7] + " -> " + room[7]};
			}
		    display();
			}
				
			}
		
		void display(){
			cout << monday[0] << endl;
			cout << wednesday[0] << endl;
			cout << wednesdaysec[0] << endl;
			cout << thursday[0] << endl;

						
		}
			
			
		 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			
			
		int main(int argc, char** argv) {
			timeT();
			return 0;
		}
