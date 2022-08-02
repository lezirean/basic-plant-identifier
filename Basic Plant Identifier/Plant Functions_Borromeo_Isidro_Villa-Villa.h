#pragma once
#pragma warning (disable: 6031)

using namespace std;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void SetColorAndBackground(int ForgC, int BackC = 0)
{
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}

//BOX PROGRAMS
//Box for log-in (NOT YET USED)
void box()
{
	for (int a = 9; a <= 73; a++) {
	//start for row
		gotoxy(a, 5);
			cout << "_";
		gotoxy(a, 19);
			cout << "_";
		cout << endl;
	}//end for row
	for (int b = 6; b <= 18; b++) {
		//start for column
		gotoxy(9, b);
			cout << ".";
		gotoxy(73, b);
			cout << ".";
	} //end for column
}


//TV BOX (NOT YET USED)
void newbox1()
{
	//Outer TV box
	SetColorAndBackground(10, 0);
	gotoxy(9, 5);	 cout << "É";
	gotoxy(73, 5);	 cout << "»";
	gotoxy(9, 25);	 cout << "È";
	gotoxy(73, 25);	 cout << "¼";
	
	for (int a = 10; a <= 72; a++) {
		//start for row
		gotoxy(a, 5);
			cout << "Í";
		gotoxy(a, 25);
			cout << "Í";
	} //end for row

	for (int b = 6; b <= 24; b++) {
		//start for column
		gotoxy(9, b);
			cout << "º";
		gotoxy(73, b);
			cout << "º";
	} //end for column

	//Inner TV
	gotoxy(11, 7);	cout << "É";
	gotoxy(60, 7);	cout << "»";
	gotoxy(11, 23);	cout << "È";
	gotoxy(60, 23);	cout << "¼";

	for (int a = 12; a <= 59; a++) {
	//start for row
		gotoxy(a, 7);
			cout << "Í";
		gotoxy(a, 23);
			cout << "Í";
	} //end for row

	for (int b = 8; b <= 22; b++) {
		//start for column
		gotoxy(11, b);
			cout << "º";
		gotoxy(60, b);
			cout << "º";
	} //end for column

	//Right TV
	gotoxy(62, 7);	cout << "Ú";
	gotoxy(71, 7);	cout << "¿";
	gotoxy(62, 23);	cout << "À";
	gotoxy(71, 23);	cout << "Ù";
	
	for (int a = 63; a <= 70; a++) {
		//start for row
		gotoxy(a, 7);
			cout << "Ä";
		gotoxy(a, 23);
			cout << "Ä";
	} //end for row

	for (int b = 8; b <= 22; b++) {
		//start for column
		gotoxy(62, b);
			cout << "³";
		gotoxy(71, b);
			cout << "³";
	} //end for column
	
	gotoxy(64, 8);	cout << "Ú";
	gotoxy(69, 8);	cout << "¿";
	gotoxy(64, 16); cout << "À";
	gotoxy(69, 16); cout << "Ù";

	for (int a = 65; a <= 68; a++) {
		//start for row
		gotoxy(a, 8);
			cout << "Ä";
		gotoxy(a, 16);
			cout << "Ä";
	} //end for row

	for (int b = 9; b <= 15; b++) {
		//start for column
		gotoxy(64, b);
			cout << "³";
		gotoxy(69, b);
			cout << "³";
	} //end for column
	
	for (int a = 65; a <= 68; a++) {
		//start for row
		gotoxy(a, 17);
			cout << "Ä";
		gotoxy(a, 18);
			cout << "Ä";
		gotoxy(a, 19);
			cout << "Ä";
		gotoxy(a, 20);
			cout << "Ä";
		gotoxy(a, 21);
			cout << "Ä";
		gotoxy(a, 22);
			cout << "Ä";
	} //end for row
}

//BOX FOR LETTER CHOICES IN MENU
void menuNamebox(int u, int d) 
{
	SetColorAndBackground(15, 0);
	gotoxy(26, u); cout << "Ú";
	gotoxy(34, u); cout << "¿";
	gotoxy(26, d); cout << "À";
	gotoxy(34, d); cout << "Ù";

	for (int a = 27; a <= 33; a++) {
		//start for row
		gotoxy(a, u);	 cout << "Ä";
		gotoxy(a, d);	 cout << "Ä";
	} //end for row

	//start for column
		gotoxy(26, u+1); cout << "³";
		gotoxy(34, u+1); cout << "³";
}


void frontbox()
{
	SetColorAndBackground(6, 0);
//Outer Box 
	gotoxy(9, 3);		cout << "Û"; //cout << "É";
	gotoxy(9, 35);		cout << "Û"; //cout << "È";
	gotoxy(120, 3);		cout << "Û"; //cout << "»";
	gotoxy(120, 35);	cout << "Û"; //cout << "¼";

	for (int a = 10; a <= 119; a++) { //start for row
		gotoxy(a, 3);	cout << "Û"; //cout << "Í";
		gotoxy(a, 35);	cout << "Û"; //cout << "Í";
	} //end for row

	for (int b = 4; b <= 34; b++) { //start for column
		gotoxy(9, b);	cout << "Û"; //cout << "º";
		gotoxy(120, b);	cout << "Û"; //cout << "º";
	} //end for column

//Name
	SetColorAndBackground(6, 0);
	for (int a = 10; a <= 119; a++) { //start for row
		gotoxy(a, 4);	cout << "°";
		gotoxy(a, 6);	cout << "°";
	} //end for row
	gotoxy(10, 5);	cout << "°";
	gotoxy(119, 5);	cout << "°";
	
//Half Left Box
	gotoxy(10, 7);		cout << "É";
	gotoxy(10, 34);		cout << "È";
	gotoxy(64, 7);		cout << "»";
	gotoxy(64, 34);		cout << "¼";

	for (int a = 11; a <= 63; a++) { //start for row
		gotoxy(a, 7);	cout << "Í";
		gotoxy(a, 34);	cout << "Í";
	} //end for row

	for (int b = 8; b <= 33; b++) { //start for column
		gotoxy(10, b);	cout << "º";
		gotoxy(64, b);	cout << "º";
	} //end for column

//Inside Left Box
	gotoxy(12, 8);		cout << "Ú";
	gotoxy(12, 33);		cout << "À";
	gotoxy(62, 8);		cout << "¿";
	gotoxy(62, 33);		cout << "Ù";

	for (int a = 13; a <= 61; a++) { //start for row
		gotoxy(a, 8);	cout << "Ä";
		gotoxy(a, 33);	cout << "Ä";
	} //end for row

	for (int b = 9; b <= 32; b++) { //start for column
		gotoxy(12, b);	cout << "³";
		gotoxy(62, b);	cout << "³";
	} //end for column

//Half Right Box
	gotoxy(65, 7);		cout << "É";
	gotoxy(65, 34);		cout << "È";
	gotoxy(119, 7);		cout << "»";
	gotoxy(119, 34);		cout << "¼";

	for (int a = 66; a <= 118; a++) { //start for row
		gotoxy(a, 7);	cout << "Í";
		gotoxy(a, 34);	cout << "Í";
	} //end for row

	for (int b = 8; b <= 33; b++) { //start for column
		gotoxy(65, b);	cout << "º";
		gotoxy(119, b);	cout << "º";
	} //end for column

//Inside Right Box 1
	gotoxy(67, 8);		cout << "Ú";
	gotoxy(67, 12);		cout << "À";
	gotoxy(117, 8);		cout << "¿";
	gotoxy(117, 12);	cout << "Ù";

	for (int a = 68; a <= 116; a++) { //start for row
		gotoxy(a, 8);	cout << "Ä";
		gotoxy(a, 12);	cout << "Ä";
	} //end for row

	for (int b = 9; b <= 11; b++) { //start for column
		gotoxy(67, b);	cout << "³";
		gotoxy(117, b);	cout << "³";
	} //end for column

//Inside Right Box 5
	gotoxy(67, 27);		cout << "Ú";
	gotoxy(67, 33);		cout << "À";
	gotoxy(117, 27);	cout << "¿";
	gotoxy(117, 33);	cout << "Ù";

	for (int a = 68; a <= 116; a++) { //start for row
		gotoxy(a, 27);	cout << "Ä";
		gotoxy(a, 33);	cout << "Ä";
	} //end for row

	for (int b = 28; b <= 32; b++) { //start for column
		gotoxy(67, b);	cout << "³";
		gotoxy(117, b);	cout << "³";
	} //end for column

//Inside Right Box 2
	gotoxy(67, 13);		cout << "Ú";
	gotoxy(67, 19);		cout << "À";
	gotoxy(84, 13);		cout << "¿";
	gotoxy(84, 19);		cout << "Ù";

	for (int a = 68; a <= 83; a++) { //start for row
		gotoxy(a, 13);	cout << "Ä";
		gotoxy(a, 19);	cout << "Ä";
	} //end for row

	for (int b = 14; b <= 18; b++) { //start for column
		gotoxy(67, b);	cout << "³";
		gotoxy(84, b);	cout << "³";
	} //end for column

//Inside Right Box 3
	gotoxy(67, 20);		cout << "Ú";
	gotoxy(67, 26);		cout << "À";
	gotoxy(84, 20);		cout << "¿";
	gotoxy(84, 26);		cout << "Ù";

	for (int a = 68; a <= 83; a++) { //start for row
		gotoxy(a, 20);	cout << "Ä";
		gotoxy(a, 26);	cout << "Ä";
	} //end for row

	for (int b = 21; b <= 25; b++) { //start for column
		gotoxy(67, b);	cout << "³";
		gotoxy(84, b);	cout << "³";
	} //end for column

//Inside Right Box 4
	gotoxy(86, 13);		cout << "Ú";
	gotoxy(86, 26);		cout << "À";
	gotoxy(117, 13);	cout << "¿";
	gotoxy(117, 26);	cout << "Ù";

	for (int a = 87; a <= 116; a++) { //start for row
		gotoxy(a, 13);	cout << "Ä";
		gotoxy(a, 26);	cout << "Ä";
	} //end for row

	for (int b = 14; b <= 25; b++) { //start for column
		gotoxy(86, b);	cout << "³";
		gotoxy(117, b);	cout << "³";
	} //end for column

	
	for (int a = 68; a <= 116; a++) {
		SetColorAndBackground(14, 0); gotoxy(a, 28); cout << "°";
		SetColorAndBackground(14, 0); gotoxy(a, 32); cout << "°";
		SetColorAndBackground(15, 0); gotoxy(a, 29); cout << "Ä";
		SetColorAndBackground(15, 0); gotoxy(a, 31); cout << "Ä";
	}

}

void userpass()
{
	SetColorAndBackground(14, 0);
	gotoxy(80, 10); cout << "PLEASE LOGIN TO CONTINUE.";
	gotoxy(71, 16); cout << "<USERNAME> ";
	gotoxy(71, 23); cout << "<PASSWORD> ";
	gotoxy(72, 30); cout << "<PROMPT>: ";
}


void loginBox()
{
	SetColorAndBackground(14, 0);
	gotoxy(91, 16); cout << "<ENTER>: ";
	for (int a = 87; a <= 116; a++) {
		SetColorAndBackground(14, 0); gotoxy(a, 14); cout << "°";
		SetColorAndBackground(14, 0); gotoxy(a, 18); cout << "°";
		SetColorAndBackground(15, 0); gotoxy(a, 15); cout << "Ä";
		SetColorAndBackground(15, 0); gotoxy(a, 17); cout << "Ä";
	}
	SetColorAndBackground(14, 0);
	gotoxy(91, 23); cout << "<ENTER>: ";
	for (int a = 87; a <= 116; a++) {
		SetColorAndBackground(14, 0); gotoxy(a, 21); cout << "°";
		SetColorAndBackground(14, 0); gotoxy(a, 25); cout << "°";
		SetColorAndBackground(15, 0); gotoxy(a, 22); cout << "Ä";
		SetColorAndBackground(15, 0); gotoxy(a, 24); cout << "Ä";
	}
}



//PROJECT BOX
void obsbox()
{
//Outer obs box
	SetColorAndBackground(10, 0);
//LEFT BOX
//up
	gotoxy(9, 3);	cout << "É";

	gotoxy(35, 3);	cout << "Ë"; //upper intersection
//down
	gotoxy(9, 35);  cout << "È";

	gotoxy(35, 35); cout << "Ê"; //lower intersection

//LEFT OUTSIDE ROW
	for (int a = 10; a <= 34; a++) {
		//start for row
		gotoxy(a, 3);	cout << "Í";
		gotoxy(a, 35);	cout << "Í";
	} //end for row

	gotoxy(9, 4);	cout << "º";
	gotoxy(35, 4);	cout << "º";

	//LEFT COLUMN INTERSECTION
	gotoxy(9, 5);	cout << "Ç"; //LEFT ROW INTERSECTION 1
	gotoxy(35, 5);	cout << "¶";

	gotoxy(9, 33);	cout << "Ç"; //LEFT ROW INTERSECTION 2
	gotoxy(35, 33);	cout << "¶";


	//LEFT INTERSECTION ROW
	for (int a = 10; a <= 34; a++) {
		//start for row
		gotoxy(a, 5);cout << "Ä";
		gotoxy(a, 33);cout << "Ä";
	} //end for row

//LEFT BOX COLUMN
	for (int b = 6; b <= 32; b++) {
		//start for column
		gotoxy(9, b);cout << "º";
		gotoxy(35, b);cout << "º";
	} //end for column

	//LEFT BOX COLUMN AFTER INTERSECTION 2
	for (int b = 34; b <= 34; b++) {
		//start for column
		gotoxy(9, b);	cout << "º";
		gotoxy(35, b);	cout << "º";
	} //end for column

	//RIGHT OUTSIDE ROW
	for (int a = 36; a <= 119; a++) {
		//start for row
		gotoxy(a, 3);	cout << "Í";
		gotoxy(a, 35);	cout << "Í";
	} //end for row

	//RIGHT BOX OUSIDE COLUMN
	for (int b = 4; b <= 34; b++) {
		//start for column
		gotoxy(120, b);	cout << "º";
	} //end for column

	gotoxy(120, 3);		cout << "»";
	gotoxy(120, 35);	cout << "¼";

	//RIGHT INNER BOX
	gotoxy(36, 4);		cout << "Ú";
	gotoxy(36, 34);		cout << "À";

	gotoxy(119, 4);		cout << "¿";
	gotoxy(119, 34);	cout << "Ù";
		
	for (int a = 37; a <= 118; a++) {
		//start for row
		gotoxy(a, 4);	cout << "Ä";
		gotoxy(a, 34);	cout << "Ä";
		} //end for row

	for (int b = 5; b <= 33; b++) {
			//start for column
		gotoxy(36, b);	cout << "³";
		gotoxy(119, b); cout << "³";
		} //end for column


	//RIGHT BOX []
	//left [
	gotoxy(37, 5);		cout << "Ú";
	gotoxy(37, 33);		cout << "À";
		gotoxy(38, 5);	cout << "Ä";
		gotoxy(38, 33);	cout << "Ä";
	
	//right ]
	gotoxy(118, 5);		 cout << "¿";
	gotoxy(118, 33);	 cout << "Ù";
		gotoxy(117, 5);	 cout << "Ä";
		gotoxy(117, 33); cout << "Ä";
		
	for (int b = 6; b <= 32; b++) {
			//start for column
			gotoxy(37, b);  cout << "³";
			gotoxy(118, b); cout << "³";
		} //end for column
} 

//LOCATION INDICATION (NOT YET USED)
void menuIndication1()
{
	SetColorAndBackground(14, 0);
	for (int a = 14; a <= 37; a++) {
		gotoxy(a, 0); cout << "Ü"; 
			//cout << "Ä";
	} 
	SetColorAndBackground(14, 0);
	gotoxy(20, 1); cout << "HOUSE PLANTS";
	
	SetColorAndBackground(10, 0);
	for (int a = 40; a <= 63; a++) {
		gotoxy(a, 0); cout << "Ü"; 
			//cout << "Ä";
	}
	gotoxy(46, 1); cout << "EXOTIC PLANTS";
	
	for (int a = 66; a <= 89; a++) {
		gotoxy(a, 0); cout << "Ü"; 
			//cout << "Ä";
	}
	gotoxy(73, 1); cout << "LEAF-BASED";

	for (int a = 92; a <= 115; a++) {
		gotoxy(a, 0); cout << "Ü"; 
			//cout << "Ä";
	}
	gotoxy(101, 1); cout << "LINKS";
}

//DESIGN FOR INSTRUCTIONS BELOW MENU
void menuInstructions()
{
	for (int a = 10; a <= 34; a++) {
		SetColorAndBackground(14, 0);
			gotoxy(a, 27); cout << "°";
			//cout << "Ü";
		SetColorAndBackground(14, 0);
			gotoxy(a, 32); cout << "°";
			//cout << "Ü";
		SetColorAndBackground(15, 0);
			gotoxy(a, 28); cout << "Ä";
		SetColorAndBackground(15, 0);
			gotoxy(a, 31); cout << "Ä";
	}
}

void outputheader() //[---]
{
	SetColorAndBackground(15, 0);
	//left [
	gotoxy(40, 5); cout << "Ú";
	gotoxy(40, 9); cout << "À";
	gotoxy(41, 5); cout << "Ä";
	gotoxy(41, 9); cout << "Ä";

	//right ]
	gotoxy(115, 5); cout << "¿";
	gotoxy(115, 9); cout << "Ù";
	gotoxy(114, 5); cout << "Ä";
	gotoxy(114, 9); cout << "Ä";

	for (int b = 6; b <= 8; b++) {
		//start for column
		gotoxy(40, b);
			cout << "³";
		gotoxy(115, b);
			cout << "³";
	} //end for column
	
	for (int a = 41; a <= 114; a++) {
		//start for row
		gotoxy(a, 7);
			cout << "°";
	}
}

void menuList() //MAIN LIST FOR CATEGORIES/CHARACTERISTICS
{
	SetColorAndBackground(0, 14);
	gotoxy(10, 4);
		cout << "ÄÄÄÄÄÄÄ PLANT MENU ÄÄÄÄÄÄ";
		cout << endl << endl;
		
	SetColorAndBackground(15, 0);
	gotoxy(10, 6);
		cout << "ÄÄÄÄÄÄÄÄ CATEGORY ÄÄÄÄÄÄÄ";
	 		
		for (int a = 10; a <= 34; a++) {
			SetColorAndBackground(14, 0);
			gotoxy(a, 7);
				cout << "°";
				//cout << "Ü";
		}

	SetColorAndBackground(10, 0);
	gotoxy(12, 9);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 9);
		cout << " HOUSE ";
	//gotoxy(13, 10);
	//	cout << " PLANTS";
			menuNamebox(8, 10);
			SetColorAndBackground(4, 0);
			gotoxy(29, 9);
				cout << " A ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 12);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 12);
		cout << " EXOTIC";
	//gotoxy(13, 13);
	//	cout << " PLANTS";
			menuNamebox(11, 13);
			SetColorAndBackground(4, 0);
			gotoxy(29, 12);
				cout << " B ";
				
	SetColorAndBackground(15, 0);
	gotoxy(10, 15);
		cout << "ÄÄÄÄ CHARACTERISTICS ÄÄÄÄ";

		for (int a = 10; a <= 34; a++) {
			SetColorAndBackground(14, 0);			
			gotoxy(a, 16);
				cout << "°";
				//cout << "Ü";
		}

	SetColorAndBackground(10, 0);
	gotoxy(12, 18);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 18);
		cout << " LEAF-BASED";
			menuNamebox(17, 19);
			SetColorAndBackground(4, 0);
			gotoxy(29, 18);
				cout << " C ";

		for (int a = 10; a <= 34; a++) {
			SetColorAndBackground(14, 0);
			gotoxy(a, 20);
				cout << "°";
				//cout << "Ü";
		}

	SetColorAndBackground(10, 0);
	gotoxy(12, 22);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 22);
		cout << " LINKS";
			menuNamebox(21, 23);
			SetColorAndBackground(4, 0);
			gotoxy(29, 22);
				cout << " D ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 25);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 25);
		cout << " EXIT";
			menuNamebox(24, 26);
			SetColorAndBackground(4, 0);
			gotoxy(29, 25);
				cout << " E ";
				cout << endl;
}


//MENU FOR HOUSE PLANTS
void housePlantsList() //Indexes for House Plants
{
	SetColorAndBackground(0, 14);
	gotoxy(10, 4);
		cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
		cout << endl << endl;

	SetColorAndBackground(15, 0);
	gotoxy(10, 6);
		cout << "ÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄ";
	gotoxy(20, 7);
		cout << "INDEX";

	for (int a = 10; a <= 34; a++) {
		SetColorAndBackground(14, 0);
		gotoxy(a, 8);
			cout << "°";
			//cout << "Ü";
	}

	SetColorAndBackground(10, 0);
	gotoxy(12, 10);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 10);
		cout << " INDEX 1";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
			gotoxy(29, 10);
				cout << " A ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 13);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 13);
		cout << " INDEX 2";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
			gotoxy(29, 13);
				cout << " B ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 16);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 16);
		cout << " INDEX 3";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
			gotoxy(29, 16);
				cout << " C ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 19);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 19);
		cout << " RETURN";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
			gotoxy(29, 19);
				cout << " D ";
}

void index1Menu()
{
	SetColorAndBackground(0, 14);
	gotoxy(10, 4);
		cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";
		cout << endl << endl;
		
	SetColorAndBackground(10, 0);
	gotoxy(12, 7);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 7);
		cout << " FLOWERING";
			menuNamebox(6, 8);
			SetColorAndBackground(4, 0);
				gotoxy(29, 7);
					cout << " A ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 10);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 10);
		cout << " FOLIAGE";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
				gotoxy(29, 10);
					cout << " B ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 13);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 13);
		cout << " CACTUS";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
				gotoxy(29, 13);
					cout << " C ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 16);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 16);
		cout << " SUCCULENT";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
				gotoxy(29, 16);
					cout << " D ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 19);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 19);
		cout << " HANGING";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
				gotoxy(29, 19);
					cout << " E ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 22);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 22);
		cout << " TRAILING";
			menuNamebox(21, 23);
			SetColorAndBackground(4, 0);
				gotoxy(29, 22);
					cout << " F ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 25);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 25);
		cout << " RETURN";
			menuNamebox(24, 26);
			SetColorAndBackground(4, 0);
				gotoxy(29, 25);
					cout << " G ";
					cout << endl;
}


void index2Menu()
{
	SetColorAndBackground(0, 14);
	gotoxy(10, 4);
		cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";
		cout << endl << endl;

	SetColorAndBackground(10, 0);
	gotoxy(12, 7);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 7);
		cout << " FERNS";
			menuNamebox(6, 8);
			SetColorAndBackground(4, 0);
			gotoxy(29, 7);
				cout << " A ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 10);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 10);
		cout << " PALMS";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
			gotoxy(29, 10);
				cout << " B ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 13);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 13);
		cout << " BULBOUS";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
			gotoxy(29, 13);
				cout << " C ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 16);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 16);
		cout << " COMMON";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
			gotoxy(29, 16);
				cout << " D ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 19);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 19);
		cout << " UNUSUAL";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
			gotoxy(29, 19);
				cout << " E ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 22);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 22);
		cout << " CHRISTMAS";
			menuNamebox(21, 23);
			SetColorAndBackground(4, 0);
			gotoxy(29, 22);
				cout << " F ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 25);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 25);
		cout << " RETURN";
	menuNamebox(24, 26);
	SetColorAndBackground(4, 0);
	gotoxy(29, 25);
		cout << " G ";
		cout << endl;
}

void index3Menu()
{
	SetColorAndBackground(0, 14);
	gotoxy(10, 4);
	cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";
	cout << endl << endl;

	SetColorAndBackground(10, 0);
	gotoxy(12, 7);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 7);
		cout << " OFFICE TYPE";
			menuNamebox(6, 8);
			SetColorAndBackground(4, 0);
			gotoxy(29, 7);
				cout << " A ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 10);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 10);
		cout << " TREE TYPE";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
			gotoxy(29, 10);
				cout << " B ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 13);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 13);
		cout << " STONE TYPE";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
			gotoxy(29, 13);
				cout << " C ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 16);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 16);
		cout << " LARGE TYPE";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
			gotoxy(29, 16);
				cout << " D ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 19);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 19);
		cout << " LOW LIGHT";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
			gotoxy(29, 19);
				cout << " E ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 22);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 22);
		cout << " RETURN";
			menuNamebox(21, 23);
			SetColorAndBackground(4, 0);
			gotoxy(29, 22);
				cout << " F ";
}


//MENU FOR PLANT EXAMPLES
void plantResultsMenu()
{
	SetColorAndBackground(10, 0);
	gotoxy(12, 7);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 7);
		cout << " RESULTS";
			menuNamebox(6, 8);
			SetColorAndBackground(4, 0);
			gotoxy(29, 7);
				cout << " A ";

	SetColorAndBackground(10, 0);
	gotoxy(12, 10);
		cout << "°";
	SetColorAndBackground(15, 0);
	gotoxy(13, 10);
		cout << " RETURN";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
			gotoxy(29, 10);
				cout << " B ";
}


//BOX FOR PLANT NAME (LEFT SIDE)
void plantHeader(int ph) //ph= number of characters for the plant header 
{
	SetColorAndBackground(15, 0);
	gotoxy(40, 10);
		cout << "Ú";
	gotoxy(41+ph+6, 10);
		cout << "¿";
	gotoxy(40, 12);
		cout << "À";
	gotoxy(41+ph+6, 12);
		cout << "Ù";
	for (int a = 41; a <= (41+ph+5); a++) {
		//start for row
		gotoxy(a, 10);
		cout << "Ä";
		gotoxy(a, 12);
		cout << "Ä";
	} //end for row

	//start for column
	gotoxy(40, 11);
	cout << "³";
	gotoxy(41+ph+6, 11);
	cout << "³";
}


//BOX FOR PLANT NAME (RIGHT SIDE | NOT YET USED)
void plantRHeader(int ph) //ph= number of characters for the plant header 
{
	SetColorAndBackground(15, 0);
	gotoxy(114 - ph - 6, 10);	cout << "Ú";
	gotoxy(115, 10);			cout << "¿";
	gotoxy(114-ph-6, 12);		cout << "À";
	gotoxy(115, 12);			cout << "Ù";
	for (int a = 114; a >= (114 - ph - 5); a--) {
		//start for row
		gotoxy(a, 10);
		cout << "Ä";
		gotoxy(a, 12);
		cout << "Ä";
	} //end for row

	//start for column
	gotoxy(115, 11);			cout << "³";
	gotoxy(114 - ph - 6, 11);   cout << "³";
}


void plantInfo(int py) //py= y-coordinate of information header
{
	SetColorAndBackground(15, 0);
	gotoxy(40, py);   cout << "Ú";
	gotoxy(58, py);   cout << "¿";
	gotoxy(40, py+2); cout << "À";
	gotoxy(58, py+2); cout << "Ù";
	for (int a = 41; a <= 57; a++) {
		//start for row
		gotoxy(a, py);
		cout << "Ä";
		gotoxy(a, py+2);
		cout << "Ä";
	} //end for row

	//start for column
	gotoxy(40, py+1); cout << "³";
	gotoxy(58, py+1); cout << "³";
}

//BOX FOR THE WORD 'INFORMATION'
void boxInfo(int sy) //; sy= second (end) y-coordinate of information; 
{
	for (int a = 40; a <= 115; a++) {
		//start for row
		SetColorAndBackground(14, 0);
		gotoxy(a, 17);
			cout << "°";
		SetColorAndBackground(15, 0);
		gotoxy(a, 18);
			cout << "Ä";
	}

	SetColorAndBackground(15, 0);
	//left [
	gotoxy(40, 19); cout << "Ú";
	gotoxy(40, sy); cout << "À";
	gotoxy(41, 19); cout << "Ä";
	gotoxy(41, sy); cout << "Ä";
	
	//right ]
	gotoxy(115, 19); cout << "¿";
	gotoxy(115, sy); cout << "Ù";
	gotoxy(114, 19); cout << "Ä";
	gotoxy(114, sy); cout << "Ä";
	
	for (int b = 20; b <= sy-1; b++) {
		//start for column
		gotoxy(40, b);
			cout << "³";
		gotoxy(115, b);
			cout << "³";
	} //end for column
}

//BOX FOR THE INFORMATION
void leafboxInfo(int sy) //; sy= second (end) y-coordinate of information;  max should be 20;
{
	for (int a = 40; a <= 115; a++) {
		//start for row
		SetColorAndBackground(14, 0); gotoxy(a, 13); cout << "°";
		SetColorAndBackground(15, 0); gotoxy(a, 14); cout << "Ä";
	}

	SetColorAndBackground(15, 0);
	//left [
	gotoxy(40, 15); cout << "Ú";
	gotoxy(40, sy); cout << "À";
	gotoxy(41, 15); cout << "Ä";
	gotoxy(41, sy); cout << "Ä";
	
	//right ]
	gotoxy(115, 15); cout << "¿";
	gotoxy(115, sy); cout << "Ù";
	gotoxy(114, 15); cout << "Ä";
	gotoxy(114, sy); cout << "Ä";
	
	for (int b = 16; b <= sy-1; b++) {
		//start for column
		gotoxy(40, b);  cout << "³";
		gotoxy(115, b); cout << "³";
	} //end for column
}

void leafShapeBoxInfo(int sy) //; sy= second (end) y-coordinate of information;  max should be 20;
{
	for (int a = 40; a <= 115; a++) {
		//start for row
		SetColorAndBackground(15, 0); gotoxy(a, 21); cout << "Ä";
	}

	SetColorAndBackground(15, 0);
	//left [
	gotoxy(40, 22); cout << "Ú";
	gotoxy(40, sy); cout << "À";
	gotoxy(41, 22); cout << "Ä";
	gotoxy(41, sy); cout << "Ä";

	//right ]
	gotoxy(115, 22); cout << "¿";
	gotoxy(115, sy); cout << "Ù";
	gotoxy(114, 22); cout << "Ä";
	gotoxy(114, sy); cout << "Ä";

	for (int b = 23; b <= sy - 1; b++) {
		//start for column
		gotoxy(40, b);  cout << "³";
		gotoxy(115, b); cout << "³";
	} //end for column
}

//BOX FOR PLANT EXAMPLES
void plantEXCOL1(int py) //py= y-coordinate of information header
{
	SetColorAndBackground(15, 0);
	gotoxy(40, py);		cout << "Ú";
	gotoxy(63, py);		cout << "¿";
	gotoxy(40, py + 2); cout << "À";
	gotoxy(63, py + 2); cout << "Ù";

	for (int a = 41; a <= 62; a++) {
		//start for row
		gotoxy(a, py);		cout << "Ä";
		gotoxy(a, py + 2);	cout << "Ä";
	} //end for row

	//start for column
	gotoxy(40, py + 1); cout << "³";
	gotoxy(63, py + 1); cout << "³";
}

void plantEXCOL2(int py) //py= y-coordinate of information header
{
	SetColorAndBackground(15, 0);
	gotoxy(66, py);		cout << "Ú";
	gotoxy(89, py);		cout << "¿";
	gotoxy(66, py + 2); cout << "À";
	gotoxy(89, py + 2); cout << "Ù";

	for (int a = 67; a <= 88; a++) {
		//start for row
		gotoxy(a, py);		cout << "Ä";
		gotoxy(a, py + 2);	cout << "Ä";
	} //end for row

	//start for column
	gotoxy(66, py + 1); cout << "³";
	gotoxy(89, py + 1); cout << "³";
}

void plantEXCOL3(int py) //py= y-coordinate of information header
{
	SetColorAndBackground(15, 0);
	gotoxy(92, py);			cout << "Ú";
	gotoxy(115, py);		cout << "¿";
	gotoxy(92, py + 2);		cout << "À";
	gotoxy(115, py + 2);	cout << "Ù";

	for (int a = 93; a <= 114; a++) {
		//start for row
		gotoxy(a, py);		cout << "Ä";
		gotoxy(a, py + 2);	cout << "Ä";
	} //end for row

	//start for column
	gotoxy(92, py + 1);		cout << "³";
	gotoxy(115, py + 1);	cout << "³";
}


//BOX FOR LEAF-BASE PLANTS (A-Z)
void plantALCOL1(int py) //py= y-coordinate of information header
{
	SetColorAndBackground(15, 0);
	gotoxy(40, py);		cout << "Ú";
	gotoxy(56, py);		cout << "¿";
	gotoxy(40, py + 2); cout << "À";
	gotoxy(56, py + 2); cout << "Ù";

	for (int a = 41; a <= 55; a++) {
		//start for row
		gotoxy(a, py);
			cout << "Ä";
		gotoxy(a, py + 2);
			cout << "Ä";
	} //end for row

	//start for column
	gotoxy(40, py + 1); cout << "³";
	gotoxy(56, py + 1); cout << "³";
}

void plantALCOL2(int py) //py= y-coordinate of information header
{
	SetColorAndBackground(15, 0);
	gotoxy(59, py);		cout << "Ú";
	gotoxy(75, py);		cout << "¿";
	gotoxy(59, py + 2); cout << "À";
	gotoxy(75, py + 2); cout << "Ù";

	for (int a = 60; a <= 74; a++) {
		//start for row
		gotoxy(a, py);
			cout << "Ä";
		gotoxy(a, py + 2);
			cout << "Ä";
	} //end for row

	//start for column
	gotoxy(59, py + 1); cout << "³";
	gotoxy(75, py + 1); cout << "³";
}

void plantALCOL3(int py) //py= y-coordinate of information header
{
	SetColorAndBackground(15, 0);
	gotoxy(79, py);			cout << "Ú";
	gotoxy(95, py);			cout << "¿";
	gotoxy(79, py + 2);		cout << "À";
	gotoxy(95, py + 2);		cout << "Ù";

	for (int a = 80; a <= 94; a++) {
		//start for row
		gotoxy(a, py);
			cout << "Ä";
		gotoxy(a, py + 2);
			cout << "Ä";
	} //end for row

	//start for column
	gotoxy(79, py + 1);		cout << "³";
	gotoxy(95, py + 1);		cout << "³";
}

void plantALCOL4(int py) //py= y-coordinate of information header
{
	SetColorAndBackground(15, 0);
	gotoxy(99, py);			cout << "Ú";
	gotoxy(115, py);		cout << "¿";
	gotoxy(99, py + 2);		cout << "À";
	gotoxy(115, py + 2);	cout << "Ù";

	for (int a = 100; a <= 114; a++) {
		//start for row
		gotoxy(a, py);
			cout << "Ä";
		gotoxy(a, py + 2);
			cout << "Ä";
	} //end for row

	//start for column
	gotoxy(99, py + 1);		cout << "³";
	gotoxy(115, py + 1);	cout << "³";
}

void plantALCOL5(int py) //py= y-coordinate of information header
{
	SetColorAndBackground(15, 0);
	gotoxy(79, py);			cout << "Ú";
	gotoxy(115, py);		cout << "¿";
	gotoxy(79, py + 2);		cout << "À";
	gotoxy(115, py + 2);	cout << "Ù";
	
	for (int a = 80; a <= 114; a++) {
		//start for row
		gotoxy(a, py);
			cout << "Ä";
		gotoxy(a, py + 2);
			cout << "Ä";
	} //end for row

	//start for column
	gotoxy(79, py + 1);		cout << "³";
	gotoxy(115, py + 1);	cout << "³";
}

//LEAF-BASED MENU
void leafPlantsList()
{
	//LEAF-BASED MENU
	SetColorAndBackground(0, 14);
		gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
		 
	SetColorAndBackground(10, 0);
		gotoxy(12, 7); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 7); cout << " WOODY";
			menuNamebox(6, 8);
			SetColorAndBackground(4, 0);
			gotoxy(29, 7); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " AQUATIC";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
			gotoxy(29, 10); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13);	cout << " GRASS-LIKE";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
			gotoxy(29, 13); cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " ORCHIDS";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
			gotoxy(29, 16); cout << " D ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 19); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 19); cout << " TRUE FERNS";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
			gotoxy(29, 19); cout << " E ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 22); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 22); cout << " NON-WOODY";
			menuNamebox(21, 23);
			SetColorAndBackground(4, 0);
			gotoxy(29, 22); cout << " F ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 25); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 25); cout << " RETURN";
			menuNamebox(24, 26);
			SetColorAndBackground(4, 0);
			gotoxy(29, 25); cout << " G ";		
}

void woody()
{
	//LEAF-BASED MENU
	SetColorAndBackground(0, 14);
		gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
		cout << endl << endl;

	SetColorAndBackground(10, 0);
		gotoxy(12, 7); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 7); cout << " BROAD-LEAF";
	menuNamebox(6, 8);
	SetColorAndBackground(4, 0);
		gotoxy(29, 7); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " NEEDLE-LEAF";
	menuNamebox(9, 11);
	SetColorAndBackground(4, 0);
		gotoxy(29, 10); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " RETURN";
	menuNamebox(12, 14);
	SetColorAndBackground(4, 0);
		gotoxy(29, 13); cout << " C ";
}


void woodyLeaf()
{
	SetColorAndBackground(10, 0);
		gotoxy(12, 7); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 7); cout << " ENTIRE";
	menuNamebox(6, 8);
	SetColorAndBackground(4, 0);
		gotoxy(29, 7); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " TOOTHED";
	menuNamebox(9, 11);
	SetColorAndBackground(4, 0);
		gotoxy(29, 10); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " LOBED";
	menuNamebox(12, 14);
	SetColorAndBackground(4, 0);
		gotoxy(29, 13); cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " RETURN";
	menuNamebox(15, 17);
	SetColorAndBackground(4, 0);
		gotoxy(29, 16);	cout << " D ";
}

void needleLeaf()
{
	SetColorAndBackground(10, 0);
		gotoxy(12, 7); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 7); cout << " NEEDLE";
	menuNamebox(6, 8);
	SetColorAndBackground(4, 0);
		gotoxy(29, 7); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " SCALE";
	menuNamebox(9, 11);
	SetColorAndBackground(4, 0);
		gotoxy(29, 10); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " RETURN";
	menuNamebox(12, 14);
	SetColorAndBackground(4, 0);
		gotoxy(29, 13); cout << " C ";
}

void aquatic()
{
	//LEAF-BASED MENU
	SetColorAndBackground(0, 14);
		gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
		cout << endl << endl;

	SetColorAndBackground(15, 0);
		gotoxy(10, 6); cout << "ÄÄÄÄÄ LEAVES & STEM ÄÄÄÄÄ";
		gotoxy(20, 7); cout << "INDEX";

	for (int a = 10; a <= 34; a++) {
		SetColorAndBackground(14, 0);
		gotoxy(a, 8);
			cout << "°";
			//cout << "Ü";
	}

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " WITH";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
			gotoxy(29, 10);
				cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " WITHOUT";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
			gotoxy(29, 13);
				cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " RETURN";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
			gotoxy(29, 16);
				cout << " C ";
}


void aquaticLeaf()
{
	SetColorAndBackground(10, 0);
		gotoxy(12, 7); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 7); cout << " FLOATING";
	menuNamebox(6, 8);
	SetColorAndBackground(4, 0);
		gotoxy(29, 7); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " SUBMERGED";
	menuNamebox(9, 11);
	SetColorAndBackground(4, 0);
		gotoxy(29, 10); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " RETURN";
	menuNamebox(12, 14);
	SetColorAndBackground(4, 0);
		gotoxy(29, 13); cout << " C ";

}


void grass()
{
	//LEAF-BASED MENU
	SetColorAndBackground(0, 14);
	gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
		 
	SetColorAndBackground(10, 0);
		gotoxy(12, 7); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 7); cout << " SEDGES";
	menuNamebox(6, 8);
	SetColorAndBackground(4, 0);
		gotoxy(29, 7); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " TRUE GRASS";
	menuNamebox(9, 11);
	SetColorAndBackground(4, 0);
		gotoxy(29, 10); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " OTHER";
	menuNamebox(12, 14);
	SetColorAndBackground(4, 0);
		gotoxy(29, 13); cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " RETURN";
	menuNamebox(15, 17);
	SetColorAndBackground(4, 0);
		gotoxy(29, 16); cout << " D ";
}

void orchids() 
{
	SetColorAndBackground(0, 14);
	gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ"; 
		cout << endl << endl;

	SetColorAndBackground(15, 0);
		gotoxy(10, 6); cout << "ÄÄÄÄÄÄ LEAF BLADE ÄÄÄÄÄÄÄ";
		gotoxy(20, 7); cout << "SHAPE";

	for (int a = 10; a <= 34; a++) {
		SetColorAndBackground(14, 0);
		gotoxy(a, 8);
			cout << "°";	//cout << "Ü";
	}

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " INDEX 1";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
				gotoxy(29, 10); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " INDEX 2";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
				gotoxy(29, 13); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " INDEX 3";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
				gotoxy(29, 16);cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 19);	cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 19); cout << " RETURN";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
				gotoxy(29, 19); cout << " D ";
}

void orchidsLeaf1() 
{
	SetColorAndBackground(0, 14);
	gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ"; 
		cout << endl << endl;

	SetColorAndBackground(15, 0);
		gotoxy(10, 6);cout << "ÄÄÄÄÄÄ LEAF BLADE ÄÄÄÄÄÄÄ";
		gotoxy(20, 7);cout << "SHAPE";

	for (int a = 10; a <= 34; a++) {
		SetColorAndBackground(14, 0);
		gotoxy(a, 8);
			cout << "°";//cout << "Ü";
	}

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " ELLIPTIC";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
				gotoxy(29, 10); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " LANCEOLATE";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
				gotoxy(29, 13); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " LINEAR";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
				gotoxy(29, 16); cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 19); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 19); cout << " RETURN";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
				gotoxy(29, 19); cout << " D ";
}


void orchidsLeaf2() 
{
	SetColorAndBackground(0, 14);
	gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ"; 
		cout << endl << endl;

	SetColorAndBackground(15, 0);
		gotoxy(10, 6); cout << "ÄÄÄÄÄÄ LEAF BLADE ÄÄÄÄÄÄÄ";
		gotoxy(20, 7); cout << "SHAPE";

	for (int a = 10; a <= 34; a++) {
		SetColorAndBackground(14, 0);
		gotoxy(a, 8);
			cout << "°"; //cout << "Ü";
	}

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " OBLANCEOLATE";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
				gotoxy(29, 10); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " OBLONG";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
				gotoxy(29, 13); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " OBOVATE";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
				gotoxy(29, 16); cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 19); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 19); cout << " RETURN";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
				gotoxy(29, 19); cout << " D ";
}

void orchidsLeaf3() 
{
	SetColorAndBackground(0, 14);
	gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
		cout << endl << endl;

	SetColorAndBackground(15, 0);
		gotoxy(10, 6); cout << "ÄÄÄÄÄÄ LEAF BLADE ÄÄÄÄÄÄÄ";
		gotoxy(20, 7); cout << "SHAPE";

	for (int a = 10; a <= 34; a++) {
		SetColorAndBackground(14, 0);
			gotoxy(a, 8); cout << "°"; //cout << "Ü";
	}

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " ORBICULAR";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
				gotoxy(29, 10); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " OVATE";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
				gotoxy(29, 13); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " OTHER";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
				gotoxy(29, 16); cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 19);cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 19); cout << " RETURN";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
				gotoxy(29, 19);	cout << " D ";
}


void trueferns() 
{
	SetColorAndBackground(0, 14);
	gotoxy(10, 4);
		cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ"; cout << endl << endl;

	SetColorAndBackground(15, 0);
		gotoxy(10, 6); cout << "ÄÄÄÄÄÄ LEAF BLADE ÄÄÄÄÄÄÄ";
		gotoxy(20, 7); cout << "SHAPE";

	for (int a = 10; a <= 34; a++) {
		SetColorAndBackground(14, 0);
		gotoxy(a, 8);
			cout << "°";	//cout << "Ü";
	}

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " INDEX 1";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
				gotoxy(29, 10); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " INDEX 2";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
				gotoxy(29, 13); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " RETURN";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
				gotoxy(29, 16);cout << " C ";

}


void fernsLeaf2() 
{
	SetColorAndBackground(0, 14);
	gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
		cout << endl << endl;

	SetColorAndBackground(15, 0);
		gotoxy(10, 6); cout << "ÄÄÄÄÄÄ LEAF BLADE ÄÄÄÄÄÄÄ";
		gotoxy(20, 7); cout << "SHAPE";

	for (int a = 10; a <= 34; a++) {
		SetColorAndBackground(14, 0);
			gotoxy(a, 8); cout << "°"; //cout << "Ü";
	}

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " OBLONG";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
				gotoxy(29, 10); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " OVATE";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
				gotoxy(29, 13); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " TRIANGLE";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
				gotoxy(29, 16); cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 19);cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 19); cout << " RETURN";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
				gotoxy(29, 19);	cout << " D ";
}


void nonwoody()
{
	//LEAF-BASED MENU
	SetColorAndBackground(0, 14);
	gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
		 
	SetColorAndBackground(10, 0);
		gotoxy(12, 7); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 7); cout << " ASTERACEAE";
	menuNamebox(6, 8);
	SetColorAndBackground(4, 0);
		gotoxy(29, 7); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " ALTERNATE";
	menuNamebox(9, 11);
	SetColorAndBackground(4, 0);
		gotoxy(29, 10); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " NO LEAVES";
	menuNamebox(12, 14);
	SetColorAndBackground(4, 0);
		gotoxy(29, 13); cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " RETURN";
	menuNamebox(15, 17);
	SetColorAndBackground(4, 0);
		gotoxy(29, 16); cout << " D ";
}


//EXOTIC MENU
void exoticPlantsList() //Indexes for House Plants
{
	SetColorAndBackground(0, 14);
		gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
			
	SetColorAndBackground(15, 0);
		gotoxy(10, 6); cout << "ÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄ";
		gotoxy(20, 7); cout << "INDEX";

	for (int a = 10; a <= 34; a++) {
		SetColorAndBackground(14, 0);
		gotoxy(a, 8);
			cout << "°";
	}

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " INDEX 1";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
			gotoxy(29, 10);
				cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " INDEX 2";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
			gotoxy(29, 13);
				cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " RETURN";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
			gotoxy(29, 16);
				cout << " C ";
}

void exoticIndex1()
{
	SetColorAndBackground(0, 14);
		gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";
		 
	SetColorAndBackground(10, 0);
		gotoxy(12, 7); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 7); cout << " ARACEAE";
			menuNamebox(6, 8);
			SetColorAndBackground(4, 0);
				gotoxy(29, 7);
					cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " BROMELIAD";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
				gotoxy(29, 10);
					cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " FERNS";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
				gotoxy(29, 13);
					cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " GINGER"; //ZINGIBERACEAE
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
				gotoxy(29, 16);
					cout << " D ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 19); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 19); cout << " HOYA";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
				gotoxy(29, 19);
					cout << " E ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 22); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 22); cout << " MEDINILLA";
			menuNamebox(21, 23);
			SetColorAndBackground(4, 0);
				gotoxy(29, 22);
					cout << " F ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 25); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 25); cout << " RETURN";
			menuNamebox(24, 26);
			SetColorAndBackground(4, 0);
				gotoxy(29, 25);
					cout << " G ";
					 
}


void exoticIndex2()
{
	SetColorAndBackground(0, 14);
		gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";
		 
	SetColorAndBackground(10, 0);
		gotoxy(12, 7); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 7); cout << " ORCHIDS";
			menuNamebox(6, 8);
			SetColorAndBackground(4, 0);
			gotoxy(29, 7);
				cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " PALMS";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
			gotoxy(29, 10);
				cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " PANDANACEA";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
			gotoxy(29, 13);
				cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " TREES &";
		gotoxy(13, 17); cout << " SHRUBS";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
			gotoxy(29, 16);
				cout << " D ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 19); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 19); cout << " VARIEGATED";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
			gotoxy(29, 19);
				cout << " E ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 22); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 22); cout << " VINES";
			menuNamebox(21, 23);
			SetColorAndBackground(4, 0);
			gotoxy(29, 22);
				cout << " F ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 25); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 25); cout << " RETURN";
			menuNamebox(24, 26);
			SetColorAndBackground(4, 0);
			gotoxy(29, 25);
				cout << " G ";
		
}


void araceae() //SUB MENU FOR ARACEAE
{
	//ARACEAE MENU
	SetColorAndBackground(0, 14);
		gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
		
	SetColorAndBackground(10, 0);
		gotoxy(12, 7); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 7);  cout<< " AGLAONEMA";
			menuNamebox(6, 8);
			SetColorAndBackground(4, 0);
			gotoxy(29, 7);
				cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " ALOCASIA";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
			gotoxy(29, 10);
				cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " ANTHURIUM";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
			gotoxy(29, 13);
				cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " AROIDS";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
			gotoxy(29, 16);
				cout << " D ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 19); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 19); cout << " SCHISMA-";
		gotoxy(13, 20); cout << " TOGLOTTIS";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
			gotoxy(29, 19);
				cout << " E ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 22); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 22); cout << " SPATHI-";
		gotoxy(13, 23); cout << " PHYLLUM";
			menuNamebox(21, 23);
			SetColorAndBackground(4, 0);
			gotoxy(29, 22);
				cout << " F ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 25); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 25); cout << " RETURN";
			menuNamebox(24, 26);
			SetColorAndBackground(4, 0);
			gotoxy(29, 25);
				cout << " G ";
				
}


void exoticferns() //SUB MENU FOR FERNS
{
	SetColorAndBackground(0, 14);
	gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
		 
	SetColorAndBackground(10, 0);
		gotoxy(12, 7); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 7); cout << " MUTANT";
			menuNamebox(6, 8);
			SetColorAndBackground(4, 0);
			gotoxy(29, 7); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " CYATHEACEAE";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
			gotoxy(29, 10); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " HETEROGONIUM";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
			gotoxy(29, 13); cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " MARATTIACEAE";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
			gotoxy(29, 16); cout << " D ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 19); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 19); cout << " SELAGINELLA";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
			gotoxy(29, 19); cout << " E ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 22); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 22); cout << " OTHER FERNS";
			menuNamebox(21, 23);
			SetColorAndBackground(4, 0);
			gotoxy(29, 22); cout << " F ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 25); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 25); cout << " RETURN";
			menuNamebox(24, 26);
			SetColorAndBackground(4, 0);
			gotoxy(29, 25); cout << " G ";
				 
}

void hoya() //SUB MENU FOR HOYA
{
	//HOYA MENU
	SetColorAndBackground(0, 14);
	gotoxy(10, 4);
		cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
		 
	SetColorAndBackground(10, 0);
		gotoxy(12, 7); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 7); cout << " DISCHIDIA";
			menuNamebox(6, 8);
			SetColorAndBackground(4, 0);
			gotoxy(29, 7); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " BUOTII";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
			gotoxy(29, 10); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " CAMPHORI-";
		gotoxy(13, 14); cout << " FOLIA";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
			gotoxy(29, 13); cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " CARNOSA";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
			gotoxy(29, 16); cout << " D ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 19); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 19); cout << " DARWINII";
			menuNamebox(18, 20);
			SetColorAndBackground(4, 0);
			gotoxy(29, 19); cout << " E ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 22); cout << "°";
	SetColorAndBackground(15, 0); 
		gotoxy(13, 22); cout << " INCRASSATA";
			menuNamebox(21, 23);
			SetColorAndBackground(4, 0);
			gotoxy(29, 22); cout << " F ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 25); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 25); cout << " RETURN";
			menuNamebox(24, 26);
			SetColorAndBackground(4, 0);
			gotoxy(29, 25); cout << " G "; 
}

void linksList()
{
	SetColorAndBackground(0, 14); 
		gotoxy(10, 4); cout << "ÄÄÄÄÄÄÄÄÄ LINKS ÄÄÄÄÄÄÄÄÄ";
	 
	SetColorAndBackground(10, 0);
		gotoxy(12, 7); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 7); cout << " HOUSE";
			menuNamebox(6, 8);
			SetColorAndBackground(4, 0);
			gotoxy(29, 7); cout << " A ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 10); cout << " EXOTIC";
			menuNamebox(9, 11);
			SetColorAndBackground(4, 0);
			gotoxy(29, 10); cout << " B ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 13); cout << " LEAF-BASED";
			menuNamebox(12, 14);
			SetColorAndBackground(4, 0);
			gotoxy(29, 13); cout << " C ";

	SetColorAndBackground(10, 0);
		gotoxy(12, 16); cout << "°";
	SetColorAndBackground(15, 0);
		gotoxy(13, 16); cout << " RETURN";
			menuNamebox(15, 17);
			SetColorAndBackground(4, 0);
			gotoxy(29, 16); cout << " D ";
}

void leafDrawBOX1() //Box for Leaf Illustrations Column 1
{
	SetColorAndBackground(15, 0);
	
	gotoxy(40, 22); cout << "Ú";
	gotoxy(40, 32); cout << "À";
	gotoxy(41, 22); cout << "Ä";
	gotoxy(41, 32); cout << "Ä";

	//right ]
	gotoxy(63, 22); cout << "¿";
	gotoxy(63, 32); cout << "Ù";
	gotoxy(62, 22); cout << "Ä";
	gotoxy(62, 32); cout << "Ä";

	for (int b = 23; b <= 31; b++) {
		//start for column
		gotoxy(40, b);	cout << "³";
		gotoxy(63, b); cout << "³";
	} //end for column
}

void leafDrawBOX2() //Box for Leaf Illustrations Column 12
{
	SetColorAndBackground(15, 0);

	gotoxy(66, 22); cout << "Ú";
	gotoxy(66, 32); cout << "À";
	gotoxy(67, 22); cout << "Ä";
	gotoxy(67, 32); cout << "Ä";

	//right ]
	gotoxy(89, 22); cout << "¿";
	gotoxy(89, 32); cout << "Ù";
	gotoxy(88, 22); cout << "Ä";
	gotoxy(88, 32); cout << "Ä";

	for (int b = 23; b <= 31; b++) {
		//start for column
		gotoxy(66, b);	cout << "³";
		gotoxy(89, b); cout << "³";
	} //end for column
}

void leafDrawBOX3() //Box for Leaf Illustrations Column 3
{
	SetColorAndBackground(15, 0);
	
	gotoxy(92, 22); cout << "Ú";
	gotoxy(92, 32); cout << "À";
	gotoxy(93, 22); cout << "Ä";
	gotoxy(93, 32); cout << "Ä";

	//right ]
	gotoxy(115, 22); cout << "¿";
	gotoxy(115, 32); cout << "Ù";
	gotoxy(114, 22); cout << "Ä";
	gotoxy(114, 32); cout << "Ä";

	for (int b = 23; b <= 31; b++) {
		//start for column
		gotoxy(92, b);	cout << "³";
		gotoxy(115, b); cout << "³";
	} //end for column
}


void leafShapeDrawing()
{
	//Entire
	SetColorAndBackground(10, 0);
	gotoxy(41, 22); cout << "          .         ";
	gotoxy(41, 23); cout << "        . . .       ";
	gotoxy(41, 24); cout << "       .  .  .      ";
	gotoxy(41, 25); cout << "      .   .   .     ";
	gotoxy(41, 26); cout << "     .    .    .    ";
	gotoxy(41, 27); cout << "    .  .  .  .  .   ";
	gotoxy(41, 28); cout << "    .   . . .   .	 ";
	gotoxy(41, 29); cout << "     .    .    .    ";
	gotoxy(41, 30); cout << "       .  .  .      ";
	gotoxy(41, 31); cout << "          .         ";
	gotoxy(41, 32); cout << "          .         ";

	//Toothed
	SetColorAndBackground(10, 0);
	gotoxy(67, 22); cout << "          .         ";
	gotoxy(67, 23); cout << "        . . .       ";
	gotoxy(67, 24); cout << "      . . . . .     ";
	gotoxy(67, 25); cout << "      .   .    .    ";
	gotoxy(67, 26); cout << "    . .   .    . .  ";
	gotoxy(67, 27); cout << "     .    .     .   ";
	gotoxy(67, 28); cout << "   . .    .	 . . ";
	gotoxy(67, 29); cout << "    . .   .    . .  ";
	gotoxy(67, 30); cout << "     .    .    .    ";
	gotoxy(67, 31); cout << "       . ... .      ";
	gotoxy(67, 32); cout << "          .         ";

	//Lobed
	SetColorAndBackground(10, 0);
	gotoxy(93, 22); cout << "         . .        ";
	gotoxy(93, 23); cout << "        . . .       ";
	gotoxy(93, 24); cout << "      .  . .  .     ";
	gotoxy(93, 25); cout << "     .    .    .    ";
	gotoxy(93, 26); cout << "       .  .   .     ";
	gotoxy(93, 27); cout << "      .   .   .     ";
	gotoxy(93, 28); cout << "    .     .     .	 ";
	gotoxy(93, 29); cout << "     .    .    .    ";
	gotoxy(93, 30); cout << "       .  .  .      ";
	gotoxy(93, 31); cout << "          .         ";
	gotoxy(93, 32); cout << "          .         ";
}

void leafShapeDrawing1()
{
	//Elliptic
	SetColorAndBackground(14, 0);
	gotoxy(41, 22); cout << "          .         ";
	gotoxy(41, 23); cout << "        . . .       ";
	gotoxy(41, 24); cout << "      .   .   .     ";
	gotoxy(41, 25); cout << "     .    .    .    ";
	gotoxy(41, 26); cout << "    .     .     .   ";
	gotoxy(41, 27); cout << "    .  .  .  .  .   ";
	gotoxy(41, 28); cout << "    .   . . .   .	 ";
	gotoxy(41, 29); cout << "     .    .    .    ";
	gotoxy(41, 30); cout << "       .  .  .      ";
	gotoxy(41, 31); cout << "          .         ";
	gotoxy(41, 32); cout << "          .         ";

	//Lanceolate
	SetColorAndBackground(14, 0);
	gotoxy(67, 22); cout << "          .         ";
	gotoxy(67, 23); cout << "        . . .       ";
	gotoxy(67, 24); cout << "       .  .  .      ";
	gotoxy(67, 25); cout << "      .   .   .     ";
	gotoxy(67, 26); cout << "     .    .    .    ";
	gotoxy(67, 27); cout << "    .     .     .   ";
	gotoxy(67, 28); cout << "   .      .      .	 ";
	gotoxy(67, 29); cout << "   .      .      .  ";
	gotoxy(67, 30); cout << "     .    .    .    ";
	gotoxy(67, 31); cout << "       .  .  .      ";
	gotoxy(67, 32); cout << "          .         ";

	//Linear
	SetColorAndBackground(14, 0);
	gotoxy(93, 22); cout << "          .        ";
	gotoxy(93, 23); cout << "        . . .      ";
	gotoxy(93, 24); cout << "       .  .  .     ";
	gotoxy(93, 25); cout << "       .  .  .     ";
	gotoxy(93, 26); cout << "       .  .  .     ";
	gotoxy(93, 27); cout << "       .  .  .     ";
	gotoxy(93, 28); cout << "       .  .  .	    ";
	gotoxy(93, 29); cout << "       .  .  .     ";
	gotoxy(93, 30); cout << "        . . .      ";
	gotoxy(93, 31); cout << "          .        ";
	gotoxy(93, 32); cout << "          .        ";

}


void leafShapeDrawing2()
{
	//Oblanceolate
	SetColorAndBackground(14, 0);
	gotoxy(41, 22); cout << "          .         ";
	gotoxy(41, 23); cout << "      .   .   .     ";
	gotoxy(41, 24); cout << "    .     .     .   ";
	gotoxy(41, 25); cout << "   .      .      .  ";
	gotoxy(41, 26); cout << "   .      .      .  ";
	gotoxy(41, 27); cout << "    .     .     .   ";
	gotoxy(41, 28); cout << "     .    .    .	 ";
	gotoxy(41, 29); cout << "       .  .  .      ";
	gotoxy(41, 30); cout << "        . . .       ";
	gotoxy(41, 31); cout << "          .         ";
	gotoxy(41, 32); cout << "          .         ";

	//Oblong
	SetColorAndBackground(14, 0);
	gotoxy(67, 22); cout << "         . .        ";
	gotoxy(67, 23); cout << "       .  .  .      ";
	gotoxy(67, 24); cout << "      .   .   .     ";
	gotoxy(67, 25); cout << "      .   .   .     ";
	gotoxy(67, 26); cout << "      .   .   .     ";
	gotoxy(67, 27); cout << "      .   .   .     ";
	gotoxy(67, 28); cout << "      .   .   .	 ";
	gotoxy(67, 29); cout << "      .   .   .     ";
	gotoxy(67, 30); cout << "       .  .  .      ";
	gotoxy(67, 31); cout << "          .         ";
	gotoxy(67, 32); cout << "          .         ";
	
	//Obovate
	SetColorAndBackground(14, 0);
	gotoxy(93, 22); cout << "       .  .  .      ";
	gotoxy(93, 23); cout << "    .     .     .   ";
	gotoxy(93, 24); cout << "   .      .      .  ";
	gotoxy(93, 25); cout << "  .       .       . ";
	gotoxy(93, 26); cout << "  .       .       . ";
	gotoxy(93, 27); cout << "   .      .      .  ";
	gotoxy(93, 28); cout << "    .     .     .	 ";
	gotoxy(93, 29); cout << "      .   .   .     ";
	gotoxy(93, 30); cout << "        . . .       ";
	gotoxy(93, 31); cout << "          .         ";
	gotoxy(93, 32); cout << "          .         ";
	
}

void leafShapeDrawing3()
{
	//Orbicular
	SetColorAndBackground(14, 0);
	gotoxy(41, 22); cout << "          .         ";
	gotoxy(41, 23); cout << "       .  .  .      ";
	gotoxy(41, 24); cout << "     .    .    .    ";
	gotoxy(41, 25); cout << "   .      .      .  ";
	gotoxy(41, 26); cout << "  .       .       . ";
	gotoxy(41, 27); cout << "  .       .       . ";
	gotoxy(41, 28); cout << "   .      .      .	 ";
	gotoxy(41, 29); cout << "     .    .    .    ";
	gotoxy(41, 30); cout << "       .  .  .      ";
	gotoxy(41, 31); cout << "          .         ";
	gotoxy(41, 32); cout << "          .         ";

	//Ovate
	SetColorAndBackground(14, 0);
	gotoxy(67, 22); cout << "          .         ";
	gotoxy(67, 23); cout << "        . . .       ";
	gotoxy(67, 24); cout << "       .  .  .      ";
	gotoxy(67, 25); cout << "      .   .   .     ";
	gotoxy(67, 26); cout << "     .    .    .    ";
	gotoxy(67, 27); cout << "    .     .     .   ";
	gotoxy(67, 28); cout << "   .      .     .	 ";
	gotoxy(67, 29); cout << "   .      .    .    ";
	gotoxy(67, 30); cout << "     .    .   .     ";
	gotoxy(67, 31); cout << "       .  . .       ";
	gotoxy(67, 32); cout << "          .         ";
}

void leafShapeDrawing4()
{
	//Oblong
	SetColorAndBackground(14, 0);
	gotoxy(41, 22); cout << "         . .        ";
	gotoxy(41, 23); cout << "       .  .  .      ";
	gotoxy(41, 24); cout << "      .   .   .     ";
	gotoxy(41, 25); cout << "      .   .   .     ";
	gotoxy(41, 26); cout << "      .   .   .     ";
	gotoxy(41, 27); cout << "      .   .   .     ";
	gotoxy(41, 28); cout << "      .   .   .	 ";
	gotoxy(41, 29); cout << "      .   .   .     ";
	gotoxy(41, 30); cout << "       .  .  .      ";
	gotoxy(41, 31); cout << "          .         ";
	gotoxy(41, 32); cout << "          .         ";

	//Ovate
	SetColorAndBackground(14, 0);
	gotoxy(67, 22); cout << "          .         ";
	gotoxy(67, 23); cout << "        . . .       ";
	gotoxy(67, 24); cout << "       .  .  .      ";
	gotoxy(67, 25); cout << "      .   .   .     ";
	gotoxy(67, 26); cout << "     .    .    .    ";
	gotoxy(67, 27); cout << "    .     .     .   ";
	gotoxy(67, 28); cout << "   .      .     .	 ";
	gotoxy(67, 29); cout << "   .      .    .    ";
	gotoxy(67, 30); cout << "     .    .   .     ";
	gotoxy(67, 31); cout << "       .  . .       ";
	gotoxy(67, 32); cout << "          .         ";

	//Triangular
	SetColorAndBackground(14, 0);
	gotoxy(93, 22); cout << "          .         ";
	gotoxy(93, 23); cout << "        . . .       ";
	gotoxy(93, 24); cout << "       .  .  .      ";
	gotoxy(93, 25); cout << "      .   .   .     ";
	gotoxy(93, 26); cout << "     .    .    .    ";
	gotoxy(93, 27); cout << "    .     .     .   ";
	gotoxy(93, 28); cout << "   .      .      .  ";
	gotoxy(93, 29); cout << "  .       .       . ";
	gotoxy(93, 30); cout << "   .   .  .  .   .  ";
	gotoxy(93, 31); cout << "          .         ";
	gotoxy(93, 32); cout << "          .         ";
}

//FRONT LEAF DRAWING 
void leafFrontDesign()
{
	SetColorAndBackground(14, 0);
	gotoxy(14, 13); cout << "    ÚÄ+Ä+Ä+Ä BASIC PLANT IDENTIFIER Ä+Ä+Ä+Ä¿";
	
	//Box
	gotoxy(18, 29);		cout << "À";
	gotoxy(57, 29);		cout << "Ù";
	for (int a = 19; a <= 56; a++) { //start for row
		gotoxy(a, 29);	cout << "Ä";
	} //end for row

	for (int b = 14; b <= 28; b++) { //start for column
		gotoxy(18, b);	cout << "³";
		gotoxy(57, b);	cout << "³";
	} //end for column

	
	SetColorAndBackground(114, 0); //114
	gotoxy(21, 16); cout << "°°";
	gotoxy(21, 17); cout << "°°°°";
	gotoxy(21, 18); cout << "°°°°°°";
	gotoxy(21, 19); cout << "°°°°°°°°";
	gotoxy(21, 20); cout << "°°°°°°°°°°";
	gotoxy(23, 21); cout << "°°°°°°°°°°";
	gotoxy(25, 22); cout << "°°°°°°°°°°";
	gotoxy(27, 23); cout << "°°°°°°°°°°°°°°";
	gotoxy(37, 24); cout << "°°";
	
	//right upper petal
	gotoxy(45, 16); cout << "°°°°°°°°°°";
	gotoxy(43, 17); cout << "°°°°°°°°°°";
	gotoxy(41, 18); cout << "°°°°°°°°°°";
	gotoxy(39, 19); cout << "°°°°°°°°°°";
	gotoxy(39, 20); cout << "°°°°°°°°";
	gotoxy(39, 21); cout << "°°°°°°";
	gotoxy(39, 22); cout << "°°°°";
	
	//stem
	SetColorAndBackground(10, 0); //106
	gotoxy(37, 25); cout << "°°";
	gotoxy(37, 26); cout << "°°";
	gotoxy(37, 27); cout << "°°";

	//light green
	gotoxy(23, 16); cout << "°°°°°°°°";
	gotoxy(25, 17); cout << "°°°°°°°°";
	gotoxy(27, 18); cout << "°°°°°°°°";
	gotoxy(29, 19); cout << "°°°°°°°°";
	gotoxy(31, 20); cout << "°°°°°°";
	gotoxy(33, 21); cout << "°°°°";
	gotoxy(35, 22); cout << "°°";
	gotoxy(41, 23); cout << "°°°°°°°°";

	//right lower petal
	gotoxy(53, 17); cout << "°°";
	gotoxy(51, 18); cout << "°°°°";
	gotoxy(49, 19); cout << "°°°°°°";
	gotoxy(47, 20); cout << "°°°°°°°°";
	gotoxy(45, 21); cout << "°°°°°°°°";
	gotoxy(43, 22); cout << "°°°°°°°°";
	gotoxy(41, 23); cout << "°°°°°°°°";

	SetColorAndBackground(6, 0);
	gotoxy(14, 30); cout << "         BORROMEO | ISIDRO | VILLA-VILLA";
}




//INFO FOR CATEGORIES
void mainInfo()
{
	outputheader();
	SetColorAndBackground(14, 0);
	gotoxy(70, 6); cout << "ÄÄÄÄÄÄÄ BASIC PLANT NAME IDENTIFIER ÄÄÄÄÄÄÄ"; //output header

	plantHeader(18);
	SetColorAndBackground(14, 0); gotoxy(44, 11); cout << "PLANT MENU PROGRAM";

	plantInfo(14);
	SetColorAndBackground(14, 0); gotoxy(44, 15); cout << "INFORMATION";

	boxInfo(26);
	gotoxy(43, 20); cout << "This program presents a plant menu that can help you identify many ";
	gotoxy(43, 21); cout << "plants species, and provide possible plant names according to the  ";
	gotoxy(43, 22); cout << "chosen category and characteristics included in the menu!";

	gotoxy(43, 24); cout << "Select the menu that you think best describes your plant! ";
}



void houseInfo() 
{
	plantHeader(12);
	SetColorAndBackground(14, 0); gotoxy(44, 11); cout << "HOUSE PLANTS";

	plantInfo(14);
	SetColorAndBackground(14, 0); gotoxy(44, 15); cout << "INFORMATION";

	boxInfo(27);
	gotoxy(43, 20); cout << "House Plants are plants perfect for growing within indoor locations ";
	gotoxy(43, 21); cout << "such as residences and offices, for various purposes. Indoor plants   ";
	gotoxy(43, 22); cout << "are popular for its decorative appeal that costs low efforts to keep.";

	gotoxy(43, 24); cout << "House plants can also provide health benefits and overall improve  ";
	gotoxy(43, 25); cout << "most environments it situates.";
}


void exoticInfo() 
{
	plantHeader(13);
	SetColorAndBackground(14, 0); gotoxy(44, 11);cout << "EXOTIC PLANTS";

	plantInfo(14);
	SetColorAndBackground(14, 0); gotoxy(44, 15); cout << "INFORMATION";

	boxInfo(27);
	gotoxy(43, 20); cout << "The term Exotic plants is often used to describe plant species that ";
	gotoxy(43, 21); cout << "have been, or are being, introduced in to parts of the world other  ";
	gotoxy(43, 22); cout << "than their documented range by humans, often as ornamental plants.";

	gotoxy(43, 24); cout << "Exotics are frequently utilized in the garden, but are also kept in  ";
	gotoxy(43, 25); cout << "greenhouses or as houseplants.";

}

void leafInfo()
{
	plantHeader(17);
	SetColorAndBackground(14, 0); gotoxy(44, 11); cout << "LEAF-BASED PLANTS";

	plantInfo(14);
	SetColorAndBackground(14, 0); gotoxy(44, 15); cout << "INFORMATION";

	boxInfo(26);
	gotoxy(43, 20); cout << "This plant category includes classifications based on some known";
	gotoxy(43, 21); cout << "characteristis relating to the plant's leaf!";

	gotoxy(43, 23); cout << "Select from the following category groups in the plant menu that ";
	gotoxy(43, 24); cout << "best describes your plant ";
}

void linksInfo()
{
	outputheader();
	SetColorAndBackground(14, 0);
	gotoxy(70, 6); cout << "ÄÄÄÄÄÄÄ BASIC PLANT NAME IDENTIFIER ÄÄÄÄÄÄÄ"; //output header

	plantHeader(15);
	SetColorAndBackground(14, 0); gotoxy(44, 11); cout << "LINK REFERENCES";

	plantInfo(14);
	SetColorAndBackground(14, 0); gotoxy(44, 15); cout << "INFORMATION";

	boxInfo(27);
	gotoxy(43, 20); cout << "This menu presents the references for the information provided in ";
	gotoxy(43, 21); cout << "the plant indexes, according to plant category and characteristis,";
	gotoxy(43, 22); cout << "which are verified and reliable sources.";

	gotoxy(43, 24); cout << "Select from the following category groups in the plant menu to";
	gotoxy(43, 25); cout << "view the corresponding links!";
}

void alphabetInstructions() //legend for the alphabet color availability
{
	SetColorAndBackground(15, 0);
	gotoxy(10, 6); cout << "ÄÄÄÄÄÄ AVAILABILITY ÄÄÄÄÄ";
	gotoxy(20, 7); cout << "LEGEND";

	for (int a = 10; a <= 34; a++) {
		SetColorAndBackground(14, 0);
		gotoxy(a, 8); cout << "°";
	}

	SetColorAndBackground(10, 0); gotoxy(12, 10); cout << "°";
	SetColorAndBackground(15, 0); gotoxy(13, 10); cout << " AVAILABLE";
		menuNamebox(9, 11);
		SetColorAndBackground(10, 0); gotoxy(28, 10); cout << "GREEN";

	SetColorAndBackground(10, 0); gotoxy(12, 13); cout << "°";
	SetColorAndBackground(15, 0); gotoxy(13, 13); cout << " UNAVAILABLE";
								  //gotoxy(13, 14); cout << " AVAILABLE";
		menuNamebox(12, 14);
		SetColorAndBackground(4, 0); gotoxy(29, 13); cout << "RED";

}

void prompt()
{
	SetColorAndBackground(14, 0); 
		gotoxy(12, 29); cout << "<PROMPT>:";
	SetColorAndBackground(15, 0);
		gotoxy(22, 29); cout << "'Enter' Key"; 
		gotoxy(12, 30); cout << "to Continue.........";
	SetColorAndBackground(14, 0);
		gotoxy(12, 34); cout << "<ENTER>: ";
	SetColorAndBackground(15, 0);
}
