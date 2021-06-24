	switch(moduleno){
		case 1: 
		cout <<endl<<"Lecturers and Rooms for " + module[0] + " " + c <<endl;
		cout
			cout << "1. " + Time[0] + " - " + Time[1]<<endl;
		cout << "1. " + module[0] + " - " + lecturers[0] + " - " + room[0]<< endl;
		cout <<endl<< "2. " + module[0] + " - " + lecturers[1] + " - " + room[1]<< endl <<"->";
		int lec;
		cin >> lec;
		switch(lec){
			case 1: 
			cout <<endl <<"Days for " + module[0] + " " + c <<endl;
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