/*Programmers for the Project:
	- Borromeo, Leila
	- Isidro, Aleli Anne
	- Villa-Vila, Princess

Plant Menu Program that lists possible plant names according to categories and characteristics */

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<Windows.h> // gotoxy function
#include<process.h>
#include<iomanip>
#include<string.h>
#include "Plant Functions_Borromeo_Isidro_Villa-Villa.h"

#define clrscr(); system("cls"); // clrscr command
typedef int INT;
typedef char CH;

using namespace std;

//MAIN PROGRAM
int main()
{
	CH user[50], next, categChoice, houseChoice, exoticChoice, leafChoice, mainchoice, prog, type, typeIndex, link;
	INT pass;
	system("cls");

	frontbox();
	//user login function
	do {
		frontbox(); userpass(); loginBox(); leafFrontDesign();
		SetColorAndBackground(15, 0); gotoxy(100, 16); cin >> user;
		SetColorAndBackground(15, 0); gotoxy(100, 23); cin >> pass;

		system("cls");
		if (pass == 1234) {
			frontbox(); userpass(); leafFrontDesign();
			for (int a = 87; a <= 116; a++) {
				SetColorAndBackground(14, 0); gotoxy(a, 14); cout << "°";
				SetColorAndBackground(14, 0); gotoxy(a, 25); cout << "°";
				SetColorAndBackground(15, 0); gotoxy(a, 15); cout << "Ä";
				SetColorAndBackground(15, 0); gotoxy(a, 24); cout << "Ä";
			}
			gotoxy(91, 18); cout << "Login Successful! ";
			gotoxy(91, 21); cout << "Welcome " << user << "!";

			do {
				gotoxy(82, 30); cout << "Please Enter 'E' To Continue... ";
				cin >> next;

				if (next != 'E') {
					system("cls");
					frontbox(); userpass(); leafFrontDesign();
					for (int a = 87; a <= 116; a++) {
						SetColorAndBackground(14, 0); gotoxy(a, 14); cout << "°";
						SetColorAndBackground(14, 0); gotoxy(a, 25); cout << "°";
						SetColorAndBackground(15, 0); gotoxy(a, 15); cout << "Ä";
						SetColorAndBackground(15, 0); gotoxy(a, 24); cout << "Ä";
					}
					gotoxy(91, 17); cout << "Value Invalid! ";
					gotoxy(91, 20); cout << "Unable to continue. ";
					gotoxy(91, 21); cout << "Please Try Again.";
				}
			} //end next do function
			while (next != 'E');
		}
		else {
			system("cls");
			frontbox(); userpass(); loginBox(); leafFrontDesign();
				gotoxy(82, 30); cout << "Invalid Entry. Please Try Again.";
		}
	} while (pass != 1234);


	//PLANT MENU PROGRAM
	do {
		system("cls");
		int u,d,ph,py,fy,sy;
		obsbox();
		menuList();
		mainInfo();
		menuInstructions();

		SetColorAndBackground(14, 0);
			gotoxy(12, 29); cout << "<NOTES>:";
		SetColorAndBackground(15, 0);
			gotoxy(21, 29); cout << "Select From";
			gotoxy(12, 30); cout << "Options A To E......";
		SetColorAndBackground(14, 0);
			gotoxy(12, 34); cout << "<ENTER>: ";
		SetColorAndBackground(15, 0);
			cin >> categChoice;

		switch (categChoice) {
		case 'A': //HOUSE PLANTS MAIN MENU
			do {
				system("cls");
				obsbox();
					housePlantsList();
					menuInstructions(); houseInfo();
				outputheader();
				SetColorAndBackground(14, 0); gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ PLANT CATEGORY ÄÄÄÄÄÄÄ"; //output header

				SetColorAndBackground(14, 0);
					gotoxy(12, 29); cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
					gotoxy(21, 29); cout << "Select From";
					gotoxy(12, 30); cout << "Options A To D......";
				SetColorAndBackground(14, 0);
					gotoxy(12, 34); cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> houseChoice;

		switch (houseChoice) {
		case 'A': //INDEX 1
			do {
				system("cls");
				obsbox();
					index1Menu();
					menuInstructions(); houseInfo();
				outputheader();
				SetColorAndBackground(14, 0); gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ PLANT CATEGORY ÄÄÄÄÄÄÄ"; //output header

				SetColorAndBackground(14, 0);
					gotoxy(12, 29); cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
					gotoxy(21, 29); cout << "Select From";
					gotoxy(12, 30); cout << "Options A To G......";
				SetColorAndBackground(14, 0);
					gotoxy(12, 34); cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> mainchoice;

				switch (mainchoice) {
				case 'A': //FLOWERING
					do {
					system("cls");
					obsbox();
					SetColorAndBackground(0, 14);
					gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";
							plantResultsMenu();
							menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(16);
							SetColorAndBackground(14, 0);
								gotoxy(44, 11); cout << "FLOWERING PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
								gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(27);

							SetColorAndBackground(15, 0);
							gotoxy(43, 20); cout << "The Flowering Plants are also known as Angiospermae or Magnoliophyta.";
							gotoxy(43, 21); cout << "From the word itself 'flowering', Flowering Plants produce flowers, ";
							gotoxy(43, 22); cout << "fruits, and seeds. ";

							gotoxy(43, 24); cout << "The colorfulness of these angiosperms brings wherever it is placed,";
							gotoxy(43, 25); cout << "an uplifting spirit that adds to the room’s aesthetic attractiveness. ";


					SetColorAndBackground(14, 0);
						gotoxy(12, 29); cout << "<NOTES>:";
					SetColorAndBackground(15, 0);
						gotoxy(21, 29); cout << "Select From";
						gotoxy(12, 30); cout << "Options A To B......";
					SetColorAndBackground(14, 0);
						gotoxy(12, 34); cout << "<ENTER>: ";
					SetColorAndBackground(15, 0);
						cin >> prog;

						switch (prog){
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";
								cout << endl << endl;

								plantResultsMenu();
								menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ FLOWERING PLANTS ÄÄÄÄÄÄÄ"; //output header
								cout << endl;

							plantEXCOL1(10); gotoxy(44, 11); cout << "Rose of China";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Flowering Maple";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Flamingo Flower";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Kaffir Lily";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Flaming Katy";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Lollipop Plant";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Bird Of Paradise";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Zebra Plant";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Moth Orchid";

							plantEXCOL1(22); gotoxy(44, 23); cout << "Florist Cyclamen";
							plantEXCOL2(22); gotoxy(70, 23); cout << "Pepper Plant";
							plantEXCOL3(22); gotoxy(96, 23); cout << "Madagascar Jasmine";

							plantEXCOL1(26); gotoxy(44, 27); cout << "Barberton Daisy";
							plantEXCOL2(26); gotoxy(70, 27); cout << "Poison Primrose";
							plantEXCOL3(26); gotoxy(96, 27); cout << "Eternal Flame";

							plantEXCOL1(30); gotoxy(44, 31); cout << "Corsage";
							plantEXCOL2(30); gotoxy(70, 31); cout << "Lycaste Orchid";
							plantEXCOL3(30); gotoxy(96, 31); cout << "Slipper Orchid";
							_getch();
							break;

						case 'B':
							_getch();
							break;

						default:
							system("cls");
							obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ FLOWERING PLANTS ÄÄÄÄÄÄÄ"; //output header
								cout << endl;

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 15); cout << "Value Entered Invalid...";

								menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;
				case 'B': //FOLIAGE
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
							gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(14);
						SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "FOLIAGE PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(28);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Foliage plants are plants considered to have decorative, colorful and";
						gotoxy(43, 21); cout << "interesting leaves. Such plants can create interesting garden spaces";
						gotoxy(43, 22); cout << "and can provide shade, color and cover for a range of needs.";
						gotoxy(43, 24); cout << "Using foliage plants can provide long-lasting benefits such as ";
						gotoxy(43, 25); cout << "ongoing decorative appeal, longer term shading or cover and, can ";
						gotoxy(43, 26); cout << "even provide greater air quality.  ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ FOLIAGE PLANTS ÄÄÄÄÄÄÄ"; //output header
								cout << endl;

							plantEXCOL1(10); gotoxy(44, 11); cout << "Aluminum Plant";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Cast Iron Plan";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Chinese Evergreen";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Croton 'Variegated'";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Dumb Cane";
							plantEXCOL3(14); gotoxy(96, 15); cout << "European Fan Palm";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Golden Pothos";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Kentia Palm";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Lucky Bamboo";

							plantEXCOL1(22); gotoxy(44, 23); cout << "Dracaena Marginata";
							plantEXCOL2(22); gotoxy(70, 23); cout << "Panda Plant";
							plantEXCOL3(22); gotoxy(96, 23); cout << "Panda Plant";

							plantEXCOL1(26); gotoxy(44, 27); cout << "Braided Money Tree";
							plantEXCOL2(26); gotoxy(70, 27); cout << "Zebra Plant";
							plantEXCOL3(26); gotoxy(96, 27); cout << "Wandering Jew";

							plantEXCOL1(30); gotoxy(44, 31); cout << "Watermelon Peperomia";
							plantEXCOL2(30); gotoxy(70, 31); cout << "Calathea Roseopicta";
							plantEXCOL3(30); gotoxy(96, 31); cout << "Bird's Nest Fern";
							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();
							outputheader();

							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ FOLIAGE PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

				case 'C'://CACTUS
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
							gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(13);
						SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "CACTUS PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(28);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Cactus plants describe a type of desert plant that has thick, leafless";
						gotoxy(43, 21); cout << "stems covered in prickly spines or sharp spikes. They are able to ";
						gotoxy(43, 22); cout << "thrive in dry climates because they store water in their stems. ";

						gotoxy(43, 24); cout << "Some large cactus species can store an impressive amount of water, ";
						gotoxy(43, 25); cout << "such as a fully-grown Saguaro that is able to hold as much as 200 ";
						gotoxy(43, 26); cout << "gallons of water after a substantial amount of rainfall. ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ CACTUS PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Rat's Tail";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Peruvian Apple";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Bunny Ears";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Schlumbergera Bridgesii";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Easter Cactus";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Orchid";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Golden Barrel Cactus";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Old Lady Cactus";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Star Cactus";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ CACTUS PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

				case 'D'://SUCCULENT
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
							gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(16);
						SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "SUCCULENT PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(28);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Succulents are a group of plants that store water in their leaves. ";
						gotoxy(43, 21); cout << "The leaves tend to be thick and fleshy, but some varieties have";
						gotoxy(43, 22); cout << "thicker leaves than others. ";

						gotoxy(43, 24); cout << "They also tend to thrive in dry climates and don't like a lot of ";
						gotoxy(43, 25); cout << "humidity. Extremes in temperature as well as lack of water or sunlight ";
						gotoxy(43, 26); cout << "can often result in a color change for succulents. ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ SUCCULENT PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Aloe Vera";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Coral Cactus";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Kaffir Lily";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Jade Plant";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Sansevieria T";
							plantEXCOL3(14); gotoxy(96, 15); cout << "B. Daigremontianum";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Panda Plant";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Donkeys Tail Plant";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Zebra/Attenuata";

							plantEXCOL1(22); gotoxy(44, 23); cout << "Tiger Jaws";
							plantEXCOL2(22); gotoxy(70, 23); cout << "Housetree Leek";
							plantEXCOL3(22); gotoxy(96, 23); cout << "Jelly Beans";

							plantEXCOL1(26); gotoxy(44, 27); cout << "Christmas Cheer";
							plantEXCOL2(26); gotoxy(70, 27); cout << "Truncate";
							plantEXCOL3(26); gotoxy(96, 27); cout << "Lithops Fulleri";

							plantEXCOL1(30); gotoxy(44, 31); cout << "Century Plant";
							plantEXCOL2(30); gotoxy(70, 31); cout << "Argyroderma testiculare";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ SUCCULENT PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

								menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

				case 'E'://HANGING
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
							gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(14);
						SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "HANGING PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(27);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Hanging plants are plants that grows downwards or hangs, often from a";
						gotoxy(43, 21); cout << "hanging basket or a high surface. These plants are suspended in air";
						gotoxy(43, 22); cout << "to make use of vertical space on a porch, windows, patio, or gardens.";

						gotoxy(43, 24); cout << "Some species are better adapted than others for this purpose, ";
						gotoxy(43, 25); cout << "especially those that have cascading foliage.";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ HANGING PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Spider Plant";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Donkeys Tail Plant";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Boston Fern";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Rabbit's Foo";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Rat's Tail";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Air Plant";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Wandering Jew";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Creeping Fig";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ HANGING PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

				case 'F'://TRAILING
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
							gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(15);
						SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "TRAILING PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(28);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Trailing plants have long, trailing stems, typically hung from the";
						gotoxy(43, 21); cout << "ceiling or sat on a shelf; enabling their stems to cascade down for";
						gotoxy(43, 22); cout << "dramatic effect. The plant also trail along grounds or out of pots";

						gotoxy(43, 24); cout << "Having trailing house plants in this way adds depth and interest to";
						gotoxy(43, 25); cout << "your house plant displays, adding height and mellowness to the  ";
						gotoxy(43, 26); cout << "display area";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ TRAILING PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Swiss Cheese Plant";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Donkeys Tail Plant";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Heartleaf";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Golden Pothos";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Arrowhead Plant";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Creeping Fig";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ TRAILING PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;
				case 'G':
					_getch();
					break;
				default:
					system("cls");
					obsbox(); index1Menu();
					SetColorAndBackground(0, 14);
					gotoxy(10, 4);
						cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

					outputheader(); prompt();
					SetColorAndBackground(15, 0);
					gotoxy(80, 6);
						cout << "ÄÄÄÄÄÄÄ PLANT INDEX ÄÄÄÄÄÄÄ"; //output header

					plantHeader(15);
					gotoxy(44, 11); cout << "INVALID COMMAND";
					gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";

						menuInstructions();
					_getch();
					break;
				} //end switch menu index 1

			} //end do while menu index 1
			while (mainchoice == 'A' || mainchoice == 'B' || mainchoice == 'C' ||
				mainchoice == 'D' || mainchoice == 'E' || mainchoice == 'F' || mainchoice != 'G');
			_getch();
			break;


		case 'B': //INDEX 2
			do {
				system("cls");
				obsbox();
					index2Menu();
					menuInstructions(); houseInfo();
				outputheader();
				SetColorAndBackground(14, 0);
					gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ PLANT CATEGORY ÄÄÄÄÄÄÄ"; //output header

				SetColorAndBackground(14, 0);
					gotoxy(12, 29); cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
					gotoxy(21, 29); cout << "Select From";
					gotoxy(12, 30); cout << "Options A To G......";
				SetColorAndBackground(14, 0);
					gotoxy(12, 34); cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> mainchoice;

				switch (mainchoice) {
				case 'A': //FERNS
					do {
						system("cls");
						obsbox();
						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";
								plantResultsMenu();
								menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(11);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11);
							cout << "FERN PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15);
							cout << "INFORMATION";

						boxInfo(27);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Ferns are plants that do not have flowers. Ferns mostly reproduce ";
						gotoxy(43, 21); cout << "by producing spores. Similar to flowering plants, ferns have roots,";
						gotoxy(43, 22); cout << "stems and leaves. ";

						gotoxy(43, 24); cout << "However, unlike flowering plants, ferns do not have flowers or seeds;";
						gotoxy(43, 25); cout << "instead, they usually reproduce sexually by tiny spores. ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ FERN PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Birds Nest";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Boston Fern";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Cretan Brake";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Maidenhair Fern";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Rabbit's Foot";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ FERN PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;
				case 'B': //PALMS
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(11);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11);
							cout << "PALM PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15);
							cout << "INFORMATION";

						boxInfo(28);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Palm plants have exotic and boldly textured foliage. They are usually ";
						gotoxy(43, 21); cout << "large enough to really catch the eye and their feathered leaves give";
						gotoxy(43, 22); cout << "an impressive display of leafage. ";

						gotoxy(43, 24); cout << "Furthermore, they also lend a bold, tropical look to home interiors ";
						gotoxy(43, 25); cout << "and can survive in the same conditions that humans find comfortable: ";
						gotoxy(43, 26); cout << "warm temperatures, average humidity, and moderate light.";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ PALM PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Parlor Palm";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Kentia Palm";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Sentry Palm";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Pygmy Date";
							plantEXCOL2(14); gotoxy(70, 15); cout << "European Fan";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Lady Palm";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Areca Palm";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Sago Palm";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Phoenix Canariensis";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ PALM PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

				case 'C'://BULBOUS
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11);
							cout << "BULBOUS PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15);
							cout << "INFORMATION";

						boxInfo(27);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Bulbous plants, also known as ornamental bulbs or simply bulbs, are ";
						gotoxy(43, 21); cout << "herbaceous perennials made use for ornamental purposes. ";

						gotoxy(43, 23); cout << "These have specialized underground stem structure that overcome un-";
						gotoxy(43, 24); cout << "favorable environmental conditions. Bulbous plants are found primarily ";
						gotoxy(43, 25); cout << "in hot, dry regions, where during rainy seasons they are predominant ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ BULBOUS PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Amaryllis";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Beach Spider Lily";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Belladonna Lily";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Busy Lizzie";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Calla Lily";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Heart Of Jesus";

							plantEXCOL1(18); gotoxy(44, 19); cout << "False Shamrock Plant";

							_getch();
							break;
						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ BULBOUS PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

				case 'D'://COMMON
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(13);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11);
							cout << "COMMON PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15);
							cout << "INFORMATION";

						boxInfo(28);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Common Plants refer to the popular plants many people take care of.";
						gotoxy(43, 21); cout << "These plants are popular as one, they are attractive, and two, they ";
						gotoxy(43, 22); cout << "are easy to grow. ";

						gotoxy(43, 24); cout << "Common house plants provide us with a huge range of sizes, shapes, ";
						gotoxy(43, 25); cout << "and textures to choose from. Many plants can be included in this  ";
						gotoxy(43, 26); cout << "criteria, that it is difficult to name just a few";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ COMMON PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Spider Plant";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Aloe Vera";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Peace Lily";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Jade Plant";
							plantEXCOL2(14); gotoxy(70, 15); cout << "African Violet";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Weeping Fig";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Baby Rubber Plant";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4);cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(80, 6);cout << "ÄÄÄÄÄÄÄ COMMON PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

				case 'E'://UNUSUAL
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11);
							cout << "UNUSUAL PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15);
							cout << "INFORMATION";

						boxInfo(27);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Unusual Plants are unique interesting plants that can grab attention. ";
						gotoxy(43, 21); cout << "These plants do not sometimes have an unusual shapes, colors, or odors";

						gotoxy(43, 23); cout << "Growing some of these interesting plants will create a great talking ";
						gotoxy(43, 24); cout << "piece in your garden or home. You can grow wacky flowers, and strange ";
						gotoxy(43, 25); cout << "fruits and vegetables";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ UNUSUAL PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Coral Cactus";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Urn Plant";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Medusa's Head";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Goats Horn Cactus";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Paphiopedilum";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Flaming Sword";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Coral Bead Plant";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Elephant's Ear";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Venus Fly Trap";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							 gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ UNUSUAL PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

				case 'F'://CHRISTMAS
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(16);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11);
							cout << "CHRISTMAS PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15);
							cout << "INFORMATION";

						boxInfo(28);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Christmas Plants are holiday plants that are usually tropical. These ";
						gotoxy(43, 21); cout << "plants require the tender care similar to a houseplant, rather than ";
						gotoxy(43, 22); cout << "plants that are meant for cold snows and blizzards";

						gotoxy(43, 24); cout << "Christmas plants need a location maintaining consistent temperatures.";
						gotoxy(43, 25); cout << "These plants do not do well with a lot of fluctuation, and also do ";
						gotoxy(43, 26); cout << "not require a lot of water.";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ CHRISTMAS PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Poinsettia";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Holly Trees";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Christmas Rose";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Amaryllis";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Phalaenopsis Orchid";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Christmas Cactus";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Rosemary";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Paperwhites";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Cyclamen";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ CHRISTMAS PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;
				case 'G':
					_getch();
					break;
				default:
					system("cls");
					obsbox(); index2Menu();
					SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

					outputheader(); prompt();
					SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX ÄÄÄÄÄÄÄ"; //output header

					plantHeader(15);
					gotoxy(44, 11); cout << "INVALID COMMAND";
					gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";

					menuInstructions();
					_getch();
					break;
				} //end switch menu index 2
			} //end do while menu index 2
			while (mainchoice == 'A' || mainchoice == 'B' || mainchoice == 'C' ||
				mainchoice == 'D' || mainchoice == 'E' || mainchoice == 'F' || mainchoice != 'G');
			_getch();
			break;

		case 'C': //INDEX 3
			do {
				system("cls");
				obsbox();
					index3Menu();
					menuInstructions(); houseInfo();
				outputheader();
				SetColorAndBackground(14, 0);
				gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ PLANT CATEGORY ÄÄÄÄÄÄÄ"; //output header

				SetColorAndBackground(14, 0);
					gotoxy(12, 29); cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
					gotoxy(21, 29); cout << "Select From";
					gotoxy(12, 30); cout << "Options A To G......";
				SetColorAndBackground(14, 0);
					gotoxy(12, 34); cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> mainchoice;

				switch (mainchoice) {
				case 'A': //OFFICE TYPE
					do {
						system("cls");
						obsbox();
						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(18);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11);
							cout << "OFFICE TYPE PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15);
							cout << "INFORMATION";

						boxInfo(27);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Office Type Plants are usually small plants found as decorations in ";
						gotoxy(43, 21); cout << "office areas. These plants can help improve work environment, sharpen ";
						gotoxy(43, 22); cout << "focus, improve health and purify the air. ";

						gotoxy(43, 24); cout << "Having a plant in a room for just one day can remove up to 87% of ";
						gotoxy(43, 25); cout << "toxins, and can enhance the flow of energy in the room";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6);
								cout << "ÄÄÄÄÄÄÄ OFFICE TYPE PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Lucky Bamboo";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Dragon Tree";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Peace Lily";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Kentia Palm";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Bunny Ear Cactus";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Jade/Money Plant";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ OFFICE TYPE PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;
				case 'B': //TREE TYPE
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(16);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11);
							cout << "TREE TYPE PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15);
							cout << "INFORMATION";

						boxInfo(27);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Tree Type Plants refer to compact tree-like plants that fits indoor.  ";
						gotoxy(43, 21); cout << "The roots can vary according to the kind of tree variety; they may ";
						gotoxy(43, 22); cout << "grow very deep, or shallow but spread out largely. ";

						gotoxy(43, 24); cout << "Indoor trees usually tolerate low lighting conditions but usually ";
						gotoxy(43, 25); cout << "thrive in bright light. ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6);
								cout << "ÄÄÄÄÄÄÄ TREE TYPE PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Dragon Tree";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Fiddle Leaf Fig";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Fortune Tree";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Rubber Plant";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Kentia Palm";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Weeping Fig";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Umbrella Tree";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ TREE TYPE PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

				case 'C'://STONE TYPE
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(17);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11);
							cout << "STONE TYPE PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15);
							cout << "INFORMATION";

						boxInfo(28);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Stone or Pebble Plants came from the Aizoaceae plant family. These ";
						gotoxy(43, 21); cout << "types of plants have distinct stone and pebble like appearance, and";
						gotoxy(43, 22); cout << "hug the ground and grow extremely slowly. ";

						gotoxy(43, 24); cout << "Plants within this genus generally consist of a pair of thick leaves ";
						gotoxy(43, 25); cout << "with little if any stem above the soil. Beneath the soil is the stem ";
						gotoxy(43, 26); cout << "and fairly long roots ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6);
								cout << "ÄÄÄÄÄÄÄ STONE TYPE PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Argyroderma testiculare";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Lithops fulleri";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Lithops optica 'Rubra'";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Lithops pseudotruncatella";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Conophytum ficiforme";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ STONE TYPE PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

				case 'D'://LARGE TYPE
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
						cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(17);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11);
							cout << "LARGE TYPE PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15);
							cout << "INFORMATION";

						boxInfo(24);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Large Type Plants are known for its general larger size compared to ";
						gotoxy(43, 21); cout << "other types of plants. These plants grow taller than most or simply  ";
						gotoxy(43, 22); cout << "have larger and attractive leaves perfect for decoration.";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6);
								cout << "ÄÄÄÄÄÄÄ LARGE TYPE PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Kentia Palm";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Heartleaf Philodendron";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Zebra Plant";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Pachira aquatica";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Dumb Cane";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Cast Iron Plant";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Swiss Cheese Plant";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Bird's Nest Ferns";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Rubber Plant";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LARGE TYPE PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

				case 'E'://LOW LIGHT
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(16);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11);
							cout << "LOW LIGHT PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15);
							cout << "INFORMATION";

						boxInfo(24);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Low light houseplants are plants that can grow and survive well in ";
						gotoxy(43, 21); cout << "low light. Unlike other indoor plants, they do not require much";
						gotoxy(43, 22); cout << "sunlight, so they can be placed almost anywhere. ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29);cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29);cout << "Select From";
							gotoxy(12, 30);cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34);cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6);
								cout << "ÄÄÄÄÄÄÄ LOW LIGHT PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Cast Iron Plant";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Corn Plant";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Sansevieria T";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Dragon Tree";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Parlor Palm";
							plantEXCOL3(14); gotoxy(96, 15); cout << "ZZ Plant";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Lucky Bamboo Plant";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Spider Plant";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Peace Lily";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LOW LIGHT PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

				case 'F':
					_getch();
					break;
				default:
					system("cls");
					obsbox(); index3Menu();
					SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

					outputheader(); prompt();
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX ÄÄÄÄÄÄÄ"; //output header

					plantHeader(15);
					gotoxy(44, 11); cout << "INVALID COMMAND";
					gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";

					menuInstructions();
					_getch();
					break;
				} //end switch menu index 3
			} //end do while menu index 3
			while (mainchoice == 'A' || mainchoice == 'B' || mainchoice == 'C' ||
				mainchoice == 'D' || mainchoice == 'E' || mainchoice != 'F');
			_getch();
			break;

		case'D':
			system("cls");
			obsbox();
				housePlantsList();
				menuInstructions(); prompt();
			outputheader();
			SetColorAndBackground(14, 0); gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

			plantHeader(14);
			SetColorAndBackground(14, 0); gotoxy(44, 11); cout << "RETURN COMMAND";
			SetColorAndBackground(15, 0); gotoxy(41, 13); cout << "Please press 'Enter' again to proceed...";
			SetColorAndBackground(15, 0); gotoxy(41, 17); cout << "This will only take a moment. Returning to Plant Main Menu...";
			_getch();
			break;
		default:
			system("cls");
			obsbox(); housePlantsList(); prompt();
			SetColorAndBackground(0, 14);
				gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";

			outputheader(); prompt();
			gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ HOUSE PLANTS ÄÄÄÄÄÄÄ"; //output header

			plantHeader(15);
			gotoxy(44, 11); cout << "INVALID COMMAND";
			gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";

			menuInstructions();
			_getch();
			break;

			} //end switch House Plants
		} //end do while menu House Plants
		while (houseChoice == 'A' || houseChoice == 'B' || houseChoice == 'C' || houseChoice != 'D');
			_getch();
			break;

		//LEILA & ALELI
		case 'B': //EXOTIC PLANTS MAIN MENU
			do {
				system("cls");
				obsbox();
					exoticPlantsList();
					menuInstructions();	exoticInfo();
				outputheader();
				SetColorAndBackground(14, 0);
				gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ PLANT CATEGORY ÄÄÄÄÄÄÄ"; //output header

				SetColorAndBackground(14, 0);
					gotoxy(12, 29); cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
					gotoxy(21, 29); cout << "Select From";
					gotoxy(12, 30); cout << "Options A To C......";
				SetColorAndBackground(14, 0);
					gotoxy(12, 34); cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> exoticChoice;

		switch (exoticChoice) {
		case 'A': //INDEX 1
			do {
				system("cls");
				obsbox();
					exoticIndex1();
					menuInstructions(); exoticInfo();
				outputheader();
				SetColorAndBackground(14, 0);
					gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ PLANT CATEGORY ÄÄÄÄÄÄÄ"; //output header

				SetColorAndBackground(14, 0);
					gotoxy(12, 29); cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
					gotoxy(21, 29); cout << "Select From";
					gotoxy(12, 30); cout << "Options A To G......";
				SetColorAndBackground(14, 0);
					gotoxy(12, 34); cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> mainchoice;


				switch (mainchoice) {
				case 'A': //ARACEAE
					do {
					system("cls");
					obsbox();

					SetColorAndBackground(0, 14);
					gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							araceae();
							menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "ARACEAE PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(27);

							SetColorAndBackground(15, 0);			//INFO ABOUT ARACEAE PLANTS
							gotoxy(43, 20); cout << "Araceae is a family of monocotyledonous flowering plants in which ";
							gotoxy(43, 21); cout << "flowers are borne on a type of inflorescence called a spadix.";

							gotoxy(43, 24); cout << "The leaves are alternate, simple or compound, petiolate, sometimes ";
							gotoxy(43, 25); cout << "very large, and usually with a sheathing base. The Araceae consist ";
							gotoxy(43, 26); cout << "of terrestrial or aquatic shrubs, vines, or herbs.";

					SetColorAndBackground(14, 0);
						gotoxy(12, 29); cout << "<NOTES>:";
					SetColorAndBackground(15, 0);
						gotoxy(21, 29); cout << "Select From";
						gotoxy(12, 30); cout << "Options A To G......";
					SetColorAndBackground(14, 0);
						gotoxy(12, 34); cout << "<ENTER>: ";
					SetColorAndBackground(15, 0);
						cin >> prog;

						switch (prog){
						case 'A': //Aglaonema
							do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(16);								//CHANGE NUMBER BASED SA NUMBER OF CHARACTERS NUNG IC-COUT (AGLAONEMA PLANTS = 16)
							SetColorAndBackground(14, 0);
								gotoxy(44, 11); cout << "AGLAONEMA PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
								gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT AGLAONEMA
							gotoxy(43, 20); cout << "Aglaonema is a genus of about 40 species of foliage plants in the";
							gotoxy(43, 21); cout << "family Araceae,sometimes called 'Chinese evergreen' These are.";
							gotoxy(43, 22); cout << "native to the tropical swamps and rainforests of southeastern Asia";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
											gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ AGLAONEMA PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Cast Iron Plant";
										plantEXCOL2(10); gotoxy(70, 11); cout << "Corn Plant";
										plantEXCOL3(10); gotoxy(96, 11); cout << "Sansevieria T";

										plantEXCOL1(14); gotoxy(44, 15); cout << "Dragon Tree";
										plantEXCOL2(14); gotoxy(70, 15); cout << "Parlor Palm";
										plantEXCOL3(14); gotoxy(96, 15); cout << "ZZ Plant";

										_getch();
										break;

								case 'B':
										_getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
											gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
											gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ AGLAONEMA PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;

						case 'B': //Alocasia
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(16);
							SetColorAndBackground(14, 0);
								gotoxy(44, 11); cout << "ALOCASIA PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
								gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT ALOCASIA
							gotoxy(43, 20); cout << "Alocasia is an unusual looking houseplant that produces flowers ";
							gotoxy(43, 21); cout << "occassionally. When it comes to Alocasia's appearance, it's all ";
							gotoxy(43, 22); cout << "about the unusual and unique alien looking leaves. ";
							gotoxy(43, 23); cout << "They are sometimes known as the Elephant Ear or African mask plant.";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
											gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
											gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ ALOCASIA PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Alocasia Zebrina";
										plantEXCOL2(10); gotoxy(70, 11); cout << "Alocasia Stingray";
										plantEXCOL3(10); gotoxy(96, 11); cout << "Alocasia Odora";

										plantEXCOL1(14); gotoxy(44, 15); cout << "Alocasia Amazonica";
										plantEXCOL2(14); gotoxy(70, 15); cout << "Black Velvet";
										plantEXCOL3(14); gotoxy(96, 15); cout << "Dragon Scale";

										plantEXCOL1(18); gotoxy(44, 19); cout << "Giant Taro";
										plantEXCOL2(18); gotoxy(70, 19); cout << "New Guinea Shield";
										plantEXCOL3(18); gotoxy(96, 19); cout << "Alocasia Cucullata";

										plantEXCOL1(22); gotoxy(44, 23); cout << "Silver Dragon";
										plantEXCOL2(22); gotoxy(70, 23); cout << "Red Secret";
										plantEXCOL3(22); gotoxy(96, 23); cout << "Alocasia longiloba";

										_getch();
										break;

								case 'B':
										_getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
											gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
											gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ ALOCASIA PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'C': //ANTHURIUM
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(16);
							SetColorAndBackground(14, 0);
								gotoxy(44, 11); cout << "ANTHURIUM PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
								gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT ANTHURIUM
							gotoxy(43, 20); cout << "Anthuriums are widely grown for the florist trade for their showy, ";
							gotoxy(43, 21); cout << "long-lasting blossoms, which consist of colourful leathery, shiny ";
							gotoxy(43, 22); cout << "spathes surrounding or subtending a central rodlike spadix that ";
							gotoxy(43, 23); cout << "bears numerous tiny bisexual flowers.";


							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
											gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
											gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ ANTHURIUM PLANTS ÄÄÄÄÄÄÄ"; //output header

															//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Painter's Palette";
										plantEXCOL2(10); gotoxy(70, 11); cout << "Flamingo Flower";
										plantEXCOL3(10); gotoxy(96, 11); cout << "Anthurium Hookeri";

										plantEXCOL1(14); gotoxy(44, 15); cout << "Anthurium Superbum";
										plantEXCOL2(14); gotoxy(70, 15); cout << "Velvet Cardboard";
										plantEXCOL3(14); gotoxy(96, 15); cout << "Ace of Spades";

										plantEXCOL1(18); gotoxy(44, 19); cout << "King Anthurium";
										plantEXCOL2(18); gotoxy(70, 19); cout << "Queen Anthurium";
										plantEXCOL3(18); gotoxy(96, 19); cout << "Anthurium Forgetii";

										plantEXCOL1(22); gotoxy(44, 23); cout << "Black Anthurium";
										plantEXCOL2(22); gotoxy(70, 23); cout << "Anthurium Magnificu";
										plantEXCOL3(22); gotoxy(96, 23); cout << "Big Red Bird ";

                                        plantEXCOL1(26); gotoxy(44, 27); cout << "Pearl Laceleaf";

										_getch();
										break;

								case 'B':
										_getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
											gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
											gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ ANTHURIUM PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'D': //AROIDS
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(16);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "AROID PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT AROIDS
							gotoxy(43, 20); cout << "The sometimes beautiful and sometimes bizarre combination of spathe ";
							gotoxy(43, 21); cout << "and spadix known as the inflorescence, and sometimes referred to as ";
							gotoxy(43, 22); cout << "the 'flower', is a distinguishing feature of all aroids.";


							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
											gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
											gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ AROID PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Philodendron";
										plantEXCOL2(10); gotoxy(70, 11); cout << "Arum Lilies";
										plantEXCOL3(10); gotoxy(96, 11); cout << "Peace Lily";

										plantEXCOL1(14); gotoxy(44, 15); cout << "Devil's Ivy";
										plantEXCOL2(14); gotoxy(70, 15); cout << "Caladium";
										plantEXCOL3(14); gotoxy(96, 15); cout << "Dumb Canes";

										plantEXCOL1(18); gotoxy(44, 19); cout << "Calla Lily";
										plantEXCOL2(18); gotoxy(70, 19); cout << "Titan Arum";
										plantEXCOL3(18); gotoxy(96, 19); cout << "Syngonium";

										plantEXCOL1(22); gotoxy(44, 23); cout << "Konjac";
										plantEXCOL2(22); gotoxy(70, 23); cout << "Bog Arum";
										plantEXCOL3(22); gotoxy(96, 23); cout << "Zaminkand";

                                        plantEXCOL1(26); gotoxy(44, 27); cout << "Duckweeds";
                                        plantEXCOL2(26); gotoxy(70, 27); cout << "Homalomena";
										plantEXCOL3(26); gotoxy(96, 27); cout << "Amidrium";

										_getch();
										break;

								case 'B':
										_getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ AROID PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'E': //Schismatoglottis
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(23);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "SCHISMATOGLOTTIS PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT SCHISMATOGLOTTIS
							gotoxy(43, 20); cout << "Schismatoglottis are found primarily in tropical parts of Asia.";
							gotoxy(43, 21); cout << "Members of the genus are similar in appearance and growth habit ";
							gotoxy(43, 22); cout << "to those of the genus Homalomena, but the two genera aren't related.";
                            gotoxy(43, 23); cout << "Naturally, this plant grows in damp soil and along stream banks.";


							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
											gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
											gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ SCHISMATOGLOTTIS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "S. Acutifolia";
										plantEXCOL2(10); gotoxy(70, 11); cout << "S. Adoceta";
										plantEXCOL3(10); gotoxy(96, 11); cout << "S. Ciliata";

										plantEXCOL1(14); gotoxy(44, 15); cout << "S. Zonata";
										plantEXCOL2(14); gotoxy(70, 15); cout << "S. Turbata";

										_getch();
										break;

								case 'B':
										_getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
											gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
											gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ SCHISMATOGLOTTIS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'F': //Spathiphyllum
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(20);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "SPATHIPHYLLUM PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT SPATHIPHYLLUM
							gotoxy(43, 20); cout << "Spathiphyllum or 'Peace Lily' is a herbaceous perennial typically ";
							gotoxy(43, 21); cout << "grown as houseplant. It's popular as a specimen or accent in interior ";
							gotoxy(43, 22); cout << "groupings for its deep-green glossy foliage and white blooms that  ";
                            gotoxy(43, 23); cout << "are intermittent in medium lighting and long-lasting.";


							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
											gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
											gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ SPATHIPHYLLUM PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "S. Wallisii";
										plantEXCOL2(10); gotoxy(70, 11); cout << "S. Kochii";
										plantEXCOL3(10); gotoxy(94, 11); cout << "S. Cochlearispathum";

										plantEXCOL1(14); gotoxy(44, 15); cout << "S. Silvicola";

										_getch();
										break;

								case 'B':
										_getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ SPATHIPHYLLUM PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'G': //RETURN
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog == 'B' || prog == 'C' ||prog == 'D' ||
					       prog == 'E' || prog == 'F' || prog != 'G');
					_getch();
					break;

				case 'B': //BROMELIAD
				    do {
					system("cls");
					obsbox();
					SetColorAndBackground(0, 14);
					gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";
							plantResultsMenu();
							menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
							gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(16);
							SetColorAndBackground(14, 0);
								gotoxy(44, 11); cout << "BROMELIAD PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
								gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(27);

							SetColorAndBackground(15, 0);
							gotoxy(43, 20); cout << "Bromeliads typically have bright red, orange, purple, or blue flowers, ";
							gotoxy(43, 21); cout << "and can grow in a number of different ways: they can be terrestrial ";
							gotoxy(43, 22); cout << "(ground); saxicolous (rocks); or epiphytic, (other plants and trees).";

							gotoxy(43, 24); cout << "One of the most well-known bromeliads is the pineapple.";

					SetColorAndBackground(14, 0);
						gotoxy(12, 29); cout << "<NOTES>:";
					SetColorAndBackground(15, 0);
						gotoxy(21, 29); cout << "Select From";
						gotoxy(12, 30); cout << "Options A To B......";
					SetColorAndBackground(14, 0);
						gotoxy(12, 34); cout << "<ENTER>: ";
					SetColorAndBackground(15, 0);
						cin >> prog;

						switch (prog){
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ BROMELIAD PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Pineapple";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Guzmania";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Tillandsia";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Vriesea";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Aechmea";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Neoregelia";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Billbergia";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Cryptanthus";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Queen's Tears";

							plantEXCOL1(22); gotoxy(44, 23); cout << "Alcantarea";
							plantEXCOL2(22); gotoxy(70, 23); cout << "Puya";
							plantEXCOL3(22); gotoxy(96, 23); cout << "Nidularium";

							plantEXCOL1(26); gotoxy(44, 27); cout << "Dyckia";
							plantEXCOL2(26); gotoxy(70, 27); cout << "Canistrum";
							plantEXCOL3(26); gotoxy(96, 27); cout << "Quesnelia";

							plantEXCOL1(30); gotoxy(44, 31); cout << "Portea Nana";
							plantEXCOL2(30); gotoxy(70, 31); cout << "Brocchinia";
							plantEXCOL3(30); gotoxy(96, 31); cout << "Hechtia";
							_getch();
							break;

                        case 'B':
							_getch();
							break;

						default:
							system("cls");
							obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ BROMELIAD PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

								menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

                case 'C': //FERNS
                    do {
					system("cls");
					obsbox();
					SetColorAndBackground(0, 14);
					gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							exoticferns();
							menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "FERN PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(26);

							SetColorAndBackground(15, 0);			//INFO ABOUT FERN PLANTS
							gotoxy(43, 20); cout << "Ferns are plants that do not have flowers. Ferns generally reproduce  ";
							gotoxy(43, 21); cout << "by producing spores. Similar to flowering plants, ferns have roots,  ";
							gotoxy(43, 22); cout << "stems, and leaves. ";

							gotoxy(43, 23); cout << "However, unlike flowering plants, ferns do not have flowers or seeds;";
							gotoxy(43, 24); cout << "instead, they usually reproduce sexually by tiny spores.";

					SetColorAndBackground(14, 0);
						gotoxy(12, 29); cout << "<NOTES>:";
					SetColorAndBackground(15, 0);
						gotoxy(21, 29); cout << "Select From";
						gotoxy(12, 30); cout << "Options A To G......";
					SetColorAndBackground(14, 0);
						gotoxy(12, 34); cout << "<ENTER>: ";
					SetColorAndBackground(15, 0);
						cin >> prog;

						switch (prog){
						case 'A': //Mutant
							do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(13);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "MUTANT PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT MUTANT
							gotoxy(43, 20); cout << "Asplenium Nidus, or Mutant Fern, is a species of fern in the family ";
							gotoxy(43, 21); cout << "Aspleniaceae. It is one of several closely related species known by ";
							gotoxy(43, 22); cout << "the common name Bird's Nest Fern. Taxonomists are still identifying ";
                            gotoxy(43, 23); cout << "these natural mutants.";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";
											cout << endl << endl;

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ MUTANT PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Bird's Nest";

										_getch();
										break;

								case 'B':
										_getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ MUTANT PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;

						case 'B': //Cyatheaceae
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(18);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "CYATHEACEAE PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15);
								cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT CYATHEACEAE
							gotoxy(43, 20); cout << "Cyatheaceae is the largest family of tree ferns, including about ";
							gotoxy(43, 21); cout << "640 species. The Cyatheaceae usually have a single, erect trunk-like ";
							gotoxy(43, 22); cout << "stem. Their leaves are also very large, some of the largest in the ";
							gotoxy(43, 23); cout << "plant kingdom.";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ CYATHEACEAE PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Alsophila";
										plantEXCOL2(10); gotoxy(70, 11); cout << "Cyathea";
										plantEXCOL3(10); gotoxy(94, 11); cout << "Flying spider-monkey";

										plantEXCOL1(14); gotoxy(44, 15); cout << "Silver Fern";

										_getch();
										break;

								case 'B':
										 _getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ CYATHEACEAE PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'C': //HETEROGONIUM
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(19);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "HETEROGONIUM PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT HETEROGONIUM
							gotoxy(43, 20); cout << "Heterogonium is a fern originating from rain forest; growing near ";
							gotoxy(43, 21); cout << "streams at low altitudes. It is good for humid terrarium and ";
							gotoxy(43, 22); cout << "paludarium set ups. This fern should not be put in direct light, ";
							gotoxy(43, 23); cout << "in which it may cause burning or even death of the plant.";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ HETEROGONIUM PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Lady Fern";

										_getch();
										break;

								case 'B':
										 _getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ HETEROGONIUM PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;

						case 'D': //Marattiaceae
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(19);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "MARATTIACEAE PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15);
								cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT MARATTIACEAE
							gotoxy(43, 20); cout << "The Marattiaceae are quite different from many plants familiar to ";
							gotoxy(43, 21); cout << "people in temperate zones. They have very large leaves with stout erect ";
							gotoxy(43, 22); cout << "stems. Some plants of this kind can grow up to 7-9 meters in length. ";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ MARATTIACEAE PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Angiopteris evecta";
										plantEXCOL2(10); gotoxy(70, 11); cout << "A. lygodiifolia";
										plantEXCOL3(10); gotoxy(96, 11); cout << "Danaea kalevala";
										_getch();
										break;

								case 'B':
										 _getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ MARATTIACEAE PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'E': //Selaginella
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(18);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "SELAGINELLA PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15);
								cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT SELAGINELLA
							gotoxy(43, 20); cout << "Selaginella species are creeping or ascendant plants with simple, ";
							gotoxy(43, 21); cout << "scale-like leaves on branching stems from which roots also arise. ";
							gotoxy(43, 22); cout << "The stems are aerial, horizontally creeping on the substratum, ";
                            gotoxy(43, 23); cout << "sub erect or erect.";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ SELAGINELLA ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Selaginella apoda";
										plantEXCOL2(10); gotoxy(68, 11); cout << "Selaginella rupestris";
										plantEXCOL3(10); gotoxy(96, 11); cout << "Selaginella densa";

										plantEXCOL1(14); gotoxy(44, 15); cout << "Bushy spikemoss";
										plantEXCOL2(14); gotoxy(68, 15); cout << "Selaginella oregana";
                                        plantEXCOL3(14); gotoxy(94, 15); cout << "Selaginella watsonii";
										_getch();
										break;

								case 'B':
										 _getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ SELAGINELLA ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'F':
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(17);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "OTHER FERN GENERA";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15);
								cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT OTHER FERN GENERA
							gotoxy(43, 20); cout << "Ferns, in general, are a class of nonflowering vascular plants that ";
							gotoxy(43, 21); cout << "possess true roots, stems, and complex leaves and that reproduce by ";
							gotoxy(43, 22); cout << "spores. The majority of ferns thrive in warm, damp areas of the ";
                            gotoxy(43, 23); cout << "Earth.";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(72, 6);
											cout << "ÄÄÄÄÄÄÄ OTHER FERN GENERA PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Adder's-tongues";
										plantEXCOL2(10); gotoxy(70, 11); cout << "Bracken";
										plantEXCOL3(10); gotoxy(96, 11); cout << "Buckler";

										plantEXCOL1(14); gotoxy(44, 15); cout << "Chain Ferns";
                                        plantEXCOL2(14); gotoxy(70, 15); cout << "Climbing Ferns";
                                        plantEXCOL3(14); gotoxy(96, 15); cout << "Filmy Ferns";

                                        plantEXCOL1(18); gotoxy(44, 19); cout << "Filmy Ferns";
                                        plantEXCOL2(18); gotoxy(70, 19); cout << "Maidenhair";
                                        plantEXCOL3(18); gotoxy(96, 19); cout << "Mosquito Fern";

                                        plantEXCOL1(22); gotoxy(44, 23); cout << "Water Clovers";
                                        plantEXCOL2(22); gotoxy(70, 23); cout << "Umbrella Ferns";
                                        plantEXCOL3(22); gotoxy(96, 23); cout << "Spleenworts";
										_getch();
										break;

								case 'B':
										 _getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ OTHER FERN GENERA PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'G': //RETURN
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog == 'B' || prog == 'C' ||prog == 'D' ||
					       prog == 'E' || prog == 'F' || prog != 'G');
					_getch();
					break;

                case 'D': //GINGER
                    do {
					system("cls");
					obsbox();
					SetColorAndBackground(0, 14);
					gotoxy(10, 4);
						cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(16);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "GINGER PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(27);

							SetColorAndBackground(15, 0);
							gotoxy(43, 20); cout << "Zingiberaceae, or the Ginger Family, are aromatic herbs that grow in ";
							gotoxy(43, 21); cout << "moist areas of the tropics and subtropics, including some regions ";
							gotoxy(43, 22); cout << "that are seasonably dry.";

							gotoxy(43, 24); cout << "Many species under the Ginger Family are economically valuable for ";
                            gotoxy(43, 25); cout << "their spices and perfume.";

					SetColorAndBackground(14, 0);
						gotoxy(12, 29); cout << "<NOTES>:";
					SetColorAndBackground(15, 0);
						gotoxy(21, 29); cout << "Select From";
						gotoxy(12, 30); cout << "Options A To B......";
					SetColorAndBackground(14, 0);
						gotoxy(12, 34); cout << "<ENTER>: ";
					SetColorAndBackground(15, 0);
						cin >> prog;

						switch (prog){
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ GINGER PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(44, 11); cout << "Turmeric";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Ginger";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Hidden-lilies";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Alpinia";
							plantEXCOL2(14); gotoxy(70, 15); cout << "True cardamom";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Fingerroot";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Shell ginger";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Amomum";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Bitter ginger";

							plantEXCOL1(22); gotoxy(44, 23); cout << "Hedychium";
							plantEXCOL2(22); gotoxy(70, 23); cout << "Kaempferia";
							plantEXCOL3(22); gotoxy(96, 23); cout << "Greater Galangal";

							plantEXCOL1(26); gotoxy(44, 27); cout << "Japanese Ginger";
							plantEXCOL2(26); gotoxy(70, 27); cout << "Etlingera";
							plantEXCOL3(26); gotoxy(96, 27); cout << "Roscoea";

							_getch();
							break;

                        case 'B':
							_getch();
							break;

						default:
							system("cls");
							obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ GINGER PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

								menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

                case 'E': //HOYA
                    do {
					system("cls");
					obsbox();
					SetColorAndBackground(0, 14);
					gotoxy(10, 4);
						cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							hoya();
							menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(11);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "HOYA PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15);
								cout << "INFORMATION";

							boxInfo(27);

							SetColorAndBackground(15, 0);			//INFO ABOUT HOYA PLANTS
							gotoxy(43, 20); cout << "Hoyas are evergreen perennial creepers or vines or rarely, shrubs. ";
							gotoxy(43, 21); cout << "Its flowers grow in a ball-shaped cluster and are pleasantly fragrant. ";

							gotoxy(43, 24); cout << "They have simple entire leaves, arranged in an opposite pattern, which ";
							gotoxy(43, 25); cout << "may exhibit a variety of forms: smooth; felted, or; hairy. Many species ";
							gotoxy(43, 26); cout << "have leaf surfaces flecked with irregular small silvery spots.";

					SetColorAndBackground(14, 0);
						gotoxy(12, 29); cout << "<NOTES>:";
					SetColorAndBackground(15, 0);
						gotoxy(21, 29); cout << "Select From";
						gotoxy(12, 30); cout << "Options A To G......";
					SetColorAndBackground(14, 0);
						gotoxy(12, 34); cout << "<ENTER>: ";
					SetColorAndBackground(15, 0);
						cin >> prog;

						switch (prog){
						case 'A': //Dischidia
							do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(16);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "DISCHIDIA PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15);
								cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT DISCHIDIA
							gotoxy(43, 20); cout << "Dischidia is a plant that grows on support such as trees, trunks, or ";
							gotoxy(43, 21); cout << "branches. Their stems may produce roots along the nodes to absorb ";
							gotoxy(43, 22); cout << "nutrients and water and provide additional support for the plant.";
							gotoxy(43, 23); cout << "Most are sold in tiny pots that can be hung by the window or balcony.";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ DISCHIDIA PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Dischidia major";
										plantEXCOL2(10); gotoxy(69, 11); cout << "Dischidia acuminata";
										plantEXCOL3(10); gotoxy(95, 11); cout << "Dischidia merrillii";

										plantEXCOL1(14); gotoxy(44, 15); cout << "D. nummularia";
										plantEXCOL2(14); gotoxy(72, 15); cout << "D. bengalensis";
										plantEXCOL3(14); gotoxy(95, 15); cout << "Dischidia imbricata";

                                        plantEXCOL1(18); gotoxy(44, 19); cout << "Dischidia vidalii";
                                        plantEXCOL2(18); gotoxy(69, 19); cout << "Dischidia latifolia";
                                        plantEXCOL3(18); gotoxy(95, 19); cout << "Dischidia striata";

										_getch();
										break;

								case 'B':
										 _getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ DISCHIDIA PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;

						case 'B': //Buotii
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(13);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "BUOTII PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15);
								cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT ALOCASIA
							gotoxy(43, 20); cout << "Hoya Buotii is a thin wiry vine, often woody at the base. Flowers ";
							gotoxy(43, 21); cout << "are somewhat cup shaped / almost flat, about 2 cm. Its petals range ";
							gotoxy(43, 22); cout << "from very pale yellow to dull yellow, and in some forms a warm violet ";
							gotoxy(43, 23); cout << "tinge and densely hairy.";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ BUOTII PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Hoya Buotii";

										_getch();
										break;

								case 'B':
										_getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ BUOTII PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'C': //CAMPHORIFOLIA
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(21);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "CAMPHORIFOLIA PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15);
								cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT CAMPHORIFOLIA
							gotoxy(43, 20); cout << "The flowers are 6mm across and come in bunches of 20 to 30 hanging ";
							gotoxy(43, 21); cout << "from along the stems. This species has a compact growth habit with ";
							gotoxy(43, 22); cout << "short internodes and small ornate leaves. Requires protection from ";
							gotoxy(43, 23); cout << "severe frosts and should be shielded in all colder climates.";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ CAMPHORIFOLIA PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "H. camphorifolia";

										_getch();
										break;

								case 'B':
										_getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ CAMPHORIFOLIA PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'D': //CARNOSA
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "CARNOSA PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15);
								cout << "INFORMATION";

							boxInfo(27);

							SetColorAndBackground(15, 0);					//INFO ABBOUT CARNOSA
							gotoxy(43, 20); cout << "Hoya carnosa makes faintly succulent shoots with smooth, pale gray, ";
							gotoxy(43, 21); cout << "and bare surfaces that twine and climb. The perennial leaves are  ";
							gotoxy(43, 22); cout << "stalked with about 1 to 1.5 cm long stems. ";

							gotoxy(43, 24); cout << "The blade is wide oval to longitudinal oval or heart-shaped. The";
							gotoxy(43, 25); cout << "leaves have a waxy glossy surface.";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ CARNOSA PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Hoya Carnosa";

										_getch();
										break;

								case 'B':
										_getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ CARNOSA PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'E': //Darwinii
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(16);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "DARWINII PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15);
								cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABOUT DARWINII
							gotoxy(43, 20); cout << "Hoya darwinii produces really beautiful and unusual tooth-like flowers.";
							gotoxy(43, 21); cout << "Its flowers cluster in numbers of 15 at a time per umbel. The leaves ";
							gotoxy(43, 22); cout << "are medium-sized which turn red under full sun and notably clump and ";
                            gotoxy(43, 23); cout << "roll into a pouch, only when matured.";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ DARWINII ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Hoya Darwinii";

										_getch();
										break;

								case 'B':
										_getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ DARWINII ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'F': //Incrassata
						    do {
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(18);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "INCRASSATA PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15);
								cout << "INFORMATION";

							boxInfo(24);

							SetColorAndBackground(15, 0);					//INFO ABBOUT INCRASSATA
							gotoxy(43, 20); cout << "Hoya incrassata typically blooms on and off and will re-bloom off ";
							gotoxy(43, 21); cout << "the old flower spurs. Its flowers form a tight cluster of many  ";
							gotoxy(43, 22); cout << "blossoms creating a ball-like shape which are cream-colored with ";
                            gotoxy(43, 23); cout << "maroon tips and a white center.";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> type;

								switch (type) {
									case 'A': //RESULTS
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ INCRASSATA PLANTS ÄÄÄÄÄÄÄ"; //output header

																//EXAMPLES OF PLANTS
										plantEXCOL1(10); gotoxy(44, 11); cout << "Hoya incrassata";
										plantEXCOL2(10); gotoxy(70, 11); cout << "Moonshadow";
										_getch();
										break;

								case 'B':
										_getch();
										break;
								default:
										system("cls");
										obsbox();
										SetColorAndBackground(0, 14);
										gotoxy(10, 4);
											cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

										plantResultsMenu();
										menuInstructions(); prompt();

										outputheader();
										SetColorAndBackground(15, 0);
										gotoxy(75, 6);
											cout << "ÄÄÄÄÄÄÄ INCRASSATA PLANTS ÄÄÄÄÄÄÄ"; //output header

										plantHeader(15);
										gotoxy(44, 11); cout << "INVALID COMMAND";
										gotoxy(41, 13); cout << "Value Entered Invalid...";

										menuInstructions();
										_getch();
										break;
								} //end switch menu
							} //end do while menu
							while (type == 'A' || type != 'B');
							_getch();
							break;
						case 'G': //RETURN
							_getch();
							break;
						default:
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog == 'B' || prog == 'C' ||prog == 'D' ||
					       prog == 'E' || prog == 'F' || prog != 'G');
                    _getch();
                    break;

                case 'F': //MEDINILLA
                    do {
					system("cls");
					obsbox();
					SetColorAndBackground(0, 14);
					gotoxy(10, 4);
						cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(16);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "MEDINILLA PLANTS";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15);
								cout << "INFORMATION";

							boxInfo(27);

							SetColorAndBackground(15, 0);
							gotoxy(43, 21); cout << "Medinilla is a small evergreen shrub native to the Philippines where it ";
							gotoxy(43, 22); cout << "is usually found growing on trees in tropical forests. They have large ";
							gotoxy(43, 23); cout << "succulent green leaves, which hold onto or store moisture similar to ";
							gotoxy(43, 24); cout << "other succulent plants.";

							SetColorAndBackground(14, 0);
								gotoxy(12, 29); cout << "<NOTES>:";
							SetColorAndBackground(15, 0);
								gotoxy(21, 29); cout << "Select From";
								gotoxy(12, 30); cout << "Options A To B......";
							SetColorAndBackground(14, 0);
								gotoxy(12, 34); cout << "<ENTER>: ";
							SetColorAndBackground(15, 0);
								cin >> prog;

						switch (prog){
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ MEDINILLA PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantEXCOL1(10); gotoxy(42, 11); cout << "Medinilla magnifica";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Medinilla pendula";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Medinilla speciosa";

							plantEXCOL1(14); gotoxy(42, 15); cout << "Medinilla beamanii";
							plantEXCOL2(14); gotoxy(70, 15); cout << "M. loranthoides";
							plantEXCOL3(14); gotoxy(96, 15); cout << "M. alata";

							plantEXCOL1(18); gotoxy(42, 19); cout << "Dolce Vita";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Crimson Medinilla";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Orange Spike";

							plantEXCOL1(22); gotoxy(42, 23); cout << "Siebold's Medinilla";
							_getch();
							break;

                        case 'B':
							_getch();
							break;

						default:
							system("cls");
							obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4);
									cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

								plantResultsMenu();
								menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ MEDINILLA PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

								menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;

                    _getch();
                    break;

				case 'G': //RETURN
					_getch();
					break;
				default:
					system("cls");
					obsbox(); exoticIndex1();
					SetColorAndBackground(0, 14);
					gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";

					outputheader(); prompt();
					gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX ÄÄÄÄÄÄÄ"; //output header

					plantHeader(15);
					gotoxy(44, 11); cout << "INVALID COMMAND";
					gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
					menuInstructions();
					_getch();
					break;
				} //end switch menu
			} //end do while menu
			while (mainchoice == 'A' || mainchoice == 'B' || mainchoice == 'C' ||mainchoice == 'D' ||
				   mainchoice == 'E' || mainchoice == 'F' || mainchoice != 'G');
			_getch();
			break;

		case 'B':
			//INDEX 2
			do {
				system("cls");
				obsbox();
					exoticIndex2();
					menuInstructions(); exoticInfo();
				outputheader();
				SetColorAndBackground(14, 0);
					gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ PLANT CATEGORY ÄÄÄÄÄÄÄ"; //output header

				SetColorAndBackground(14, 0);
					gotoxy(12, 29); cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
					gotoxy(21, 29); cout << "Select From";
					gotoxy(12, 30); cout << "Options A To G......";
				SetColorAndBackground(14, 0);
					gotoxy(12, 34); cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> mainchoice;

				switch (mainchoice) {
				case 'A'://ORCHIDS ==========================================================================
					system("cls");
					CHAR prog;
					do {

						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
							gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(14);
						SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "ORCHID PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15); cout << "INFORMATION";

						boxInfo(27);

						SetColorAndBackground(15, 0);			//INFO ABOUT ORHIDS PLANTS
						gotoxy(43, 20); cout << "The Orchid is the largest family of the flowering plants.";
						gotoxy(43, 21); cout << "Almost all of these are popular as exotic indoor and outdoor plants, ";
						gotoxy(43, 22); cout << "mainly for their unique flowers ";

						gotoxy(43, 24); cout << "One of the defining characteristics of an orchid flower is the presence,";
						gotoxy(43, 25); cout << "of three petals and three colorful sepals that might easily be mistaken ";
						gotoxy(43, 26); cout << "for petals.  ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
						cin >> prog;

						switch (prog) {
						case 'A': // RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ ORCHID PLANTS ÄÄÄÄÄÄÄ"; //output header

							//EXAMPLES OF PLANTS
							plantEXCOL1(10); gotoxy(44, 11); cout << "Variegata";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Shy Girl";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Red Spider";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Honey Bee";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Pastor's Orchid";
							plantEXCOL3(14); gotoxy(93, 15); cout << "Venus'Fan Bulbophyllum";

							_getch();
							break;

						case 'B':
							_getch();
							break;

						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ ORCHID PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} while (prog == 'A');//end do while menu

					_getch();
					break;

				case 'B': //PALMS =====================================================================================
					do {

						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

						plantResultsMenu();
						menuInstructions();
						outputheader();
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(11);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11); cout << "PALM PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15); cout << "INFORMATION";

						boxInfo(27);
						SetColorAndBackground(15, 0);			//INFO ABOUT PALM PLANTS
						gotoxy(43, 20); cout << "Also known by the name Palmaceae.";
						gotoxy(43, 21); cout << "Most palms are distinguished by their large, compound, evergreen leaves ";
						gotoxy(43, 22); cout << "arranged at the top of an unbranched stem. ";

						gotoxy(43, 24); cout << "Palms also inhabit nearly every type of habitat within their range, ";
						gotoxy(43, 25); cout << "from rain forests to deserts.";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
						cin >> prog;

						switch (prog) {
						case 'A': // RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PALMS PLANTS ÄÄÄÄÄÄÄ"; //output header

							//EXAMPLES OF PALM PLANTS
							plantEXCOL1(10); gotoxy(44, 11); cout << "Dwarf Pinanga";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Midrib Purple";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Lipstick Palm";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Livistona";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Arenga Tremula";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Korthalsia";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Calamus Discolor";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Arenga Pinnata";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Pinanga";

							plantEXCOL1(22); gotoxy(44, 23); cout << "Daemonorops";
							plantEXCOL2(22); gotoxy(70, 23); cout << "Areca Ipot";
							plantEXCOL3(22); gotoxy(96, 23); cout << "Pinanga Speciosa";

							plantEXCOL1(26); gotoxy(44, 27); cout << "Pinanga Imaculata ";
							plantEXCOL2(26); gotoxy(70, 27); cout << "Caryota Mitis";
							plantEXCOL3(26); gotoxy(96, 27); cout << "Areca Catechu";

							//^BAGUHIN AND DAGDANAN NA LNG SINCE EXAMPLE LNG ITU
							_getch();
							break;

						case 'B':
							_getch();
							break;

						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PALM PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;

						} //end switch menu
					} while (prog == 'A');//end do while menu

					_getch();
					break;

				case 'C': //PANDANACEA ========================================================================================
					do {

						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();
						outputheader();
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(17);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11); cout << "PANDANACEA PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15); cout << "INFORMATION";

						boxInfo(27);

						SetColorAndBackground(15, 0);			//INFO ABOUT PANDANACEA  PLANTS
						gotoxy(43, 20); cout << "Pandanaceae is a family of flowering plants native to the tropics and ";
						gotoxy(43, 21); cout << "subtropics of the Old World, from West Africa through the Pacific.";

						gotoxy(43, 23); cout << "They grow in various habitats from sandy beaches, mangrove swamps to";
						gotoxy(43, 24); cout << "primary forests. Many of these pandans are ornamental but only a few";
						gotoxy(43, 25); cout << "species are cultivated in the country. ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
						cin >> prog;

						switch (prog) {
						case 'A': // RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PANDANACEA PLANTS ÄÄÄÄÄÄÄ"; //output header

							//EXAMPLES OF PLANTS
							plantEXCOL1(10); gotoxy(44, 11); cout << "Silver Streak";
							plantEXCOL2(10); gotoxy(70, 11); cout << "White Fountain";
							plantEXCOL3(10); gotoxy(94, 11); cout << "Freycinettia Galaxy";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Green Fountain";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Bleeding Heart";
							plantEXCOL3(14); gotoxy(96, 15); cout << "Black Emperor";

							plantEXCOL1(18); gotoxy(44, 19); cout << "Red Fountain";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Yellow Fountain";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Princess Rubia";

							plantEXCOL1(22); gotoxy(44, 23); cout << "Red Empress";

							_getch();
							break;

						case 'B':
							_getch();
							break;

						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PANDANACEA PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} while (prog == 'A');//end do while menu

					_getch();
					break;

				case 'D': //TREES & SHRUBS ============================================================================================
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

						plantResultsMenu();
						menuInstructions();
						outputheader();
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11); cout << "TREES & SHRUBS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15); cout << "INFORMATION";

						boxInfo(27);

						SetColorAndBackground(15, 0);			//INFO ABOUT TREES & SHRUBS PLANTS
						gotoxy(43, 20); cout << "Trees and shrubs are both woody plants, as distinct from the herbaceous,";
						gotoxy(43, 21); cout << "fleshy-stemmed plants that comprise the other half of the plant world.";

						gotoxy(43, 23); cout << "We all think of a shrub as being smaller than a tree, but there are ";
						gotoxy(43, 24); cout << "more differences than size alone.";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
						cin >> prog;

						switch (prog) {
						case 'A': // RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ TREES & SHRUBS ÄÄÄÄÄÄÄ"; //output header

							//EXAMPLES OF PLANTS
							plantEXCOL1(10); gotoxy(44, 11); cout << "Loheria";
							plantEXCOL2(10); gotoxy(68, 11); cout << "Loheria Red Empress";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Discocalyx";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Loheria Green Form";
							plantEXCOL2(14); gotoxy(68, 15); cout << "Loheria Silver Form";
							plantEXCOL3(14); gotoxy(95, 15); cout << "Eugenia Pink Form";

							plantEXCOL1(18); gotoxy(42, 19); cout << "Eugenia Yellow Form";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Eugenia Red Form";
							plantEXCOL3(18); gotoxy(96, 19); cout << "Eugenia Red Leaf";

							plantEXCOL1(22); gotoxy(44, 23); cout << "Malabayabas";
							plantEXCOL2(22); gotoxy(70, 23); cout << "Dangling Gems";
							plantEXCOL3(22); gotoxy(96, 23); cout << "Leea Manillensis";

							plantEXCOL1(26); gotoxy(44, 27); cout << "Talisay Gubat";
							plantEXCOL2(26); gotoxy(70, 27); cout << "Leea Isabel";
							plantEXCOL3(26); gotoxy(96, 27); cout << "Leea Aurora";

							plantEXCOL1(30); gotoxy(44, 31); cout << "Leea Elephant Ear";
							plantEXCOL2(30); gotoxy(70, 31); cout << "Barringtonia ";
							plantEXCOL3(30); gotoxy(93, 31); cout << "Psychotria Silver Form";

							_getch();
							break;

						case 'B':
							_getch();
							break;

						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ TREES & SHRUBS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} while (prog == 'A' || prog != 'B');//end do while menu
					_getch();
					break;

				case 'E': //VARIEGATED =========================================================================================
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

						plantResultsMenu();
						menuInstructions();
						outputheader();
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(17);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11); cout << "VARIEGATED PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15); cout << "INFORMATION";

						boxInfo(27);

						SetColorAndBackground(15, 0);			//INFO ABOUT VARIEGATED PLANTS
						gotoxy(43, 20); cout << "In plants, variegation means the appearance of different coloured zones";
						gotoxy(43, 21); cout << "on leaves, stems, fruit or flowers. Therefore, a variegated plant";
						gotoxy(43, 22); cout << "would appear two-toned or multi-tonal.";

						gotoxy(43, 24); cout << "The variegated sections on a plant may appear as stripes, spots,";
						gotoxy(43, 25); cout << "circles, borders and other shapes. ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
						cin >> prog;

						switch (prog) {
						case 'A': // RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ VARIEGATED PLANTS ÄÄÄÄÄÄÄ"; //output header

							//EXAMPLES OF PLANTS
							plantEXCOL1(10); gotoxy(44, 11); cout << "Macaranga ";
							plantEXCOL2(10); gotoxy(68, 11); cout << "Macaranga Grandifolia";
							plantEXCOL3(10); gotoxy(95, 11); cout << "Macaranga Tanarius";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Macaranga Bi-color";
							plantEXCOL2(14); gotoxy(68, 15); cout << "Neonuclea Bartlingii";
							plantEXCOL3(14); gotoxy(95, 15); cout << "Neolamarckia Cadamba";

							plantEXCOL1(18); gotoxy(42, 19); cout << "Nauclea Orientalis";
							plantEXCOL2(18); gotoxy(70, 19); cout << "Leea Sp.'Vine'";
							plantEXCOL3(18); gotoxy(95, 19); cout << "Leea Philippinensis";

							plantEXCOL1(22); gotoxy(41, 23); cout << "Calophyllum Inophyllum";
							plantEXCOL2(22); gotoxy(70, 23); cout << "Manilkara";
							plantEXCOL3(22); gotoxy(96, 23); cout << "Vitex Parviflora";

							plantEXCOL1(26); gotoxy(44, 27); cout << "Ficus Ulmifolia";
							plantEXCOL2(26); gotoxy(70, 27); cout << "Ficus Melinocarpa";
							plantEXCOL3(26); gotoxy(96, 27); cout << "Ficus Nota";

							plantEXCOL1(30); gotoxy(44, 31); cout << "Ficus Septica";
							plantEXCOL2(30); gotoxy(70, 31); cout << "Ficus Lyrata";
							plantEXCOL3(30); gotoxy(96, 31); cout << "Aristolochia";

							_getch();
							break;

						case 'B':
							_getch();
							break;

						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ VARIEGATED PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} while (prog == 'A' || prog != 'B');//end do while menu

					_getch();
					break;

				case 'F': //VINES ============================================================================================
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

						plantResultsMenu();
						menuInstructions();
						outputheader();
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(12);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11); cout << "VINE PLANTS";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15); cout << "INFORMATION";

						boxInfo(27);
						SetColorAndBackground(15, 0);			//INFO ABOUT VINES PLANTS
						gotoxy(43, 21); cout << "A vine is a stick form based on long stems. This has two purposes.";
						gotoxy(43, 22); cout << "A vine may use rock exposures, other plants, or other supports for";
						gotoxy(43, 23); cout << "growth rather than investing energy in a lot of supportive tissue,";
						gotoxy(43, 24); cout << "enabling the plant to reach sunlight with a minimum investment of ";
						gotoxy(43, 25); cout << "energy";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To B......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
						cin >> prog;

						switch (prog) {
						case 'A': // RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ VINES PLANTS ÄÄÄÄÄÄÄ"; //output header

							//EXAMPLES OF PLANTS
							plantEXCOL1(10); gotoxy(42, 11); cout << "Aeschynanthus species";
							plantEXCOL2(10); gotoxy(70, 11); cout << "Piper Nigrum";
							plantEXCOL3(10); gotoxy(96, 11); cout << "Piper Betle";

							plantEXCOL1(14); gotoxy(44, 15); cout << "Piper Crocatum";
							plantEXCOL2(14); gotoxy(70, 15); cout << "Blushing Bride";
							plantEXCOL3(14); gotoxy(94, 15); cout << "Aechynanthus Lipstick";

							_getch();
							break;

						case 'B':
							_getch();
							break;

						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ VINE PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 13); cout << "Value Entered Invalid...";

							menuInstructions();
							_getch();
							break;
						} //end switch menu
					} while (prog == 'A' || prog != 'B');//end do while menu

					_getch();
					break;

				case 'G': //RETURN
					_getch();
					break;

				default:
					system("cls");
					obsbox();
					SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
							exoticIndex2();
							menuInstructions(); prompt();
					outputheader();
					SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

					plantHeader(15);
					gotoxy(44, 11); cout << "INVALID COMMAND";
					gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
						menuInstructions();
					_getch();
					break;

				} //end switch menu
			} while (mainchoice == 'A' || mainchoice == 'B' || mainchoice == 'C' || mainchoice == 'D' ||
				mainchoice == 'E' || mainchoice == 'F' || mainchoice != 'G');
			_getch();
			break;

		case 'C': //RETURN
			system("cls");
			obsbox();
				exoticPlantsList();
				menuInstructions(); prompt();
			outputheader();
			SetColorAndBackground(14, 0);
				gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

			plantHeader(14);
			SetColorAndBackground(14, 0); gotoxy(44, 11); cout << "RETURN COMMAND";
			SetColorAndBackground(15, 0); gotoxy(41, 13); cout << "Please press 'Enter' again to proceed...";
			SetColorAndBackground(15, 0); gotoxy(41, 17); cout << "This will only take a moment. Returning to Plant Main Menu...";
			_getch();
			break;
		default:
			system("cls");
			obsbox();
			SetColorAndBackground(0, 14);
				gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
					exoticPlantsList();
					menuInstructions(); prompt();
			outputheader();
			SetColorAndBackground(15, 0);
				gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ EXOTIC PLANTS ÄÄÄÄÄÄÄ"; //output header

			plantHeader(15);
			gotoxy(44, 11); cout << "INVALID COMMAND";
			gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
				menuInstructions();
			_getch();
			break;

		} //end switch menu
		} //end do while menu
		while (exoticChoice == 'A' || exoticChoice == 'B' || exoticChoice != 'C');
		_getch();
		break;


		case 'C': //LEAF-BASE MAIN MENU
			do {
				system("cls");
				obsbox();
					leafPlantsList();
					menuInstructions(); leafInfo();
				outputheader();
				SetColorAndBackground(14, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄ PLANT CHARACTERISTICS ÄÄÄÄÄÄ"; //output header

				SetColorAndBackground(14, 0);
					gotoxy(12, 29); cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
					gotoxy(21, 29); cout << "Select From";
					gotoxy(12, 30); cout << "Options A To G......";
				SetColorAndBackground(14, 0);
					gotoxy(12, 34); cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> leafChoice;

		switch (leafChoice) {
		case 'A': //WOODY
			do {
				system("cls");
				obsbox();
					woody(); //broad/needle-leaf
					menuInstructions();
				outputheader();
				SetColorAndBackground(15, 0);
				gotoxy(80, 6);
					cout << "ÄÄÄÄÄÄÄ PLANT CATEGORY ÄÄÄÄÄÄÄ"; //output header
					cout << endl;

					plantHeader(12);
					SetColorAndBackground(14, 0);
					gotoxy(44, 11);
						cout << "WOODY PLANTS";

					plantInfo(14);
					SetColorAndBackground(14, 0);
					gotoxy(44, 15);
						cout << "INFORMATION";

					boxInfo(27);
					SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Trees, shrubs, sub-shrubs, and lianas";

						gotoxy(43, 22); cout << "The outer tissues of the stems are thickened; most have bark and ";
						gotoxy(43, 23); cout << "winter buds during the dormant season ";

						gotoxy(43, 25); cout << "EXCEPTIONS: Some very short shrubs can be mistaken as herbaceous plant";

				SetColorAndBackground(14, 0);
				gotoxy(12, 29);
					cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
				gotoxy(21, 29);
					cout << "Select From";
				gotoxy(12, 30);
					cout << "Options A To C......";
				SetColorAndBackground(14, 0);
				gotoxy(12, 34);
					cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> mainchoice;


				switch (mainchoice) {
				case 'A': //Broad-leaved woody plants
					do {
						system("cls");
						obsbox();
						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄÄ LEAF MARGINS ÄÄÄÄÄ";
							cout << endl << endl;

							woodyLeaf(); //entire/toothed/lobed
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ WOODY PLANTS ÄÄÄÄÄÄÄ"; //output header
							cout << endl;

							plantHeader(19);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "BROAD-LEAVED PLANTS";

							leafboxInfo(20);
							SetColorAndBackground(15, 0);
							gotoxy(43, 16); cout << "Trees, shrubs, and lianas that produce flowers and seeds with carpels.";

							gotoxy(43, 18); cout << "Some exceptions are those producing tiny, almost needle-like leaves ";
							gotoxy(43, 19); cout << "like gymnosperm leaves, but these don't usually have fragrant sap. ";

							//LEAF DRAWING
							leafDrawBOX1();
							leafDrawBOX2();
							leafDrawBOX3();
							leafShapeDrawing();

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To D......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> type;

						switch (type) {
						case 'A': //Entire (Kind of Leaf)
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4);
									cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
									cout << endl << endl;

								SetColorAndBackground(15, 0);
								gotoxy(10, 6);
									cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

								gotoxy(19, 7);
									cout << "-ENTIRE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(10, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(10, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(10, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(10, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(10, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(10, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(10, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(10, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(10, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(10, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(10, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(10, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(10, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(10, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(10, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGINS ÄÄÄÄÄ";

										menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(44, 15); cout << "Amorpha fruticosa";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Andromeda polifolia";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Arceuthobium pusillum";

									_getch();
									break;
								case 'B':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGINS ÄÄÄÄÄ";
										cout << endl << endl;

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX B ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Benthamidia florida";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Berberis thunbergii";

									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGINS ÄÄÄÄÄ";
										cout << endl << endl;

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(44, 15); cout << "Catalpa speciosa";
									plantEXCOL2(14); gotoxy(70, 15); cout << "Cytisus scoparius";

									_getch();
									break;
								case 'D':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGINS ÄÄÄÄÄ";
										cout << endl << endl;

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX D ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Daphne mezereum";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Dasiphora floribunda";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Decodon verticillatus";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Diapensia lapponica";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Dirca palustris";

									_getch();
									break;
								case 'E':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGINS ÄÄÄÄÄ";
										cout << endl << endl;

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX E ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Elaeagnus umbellata";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Empetrum nigrum";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Epigaea repens";

									_getch();
									break;
								case 'F':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGINS ÄÄÄÄÄ";
										cout << endl << endl;

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX F ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Frangula alnus";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Fraxinus americana";
									plantEXCOL3(14); gotoxy(93, 15); cout << "Fraxinus ";

									_getch();
									break;
								case 'G':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGINS ÄÄÄÄÄ";
										cout << endl << endl;

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX G ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Gaultheria hispidula";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Gaultheria procumbens";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Gaylussacia baccata";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Gaylussacia frondosa";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Genista tinctoria";

									_getch();
									break;
								case 'I':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGINS ÄÄÄÄÄ";
										cout << endl << endl;

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX I ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(44, 15); cout << "Ilex mucronata";

									_getch();
									break;
								case 'K':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX K ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14);gotoxy(42, 15); cout << "Kalmia angustifolia";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Kalmia latifolia";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Kalmia polifolia";

									_getch();
									break;
								case 'L':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX L ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Ligustrum ";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Ligustrum vulgare";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Lindera benzoin";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Lonicera canadensis";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Lonicera dioica";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Lonicera japonica";

									plantEXCOL1(22); gotoxy(42, 23); cout << "Lonicera morrowii";
									plantEXCOL2(22); gotoxy(68, 23); cout << "Lonicera villosa";
									plantEXCOL3(22); gotoxy(94, 23); cout << "Lyonia ligustrina";

									_getch();
									break;

								case 'M':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX M ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Magnolia acuminata";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Mitchella repens";

									_getch();
									break;
								case 'N':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX N ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(44, 15); cout << "Nyssa sylvatica";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Pachysandra ";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Pueraria montana";

									_getch();
									break;
								case 'R':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX R ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Rhododendron";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Rhus copallinum";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Robinia hispida";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Robinia pseudoacacia";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Robinia viscosa";

									_getch();
									break;
								case 'S':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX S ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Salix bebbiana";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Salix cinerea";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Salix discolor";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Salix humilis";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Salix occidentalis";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Salix petiolaris";

									plantEXCOL1(22); gotoxy(42, 23); cout << "Salix purpurea";
									plantEXCOL2(22); gotoxy(68, 23); cout << "Sassafras albidum";
									plantEXCOL3(22); gotoxy(94, 23); cout << "Smilax glauca";

									plantEXCOL1(26); gotoxy(42, 27); cout << "Smilax rotundifolia";
									plantEXCOL2(26); gotoxy(68, 27); cout << "Swida alternifolia";
									plantEXCOL3(26); gotoxy(94, 27); cout << "Swida amomum";

									plantEXCOL1(30); gotoxy(42, 31); cout << "Swida racemosa";
									plantEXCOL2(30); gotoxy(68, 31); cout << "Symphoricarpos albus";
									plantEXCOL3(30); gotoxy(94, 31); cout << "Syringa vulgaris";

									_getch();
									break;
								case 'T':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX T ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Toxicodendron ";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Toxicodendron vernix";

									_getch();
									break;
								case 'V':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX V ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14);gotoxy(42, 15); cout << "Vaccinium corymbosum";
									plantEXCOL2(14);gotoxy(68, 15); cout << "Vaccinium macrocarpon";
									plantEXCOL3(14);gotoxy(94, 15); cout << "Vaccinium myrtilloide";

									plantEXCOL1(18);gotoxy(42, 19); cout << "Vaccinium oxycoccos";
									plantEXCOL2(18);gotoxy(68, 19); cout << "Vaccinium pallidum";
									plantEXCOL3(18);gotoxy(94, 19); cout << "Vaccinium uliginosum";

									plantEXCOL1(22);gotoxy(42, 23); cout << "Vaccinium vitis-idaea";
									plantEXCOL2(22);gotoxy(68, 23); cout << "Viburnum nudum";

									_getch();
									break;
								case 'Z':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX Z ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Entire";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Zanthoxylum ";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";

									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'B' || typeIndex == 'C' || typeIndex == 'D' || typeIndex == 'E'||
								typeIndex == 'F' || typeIndex == 'G' || typeIndex == 'I' || typeIndex == 'K' || typeIndex == 'L' ||
								typeIndex == 'M' || typeIndex == 'N' || typeIndex == 'O' || typeIndex == 'P' || typeIndex == 'R' ||
								typeIndex == 'S' || typeIndex == 'T' || typeIndex == 'V' || typeIndex == 'Z' || typeIndex != 'r' );
							_getch();
							break;

						case 'B': //Toothed
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4);
									cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
									cout << endl << endl;

								SetColorAndBackground(15, 0);
								gotoxy(10, 6);
									cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
								gotoxy(18, 7);
									cout << "-TOOTHED-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(10, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(10, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(10, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(10, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(10, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(10, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(10, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(10, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(10, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(10, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(10, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(10, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(10, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(10, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(10, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(10, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(10, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Aesculus";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Ailanthus altissima";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Alnus incana";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Alnus serrulata";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Alnus viridis";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Amelanchier arborea";

									plantEXCOL1(22); gotoxy(42, 23); cout << "Amelanchier canadens";
									plantEXCOL2(22); gotoxy(68, 23); cout << "Amelanchier laevis";
									plantEXCOL3(22); gotoxy(94, 23); cout << "Amelanchier spicata";

									plantEXCOL1(26); gotoxy(42, 27); cout << "Aralia elata";
									plantEXCOL2(26); gotoxy(68, 27); cout << "Aralia nudicaulis";
									plantEXCOL3(26); gotoxy(94, 27); cout << "Aronia arbutifolia";

									plantEXCOL1(30); gotoxy(42, 31); cout << "Aronia floribunda";
									plantEXCOL2(30); gotoxy(68, 31); cout << "Aronia melanocarpa";

									_getch();
									break;
								case 'B':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX B ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Baccharis halimifolia";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Berberis vulgaris";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Betula alleghaniensis";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Betula cordifolia";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Betula lenta";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Betula papyrifera";

									plantEXCOL1(22); gotoxy(42, 23); cout << "Betula populifolia";

									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Carpinus caroliniana";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Carya cordiformis";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Carya glabra";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Carya ovata";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Carya tomentosa";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Castanea dentata";

									plantEXCOL1(22); gotoxy(42, 23); cout << "Ceanothus americanus";
									plantEXCOL2(22); gotoxy(68, 23); cout << "Celastrus orbiculatus";
									plantEXCOL3(22); gotoxy(94, 23); cout << "Celtis occidentalis";

									plantEXCOL1(26); gotoxy(42, 27); cout << "Cephalanthus";
									plantEXCOL2(26); gotoxy(68, 27); cout << "Chamaedaphne";
									plantEXCOL3(26); gotoxy(94, 27); cout << "Chimaphila";

									plantEXCOL1(30); gotoxy(42, 31); cout << "Clethra";
									plantEXCOL2(30); gotoxy(68, 31); cout << "Corylus";
									plantEXCOL3(30); gotoxy(94, 31); cout << "Crataegus";

									_getch();
									break;
								case 'D':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX D ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Decodon verticillatus";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Diervilla lonicera";

									_getch();
									break;
								case 'E':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX E ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Eubotrys racemosa";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Euonymus alatus";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Euonymus europaeus";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Euonymus fortunei";

									_getch();
									break;
								case 'F':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX F ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Fagus grandifolia";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Forsythia viridissima";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Fraxinus americana";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Fraxinus nigra";

									_getch();
									break;
								case 'G':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX G ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Gaultheria hispidula";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Gaultheria procumbens";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Gleditsia triacanthos";

									_getch();
									break;
								case 'H':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX H ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Hamamelis virginiana";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Hydrangea paniculata";

									_getch();
									break;
								case 'I':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX I ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Ilex glabra";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Ilex laevigata";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Ilex mucronata";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Ilex opaca";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Ilex verticillata";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Iva frutescens";

									_getch();
									break;
								case 'J':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX J ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(44, 15); cout << "Juglans cinerea";

									_getch();
									break;
								case 'L':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX L ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Linnaea borealis";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Lyonia ligustrina";

									_getch();
									break;
								case 'M':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX M ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Malus baccata";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Malus pumila";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Mitchella repens";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Morella caroliniensis";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Morus alba";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Myrica gale";

									_getch();
									break;
								case 'O':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX O ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(43, 15); cout << "Ostrya virginiana";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Pachysandra";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Parthenocissus";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Philadelphus";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Populus alba";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Populus balsamifera";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Populus deltoides";

									plantEXCOL1(22); gotoxy(42, 23); cout << "Populus tremuloides";
									plantEXCOL2(22); gotoxy(68, 23); cout << "Prunus americana";
									plantEXCOL3(22); gotoxy(94, 23); cout << "Prunus maritima";

									plantEXCOL1(26); gotoxy(42, 27); cout << "Prunus pensylvanica";
									plantEXCOL2(26); gotoxy(68, 27); cout << "Prunus pumila";
									plantEXCOL3(26); gotoxy(94, 27); cout << "Prunus serotina";

									plantEXCOL1(30); gotoxy(42, 31); cout << "Prunus virginiana";

									_getch();
									break;
								case 'R':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX R ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Rhamnus cathartica";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Rhus copallinum";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Rhus glabra";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Rhus hirta";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Rosa blanda";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Rosa carolina";

									plantEXCOL1(22); gotoxy(42, 23); cout << "Rosa gallica";
									plantEXCOL2(22); gotoxy(68, 23); cout << "Rosa multiflora";
									plantEXCOL3(22); gotoxy(94, 23); cout << "Rosa palustris";

									plantEXCOL1(26); gotoxy(42, 27); cout << "Rosa rugosa";
									plantEXCOL2(26); gotoxy(68, 27); cout << "Rosa virginiana";
									plantEXCOL3(26); gotoxy(94, 27); cout << "Rubus Plants";

									_getch();
									break;
								case 'S':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX S ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Salix (Willow)";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Sambucus nigra";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Sambucus racemosa";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Sorbaria sorbifolia";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Sorbus americana";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Sorbus aucuparia";

									plantEXCOL1(22); gotoxy(42, 23); cout << "Sorbus decora";
									plantEXCOL2(22); gotoxy(68, 23); cout << "Spiraea";
									plantEXCOL3(22); gotoxy(94, 23); cout << "Staphylea";

									_getch();
									break;
								case 'T':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX T ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Tilia americana";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Toxicodendron";

									_getch();
									break;
								case 'U':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX U ÄÄÄÄÄÄÄ"; //output header

									gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
									gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Ulmus americana";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Ulmus pumila";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Ulmus rubra";

									_getch();
									break;
								case 'V':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX V ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Vaccinium";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Viburnum dentatum";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Viburnum lantanoides";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Viburnum lentago";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Viburnum nudum";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Vitis labrusca";

									plantEXCOL1(22); gotoxy(42, 23); cout << "Vitis riparia";

									_getch();
									break;
								case 'Z':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";

									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX Z ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Toothed";

									plantEXCOL1(14); gotoxy(46, 15); cout << "Zanthoxylum";

									_getch();
									break;
								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'B' || typeIndex == 'C' || typeIndex == 'D' || typeIndex == 'E' ||
								typeIndex == 'F' || typeIndex == 'G' || typeIndex == 'H' || typeIndex == 'I' || typeIndex == 'J' ||
								typeIndex == 'L' || typeIndex == 'M' || typeIndex == 'O' || typeIndex == 'P' || typeIndex == 'R' ||
								typeIndex == 'S' || typeIndex == 'T' || typeIndex == 'U' || typeIndex == 'V' || typeIndex == 'Z' || typeIndex != 'r');
							_getch();
							break;


						case 'C': //Lobed
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4);
									cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
									cout << endl << endl;

								SetColorAndBackground(15, 0);
								gotoxy(10, 6);
									cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
								gotoxy(20, 7);
									cout << "-LOBED-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(4, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(10, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(10, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(10, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(10, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(10, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(10, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;


									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Lobed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Acer negundo";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Acer pensylvanicum";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Acer platanoides";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Acer rubrum";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Acer saccharinum";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Acer saccharum";

									plantEXCOL1(22); gotoxy(42, 23); cout << "Acer spicatum";

									_getch();
									break;

								case 'M':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;


									menuInstructions(); alphabetInstructions(); prompt();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX M ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Lobed";

									plantEXCOL1(14); gotoxy(46, 15); cout << "Morus alba";

									_getch();
									break;

								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Lobed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Parthenocissus";
									plantEXCOL2(14); gotoxy(67, 15); cout << "Platanus occidentalis";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Populus alba";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Pueraria montana";

									_getch();
									break;
								case 'Q':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX Q ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Lobed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Quercus alba";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Quercus bicolor";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Quercus coccinea";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Quercus ilicifolia";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Quercus macrocarpa";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Quercus montana";

									plantEXCOL1(22); gotoxy(42, 23); cout << "Quercus prinoides";
									plantEXCOL2(22); gotoxy(68, 23); cout << "Quercus rubra";
									plantEXCOL3(22); gotoxy(94, 23); cout << "Quercus velutina";

									_getch();
									break;
								case 'R':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX R ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Lobed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Ribes americanum";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Ribes cynosbati";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Ribes glandulosum";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Ribes hirtellum";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Ribes lacustre";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Ribes triste";

									plantEXCOL1(22); gotoxy(42, 23); cout << "Rubus odoratus";

									_getch();
									break;
								case 'S':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX S ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Lobed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Sassafras albidum";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Symphoricarpos";

									_getch();
									break;
								case 'T':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX T ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Lobed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Toxicodendron";

									_getch();
									break;

								case 'V':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX V ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Broad-leaved Woody Plants | Leaf Margin: Lobed";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Viburnum opulus";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Vitis aestivalis";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Vitis labrusca";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Vitis riparia";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'M' || typeIndex == 'O' || typeIndex == 'P' || typeIndex == 'Q' ||
								typeIndex == 'R' || typeIndex == 'S' || typeIndex == 'T' || typeIndex == 'V' || typeIndex != 'r');
							_getch();
							break;

						case 'D': //Return
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
									woodyLeaf();
									menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
								menuInstructions();
							_getch();
							break;
						} //end switch
					} //end do while
					while (type == 'A' || type == 'B' || type == 'C' || type != 'D' );
					_getch();
					break;

				case 'B': //NEEDLE
					do {
						system("cls");
						obsbox();
						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
							cout << endl << endl;

							needleLeaf(); //needle/scale
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ WOODY PLANTS ÄÄÄÄÄÄÄ"; //output header
							cout << endl;

							plantHeader(20);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "NEEDLE-LEAVED PLANTS";

							leafboxInfo(20);
							SetColorAndBackground(15, 0);
							gotoxy(43, 16); cout << "Pines, spruces, larches, cedars, and other conifers";

							gotoxy(43, 18); cout << "Some exceptions are that some conifers can be short shrubs. A few ";
							gotoxy(43, 19); cout << "woody angiosperms have very small, narrow leaves but have flowers ";

							leafShapeBoxInfo(25);
							SetColorAndBackground(15, 0);
							gotoxy(43, 23); cout << "NEEDLE-LIKE LEAVES = separate leaves & do not hide twig surface";
							gotoxy(43, 24); cout << "SCALE-LIKE LEAVES  = leaves are tightly overlapping ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To D......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> type;

						switch (type) {
						case 'A': //Needle-Like (Kind of Leaf)
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4);
									cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
									cout << endl << endl;

								SetColorAndBackground(15, 0);
								gotoxy(10, 6);
									cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
								gotoxy(18, 7);
									cout << "-NEEDLE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(4, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(10, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(10, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Needle-leaved Woody Plants | Leaf Form: Neddle-like";

									plantEXCOL1(14); gotoxy(46, 15); cout << "Abies balsamea";

									_getch();
									break;
								case 'L':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX L ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Needle-leaved Woody Plants | Leaf Form: Neddle-like";

									plantEXCOL1(14); gotoxy(46, 15); cout << "Larix laricina";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;
										alphabetInstructions(); prompt();

									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Needle-leaved Woody Plants | Leaf Form: Neddle-like";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Picea abies";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Picea glauca";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Picea mariana";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Picea rubens";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Pinus banksiana";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Pinus resinosa";

									plantEXCOL1(22); gotoxy(42, 23); cout << "Pinus rigida";
									plantEXCOL2(22); gotoxy(68, 23); cout << "Pinus strobus";

									_getch();
									break;
								case 'T':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX T ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Needle-leaved Woody Plants | Leaf Form: Neddle-like";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Taxus canadensis";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Tsuga canadensis";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'L' || typeIndex == 'P' || typeIndex == 'T' || typeIndex != 'r' );
							_getch();
							break;

						case 'B': //Scale-Like (kind of leaf)
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4);
									cout << "ÄÄÄÄÄÄÄ MAIN MENU ÄÄÄÄÄÄÄ";
									cout << endl << endl;

								SetColorAndBackground(15, 0);
								gotoxy(10, 6);
									cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
								gotoxy(18, 7);
									cout << "-SCALED-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(10, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(4, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(10, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Needle-leaved Woody Plants | Leaf Form: Scale-like";

									plantEXCOL1(14); gotoxy(46, 15); cout << "Abies balsamea";

									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Needle-leaved Woody Plants | Leaf Form: Scale-like";

									plantEXCOL1(14); gotoxy(46, 15); cout << "Chamaecyparis";

									_getch();
									break;
								case 'J':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX J ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Needle-leaved Woody Plants | Leaf Form: Scale-like";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Juniperus communis";
									plantEXCOL2(14); gotoxy(67, 15); cout << "Juniperus horizontalis";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Juniperus virginiana";

									_getch();
									break;
								case 'T':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF MARGIN ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX T ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Needle-leaved Woody Plants | Leaf Form: Scale-like";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Thuja occidentalis";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Tsuga canadensis";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch indexes
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'C' || typeIndex == 'J' || typeIndex == 'T' ||  typeIndex != 'r');
							_getch();
							break;
					case 'C': //Return
							_getch();
							break;
					default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
									needleLeaf();
									menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
								gotoxy(44, 11); cout << "INVALID COMMAND";
								gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
							menuInstructions();
							_getch();
							break;
					} //end switch
					} //end do while
					while (type == 'A' || type == 'B' || type != 'C');
					_getch();
					break;

				case 'C': //RETURN WOODY
					_getch();
					break;

				default:
					system("cls");
					obsbox();
					SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
							woody();
							menuInstructions(); prompt();
					outputheader();
					SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ WOODY PLANTS ÄÄÄÄÄÄÄ"; //output header

					plantHeader(15);
					gotoxy(44, 11); cout << "INVALID COMMAND";
					gotoxy(41, 13); cout << "Value Entered Invalid...";
						menuInstructions();
					_getch();
					break;

				} //end switch Index
			} //end do while Index
			while (mainchoice == 'A' || mainchoice == 'B' || mainchoice != 'C'  );
			_getch();
			break;

		case 'B': //AQUATIC
			do {
				system("cls");
				obsbox();
					aquatic(); //with or without stem/leaves
					menuInstructions();
				outputheader();
				SetColorAndBackground(15, 0);
				gotoxy(80, 6);
					cout << "ÄÄÄÄÄÄÄ PLANT CATEGORY ÄÄÄÄÄÄÄ"; //output header
					cout << endl;

					plantHeader(14);
					SetColorAndBackground(14, 0);
					gotoxy(44, 11);
						cout << "AQUATIC PLANTS";

					plantInfo(14);
					SetColorAndBackground(14, 0);
					gotoxy(44, 15);
						cout << "INFORMATION";

					boxInfo(28);
					SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Plants with their leaves and/or stems submerged or floating in water";

						gotoxy(43, 22); cout << "Specialized submersed leaves and tissues to withstand flooding";

						gotoxy(43, 24); cout << "EXCEPTIONS: Some land plants can be flooded temporarily but cannot ";
						            gotoxy(55, 25); cout << "live long in water. Also, sometimes aquatic plants are  ";
						            gotoxy(55, 26); cout << "stranded out of water or may be amphibious";

				SetColorAndBackground(14, 0);
				gotoxy(12, 29);
					cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
				gotoxy(21, 29);
					cout << "Select From";
				gotoxy(12, 30);
					cout << "Options A To C......";
				SetColorAndBackground(14, 0);
				gotoxy(12, 34);
					cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> mainchoice;


				switch (mainchoice) {
				case 'A': //Water plants with leaves and stems
					do {
						system("cls");
						obsbox();
						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";

							aquaticLeaf(); //floating/submerged
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ AQUATIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(35);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "AQUATIC PLANTS WITH LEAVES AND STEM";

							leafboxInfo(20);
							SetColorAndBackground(15, 0);
							gotoxy(43, 16); cout << "Milfoils, watershields, bladderworts, and other submerged plants";

							gotoxy(43, 18); cout << "These plants spend their lives under water or floating near the  ";
							gotoxy(43, 19); cout << "water's surface. They are larger than duckweeds and watermeal. ";

							leafShapeBoxInfo(25);
							SetColorAndBackground(15, 0);
							gotoxy(43, 23); cout << "FLOATING   = leaves are floating at the surface of the water";
							gotoxy(43, 24); cout << "SUBMERGED  = leaves are all submerged underwater ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To D......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> type;

						switch (type) {
						case 'A': //Floating (Kind of Leaf)
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4);
									cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
									cout << endl << endl;

								SetColorAndBackground(15, 0);
								gotoxy(10, 6);
									cout << "ÄÄÄÄÄ LEAVES & STEM ÄÄÄÄÄ";
								gotoxy(20, 7);
									cout << "-WITH-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(10, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(10, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(10, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(10, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(10, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(10, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Floating";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Alisma subcordatum";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Alisma triviale";

									_getch();
									break;
								case 'B':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX B ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Floating";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Brasenia schreberi";

									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Floating";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Cabomba caroliniana";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Callitriche palustris";

									_getch();
									break;
								case 'G':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX G ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Floating";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Glyceria borealis";

									_getch();
									break;
								case 'M':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX M ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Floating";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Marsilea quadrifolia";

									_getch();
									break;
								case 'N':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX N ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Floating";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Nasturtium officinale";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Nuphar variegata";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Nymphaea odorata";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Nymphoides cordata";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Floating";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Potamogeton natans";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Potamogeton nodosus";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Potamogeton spirillus";


									_getch();
									break;
								case 'U':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX U ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Floating";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Utricularia radiata";

									_getch();
									break;
								case 'Z':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX Z ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Floating";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Zizania aquatica";

									_getch();
									break;
								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'B' || typeIndex == 'C' || typeIndex == 'G' || typeIndex == 'M' ||
								typeIndex == 'N' || typeIndex == 'P' || typeIndex == 'U' || typeIndex == 'Z' || typeIndex != 'r');
							_getch();
							break;

						case 'B': //Submerged
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4);
									cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
									cout << endl << endl;

								SetColorAndBackground(15, 0);
								gotoxy(10, 6);
									cout << "ÄÄÄÄÄ LEAVES & STEM ÄÄÄÄÄ";
								gotoxy(20, 7);
									cout << "-WITH-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(10, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(10, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(10, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(10, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(10, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(10, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(10, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(4, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(10, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(10, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Submedged";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Alisma triviale";

									_getch();
									break;

								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Submedged";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Ceratophyllum";

									_getch();
									break;
								case 'E':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX E ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Submedged";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Elatine minima";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Eleocharis acicularis";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Eleocharis robbinsii";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Elodea canadensis";

									_getch();
									break;
								case 'G':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX G ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Submedged";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Gratiola aurea";

									_getch();
									break;
								case 'H':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX G ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Submedged";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Hypericum boreale";

									_getch();
									break;
								case 'I':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX I ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Submedged";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Isoetes echinospora";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Isoetes lacustris";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Isoetes tuckermanii";

									_getch();
									break;
								case 'J':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX J ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Submedged";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Juncus militaris";

									_getch();
									break;
								case 'L':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX L ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Submedged";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Lobelia dortmanna";

									_getch();
									break;
								case 'N':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX N ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Submedged";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Najas flexilis";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Nasturtium officinale";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Nuphar variegata";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Nymphaea odorata";

									_getch();
									break;
								case 'R':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX R ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Submedged";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Ruppia maritima";

									_getch();
									break;
								case 'Z':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX Z ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "With Leaves & Stem Aquatic Plants | Leaf Form: Submedged";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Zostera marina";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'C' || typeIndex == 'E' || typeIndex == 'G' || typeIndex == 'H' ||
								typeIndex == 'I' || typeIndex == 'J' || typeIndex == 'L' || typeIndex == 'N' || typeIndex == 'R' ||
								typeIndex == 'Z' || typeIndex != 'r');
							_getch();
							break;

						case 'C': //Return
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
									aquaticLeaf();
									menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
								menuInstructions();
							_getch();
							break;
						} //end switch
					} //end do while
					while (type == 'A' || type == 'B' || type != 'C');
					_getch();
					break;

				case 'B': ////Tiny water plants with no true stem
					do {
						system("cls");
						obsbox();
						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";

							aquaticLeaf(); //floating/submerged
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ AQUATIC PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(36);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
							cout << "AQUATIC PLANTS WITHOUT LEAVES & STEM";

							leafboxInfo(20);
							SetColorAndBackground(15, 0);
							gotoxy(43, 16); cout << "Duckweeds and other very small floating species";

							gotoxy(43, 18); cout << "These plants do not have distinct stems and leaves; instead, they";
							gotoxy(43, 19); cout << "have a thallus that may have roots hanging from the lower surface.";

							leafShapeBoxInfo(25);
							SetColorAndBackground(15, 0);
							gotoxy(43, 23); cout << "FLOATING   = leaves are floating at the surface of the water";
							gotoxy(43, 24); cout << "SUBMERGED  = leaves are all submerged underwater ";

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To D......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> type;

						switch (type) {
						case 'A': //Floating (Kind of Leaf)
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4);
									cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
									cout << endl << endl;

								SetColorAndBackground(15, 0);
								gotoxy(10, 6);
									cout << "ÄÄÄÄÄ LEAVES & STEM ÄÄÄÄÄ";
								gotoxy(20, 7);
									cout << "-WITHOUT-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); gotoxy(107, 23); cout << "T";

								plantALCOL1(26) ;gotoxy(48, 27); cout << "U";
								plantALCOL2(26); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); gotoxy(67, 31); cout << "Z";


								SetColorAndBackground(14, 0);
								gotoxy(12, 29);
									cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
								gotoxy(21, 29);
									cout << "Select From";
								gotoxy(12, 30);
									cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
								gotoxy(12, 34);
									cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'L':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX L ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "No Leaves & Stem Aquatic Plants | Leaf Form: No Papilla";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Lemna minor";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Lemna trisulca";

									_getch();
									break;
								case 'S':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX S ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "No Leaves & Stem Aquatic Plants | Leaf Form: No Papilla";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Spirodela polyrrhiza";

									_getch();
									break;
								case 'W':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄÄ LEAF FORMS ÄÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX W ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "No Leaves & Stem Aquatic Plants | Leaf Form: No Papilla";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Wolffia borealis";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Wolffia columbiana";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'L' || typeIndex == 'S' || typeIndex == 'W' || typeIndex != 'r');
							_getch();
							break;

						case 'B': //Return
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
								aquaticLeaf();
									menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
								menuInstructions();
							_getch();
							break;
						} //end switch
					} //end do while
					while (type == 'A' || type == 'B' || type != 'C');
					_getch();
					break;

				case 'C': //RETURN WOODY
					_getch();
					break;

				default:
					system("cls");
					obsbox();
					SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
						aquatic();
							menuInstructions(); prompt();
					outputheader();
					SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ AQUATIC PLANTS ÄÄÄÄÄÄÄ"; //output

					plantHeader(15);
					gotoxy(44, 11); cout << "INVALID COMMAND";
					gotoxy(41, 13); cout << "Value Entered Invalid...";

					menuInstructions();
					_getch();
					break;

				} //end switch AQUATIC Index
			} //end do while AQUATIC Index
			while (mainchoice == 'A' || mainchoice == 'B' || mainchoice != 'C'  );
			_getch();
			break;

		case 'C': //GRASS-LIKE
			do {
				system("cls");
				obsbox();
					grass(); //sedges/true grasses/others
					menuInstructions();
				outputheader();
				SetColorAndBackground(15, 0);
					gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ PLANT CATEGORY ÄÄÄÄÄÄÄ"; //output header

					plantHeader(17);
					SetColorAndBackground(14, 0);
					gotoxy(44, 11); cout << "GRASS-LIKE PLANTS";

					plantInfo(14);
					SetColorAndBackground(14, 0);
					gotoxy(44, 15); cout << "INFORMATION";

					boxInfo(28);
					SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Grasses, sedges, and other plants with long, narrow leaves";

						gotoxy(43, 22); cout << "Leaves consisting of a narrow blade and a tubular sheath around ";
						gotoxy(43, 23); cout << "the stem; small flowers without obvious sepals and petals";

						gotoxy(43, 25); cout << "EXCEPTIONS: Some non-grasses have very narrow leaves but produce  ";
						            gotoxy(55, 26); cout << "showy flowers ";

				SetColorAndBackground(14, 0);
				gotoxy(12, 29);
					cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
				gotoxy(21, 29);
					cout << "Select From";
				gotoxy(12, 30);
					cout << "Options A To D......";
				SetColorAndBackground(14, 0);
				gotoxy(12, 34);
					cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> mainchoice;


				switch (mainchoice) {
				case 'A': //SEDGES
					do {
					system("cls");
					obsbox();
					SetColorAndBackground(0, 14);
					gotoxy(10, 4);
						cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";
							plantResultsMenu();
							menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ GRASS PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "SEDGES (GRASS)";

							plantInfo(14);
							SetColorAndBackground(14, 0);
							gotoxy(44, 15);
								cout << "INFORMATION";

							boxInfo(27);

							SetColorAndBackground(15, 0);
							gotoxy(43, 20); cout << "The Flowering Plants are also known as Angiospermae or Magnoliophyta.";
							gotoxy(43, 21); cout << "From the word itself 'flowering', Flowering Plants produce flowers, ";
							gotoxy(43, 22); cout << "fruits, and seeds. ";

							gotoxy(43, 24); cout << "The colorfulness of these angiosperms brings wherever it is placed,";
							gotoxy(43, 25); cout << "an uplifting spirit that adds to the room’s aesthetic attractiveness. ";

					SetColorAndBackground(14, 0);
					gotoxy(12, 29);
						cout << "<NOTES>:";
					SetColorAndBackground(15, 0);
					gotoxy(21, 29);
						cout << "Select From";
					gotoxy(12, 30);
						cout << "Options A To B......";
					SetColorAndBackground(14, 0);
					gotoxy(12, 34);
						cout << "<ENTER>: ";
					SetColorAndBackground(15, 0);
						cin >> prog;

						switch (prog){
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";
								cout << endl << endl;

								plantResultsMenu();
								menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ SEDGES GRASS ÄÄÄÄÄÄÄ"; //output header
								cout << endl;

								gotoxy(44, 11); cout << "Here are some of the possible plant matches in the category: ";
								gotoxy(44, 12); cout << "Sedges | - Grass Plants ";

							plantEXCOL1(14); gotoxy(42, 15); cout << "Carex albicans";
							plantEXCOL2(14); gotoxy(68, 15); cout << "Carex annectens";
							plantEXCOL3(14); gotoxy(94, 15); cout << "Carex aquatilis";

							plantEXCOL1(18); gotoxy(42, 19); cout << "Carex arctata";
							plantEXCOL2(18); gotoxy(68, 19); cout << "Carex atlantica";
							plantEXCOL3(18); gotoxy(94, 19); cout << "Carex blanda";

							plantEXCOL1(22); gotoxy(42, 23); cout << "Carex brunnescens";
							plantEXCOL2(22); gotoxy(68, 23); cout << "Carex canescens";
							plantEXCOL3(22); gotoxy(94, 23); cout << "Carex communis";

							plantEXCOL1(26); gotoxy(42, 27); cout << "Carex conoidea";
							plantEXCOL2(26); gotoxy(68, 27); cout << "Carex crawfordii";
							plantEXCOL3(26); gotoxy(94, 27); cout << "Carex crinita";

							plantEXCOL1(30); gotoxy(42, 31); cout << "Carex debilis";
							plantEXCOL2(30); gotoxy(68, 31); cout << "Carex deweyana";
							plantEXCOL3(30); gotoxy(94, 31); cout << "Carex digitalis";

							_getch();
							break;

						case 'B':
							_getch();
							break;

						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
									plantResultsMenu();
								menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
								menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;
				case 'B': //TRUE GRASSES
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";
							cout << endl << endl;

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ GRASS PLANTS ÄÄÄÄÄÄÄ"; //output header
							cout << endl;

						plantHeader(12);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11);
							cout << "TRUE GRASSES";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15);
							cout << "INFORMATION";

							boxInfo(28);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Foliage plants are plants considered to have decorative, colorful and";
						gotoxy(43, 21); cout << "interesting leaves. Such plants can create interesting garden spaces";
						gotoxy(43, 22); cout << "and can provide shade, color and cover for a range of needs.";

						gotoxy(43, 24); cout << "Using foliage plants can provide long-lasting benefits such as ";
						gotoxy(43, 25); cout << "ongoing decorative appeal, longer term shading or cover and, can ";
						gotoxy(43, 26); cout << "even provide greater air quality.  ";


						SetColorAndBackground(14, 0);
						gotoxy(12, 29);
							cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
						gotoxy(21, 29);
							cout << "Select From";
						gotoxy(12, 30);
							cout << "Options A To B......";
						SetColorAndBackground(14, 0);
						gotoxy(12, 34);
							cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";
								cout << endl << endl;

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄÄ TRUE GRASSES ÄÄÄÄÄÄÄ"; //output header
								cout << endl;

								gotoxy(44, 11); cout << "Here are some of the possible plant matches in the category: ";
								gotoxy(44, 12); cout << "True Grasses | - Grass Plants ";

								plantEXCOL1(14); gotoxy(42, 15); cout << "Agrostis capillaris";
								plantEXCOL2(14); gotoxy(68, 15); cout << "Alopecurus pratensis";
								plantEXCOL3(14); gotoxy(94, 15); cout << "Andropogon gerardii";

								plantEXCOL1(18); gotoxy(42, 19); cout << "Bromus ciliatus";
								plantEXCOL2(18); gotoxy(68, 19); cout << "Bromus inermis";
								plantEXCOL3(18); gotoxy(94, 19); cout << "Cinna arundinacea";

								plantEXCOL1(22); gotoxy(42, 23); cout << "Cinna latifolia";
								plantEXCOL2(22); gotoxy(68, 23); cout << "Dactylis glomerata";
								plantEXCOL3(22); gotoxy(94, 23); cout << "Danthonia spicata";

								plantEXCOL1(26); gotoxy(42, 27); cout << "Elymus repens";
								plantEXCOL2(26); gotoxy(68, 27); cout << "Eragrostis pilosa";
								plantEXCOL3(26); gotoxy(94, 27); cout << "Festuca filiformis";

								plantEXCOL1(30); gotoxy(42, 31); cout << "Glyceria borealis";
								plantEXCOL2(30); gotoxy(68, 31); cout << "Hordeum jubatum";
								plantEXCOL3(30); gotoxy(94, 31); cout << "Leersia oryzoides";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
									plantResultsMenu();
									menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
								menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;
				case 'C': //OTHER GRASSES
					do {
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";
							cout << endl << endl;

							plantResultsMenu();
							menuInstructions();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ GRASS PLANTS ÄÄÄÄÄÄÄ"; //output header
							cout << endl;

						plantHeader(13);
						SetColorAndBackground(14, 0);
						gotoxy(44, 11);
							cout << "OTHER GRASSES";

						plantInfo(14);
						SetColorAndBackground(14, 0);
						gotoxy(44, 15);
							cout << "INFORMATION";

							boxInfo(28);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Foliage plants are plants considered to have decorative, colorful and";
						gotoxy(43, 21); cout << "interesting leaves. Such plants can create interesting garden spaces";
						gotoxy(43, 22); cout << "and can provide shade, color and cover for a range of needs.";

						gotoxy(43, 24); cout << "Using foliage plants can provide long-lasting benefits such as ";
						gotoxy(43, 25); cout << "ongoing decorative appeal, longer term shading or cover and, can ";
						gotoxy(43, 26); cout << "even provide greater air quality.  ";


						SetColorAndBackground(14, 0);
						gotoxy(12, 29);
							cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
						gotoxy(21, 29);
							cout << "Select From";
						gotoxy(12, 30);
							cout << "Options A To B......";
						SetColorAndBackground(14, 0);
						gotoxy(12, 34);
							cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> prog;

						switch (prog) {
						case 'A': //RESULTS
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
							gotoxy(10, 4);
								cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";
								cout << endl << endl;

							plantResultsMenu();
							menuInstructions(); prompt();

							outputheader();
							SetColorAndBackground(15, 0);
							gotoxy(80, 6);
								cout << "ÄÄÄÄÄÄ OTHER GRASSES ÄÄÄÄÄÄ"; //output header
								cout << endl;

								gotoxy(44, 11); cout << "Here are some of the possible plant matches in the category: ";
								gotoxy(44, 12); cout << "True Grasses | - Grass Plants ";

							plantEXCOL1(14); gotoxy(42, 15); cout << "Cyperus dentatus";
							plantEXCOL2(14); gotoxy(68, 15); cout << "Cyperus esculentus";
							plantEXCOL3(14); gotoxy(94, 15); cout << "Cyperus lupulinus";

							plantEXCOL1(18); gotoxy(42, 19); cout << "Cyperus strigosus";
							plantEXCOL2(18); gotoxy(68, 19); cout << "Eleocharis obtusa";
							plantEXCOL3(18); gotoxy(94, 19); cout << "Juncus acuminatus";

							plantEXCOL1(22); gotoxy(42, 23); cout << "Juncus articulatus";
							plantEXCOL2(22); gotoxy(68, 23); cout << "Juncus balticus";
							plantEXCOL3(22); gotoxy(94, 23); cout << "Luzula acuminata";

							plantEXCOL1(26); gotoxy(42, 27); cout << "Rhynchospora alba";
							plantEXCOL2(26); gotoxy(68, 27); cout << "Scirpus atrocinctus";
							plantEXCOL3(26); gotoxy(94, 27); cout << "Scirpus atrovirens";

							plantEXCOL1(30); gotoxy(42, 31); cout << "Typha angustifolia";
							plantEXCOL2(30); gotoxy(68, 31); cout << "Typha latifolia";

							_getch();
							break;

						case 'B':
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
									plantResultsMenu();
									menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
								menuInstructions();
							_getch();
							break;
						} //end switch menu
					} //end do while menu
					while (prog == 'A' || prog != 'B');
					_getch();
					break;
				case 'D':
					_getch();
					break;
				default:
					system("cls");
					obsbox();
					grass();
					SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";

					outputheader(); prompt();
					SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX ÄÄÄÄÄÄÄ"; //output header

					plantHeader(15);
					gotoxy(44, 11); cout << "INVALID COMMAND";
					gotoxy(41, 13); cout << "Value Entered Invalid...";
						menuInstructions();
					_getch();
					break;
				} //end switch menu
			} //end do while menu
			while (mainchoice == 'A' || mainchoice == 'B' || mainchoice == 'C' || mainchoice != 'D');
			_getch();
			break;

		case 'D': //Orchids (A-Z)
			do {
				system("cls");
				obsbox();
					orchids(); //index 1-3 for leaf blade shapes
					menuInstructions();
				outputheader();
				SetColorAndBackground(15, 0);
				gotoxy(80, 6);
					cout << "ÄÄÄÄÄÄÄ PLANT CATEGORY ÄÄÄÄÄÄÄ"; //output header
					cout << endl;

					plantHeader(13);
					SetColorAndBackground(14, 0);
					gotoxy(44, 11);
						cout << "ORCHID PLANTS";

					plantInfo(14);
					SetColorAndBackground(14, 0);
					gotoxy(44, 15);
						cout << "INFORMATION";

					boxInfo(28);
					SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Lilies, orchids, irises, aroids, and other monocots";

						gotoxy(43, 22); cout << "Seedlings have a single embryo leaf (cotyledon); plants have ";
						gotoxy(43, 23); cout << "flower parts in multiples of 3 and parallel-veined leaves";

						gotoxy(43, 25); cout << "EXCEPTIONS: Grasses are also monocots but are grouped under ";
						            gotoxy(55, 26); cout << " Grass-like Plants ";

					SetColorAndBackground(14, 0);
				gotoxy(12, 29);
					cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
				gotoxy(21, 29);
					cout << "Select From";
				gotoxy(12, 30);
					cout << "Options A To D......";
				SetColorAndBackground(14, 0);
				gotoxy(12, 34);
					cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> mainchoice;


				switch (mainchoice) {
				case 'A': //Index 1 (Leaf Blade Shape)
					do {
						system("cls");
						obsbox();
						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

							orchidsLeaf1(); //ELLIPTIC / LANCEOLATE / LINEAR
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ ORCHID PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(32);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "ORCHID PLANTS - LEAF BLADE SHAPE";

							leafboxInfo(20);
							SetColorAndBackground(15, 0);
							gotoxy(43, 16); cout << "ELLIPTIC   = widest near the middle and tapering at both ends";
							gotoxy(43, 17); cout << "LANCEOLATE = widest below the middle and tapering at both ends ";
							gotoxy(43, 18); cout << "LINEAR     = very narrow with more or less parallel sides ";

							//LEAF DRAWING
							leafDrawBOX1();
							leafDrawBOX2();
							leafDrawBOX3();
							leafShapeDrawing1();

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To D......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> type;

						switch (type) {
						case 'A': //Elliptic
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄÄ ELLIPTIC ÄÄÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(10, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(10, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(10, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(10, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(10, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Elliptic";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Arethusa bulbosa";

									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";
										cout<< endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Elliptic";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Calopogon tuberosus";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Cypripedium acaule";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Cypripedium reginae";

									_getch();
									break;
								case 'E':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX E ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Elliptic";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Epipactis helleborine";

									_getch();
									break;
								case 'G':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX G ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Elliptic";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Goodyera pubescens";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Goodyera tesselata";

									_getch();
									break;

								case 'I':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX I ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Elliptic";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Isotria verticillata";

									_getch();
									break;

								case 'N':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX N ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Elliptic";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Genus: Neottia";

									_getch();
									break;

								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Elliptic";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Genus: Platanthera";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Genus: Pogonia";

									_getch();
									break;
								case 'S':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX S ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Elliptic";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Spiranthes cernua";

									_getch();
									break;
								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'C' || typeIndex == 'E' || typeIndex == 'G' || typeIndex == 'I' ||
								typeIndex == 'N' || typeIndex == 'P' || typeIndex == 'S' || typeIndex != 'r');
							_getch();
							break;



						case 'B': //LANCEOLATE
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄ LANCEOLATE ÄÄÄÄÄÄÄ";
								gotoxy(20, 7);  cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(10, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(10, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(10, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Lanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Arethusa bulbosa";

									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Lanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Calopogon tuberosus";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Cypripedium reginae";

									_getch();
									break;
								case 'E':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX E ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Lanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Epipactis helleborine";

									_getch();
									break;
								case 'I':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX I ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Lanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Isotria verticillata";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Lanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Platanthera aquilonis";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Platanthera dilatata";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Platanthera lacera";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Platanthera psycodes";

									_getch();
									break;
								case 'S':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX S ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Lanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Spiranthes cernua";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
										alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'C' || typeIndex == 'E' || typeIndex == 'I' ||
								typeIndex == 'P' || typeIndex == 'S' || typeIndex != 'r');
							_getch();
							break;



						case 'C': //LINEAR
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄÄÄ LINEAR ÄÄÄÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(10, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6);
										cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Linear";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Arethusa bulbosa";

									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Linear";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Calopogon tuberosus";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Linear";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Platanthera aquilonis";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Platanthera dilatata";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Platanthera lacera";

									_getch();
									break;
								case 'S':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX S ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Linear";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Spiranthes cernua";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
										alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'C' || typeIndex == 'P' || typeIndex == 'S' || typeIndex != 'r');
							_getch();
							break;

						case 'D': //Return
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
									orchidsLeaf1();
									menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
								menuInstructions();
							_getch();
							break;
						} //end switch
					} //end do while
					while (type == 'A' || type == 'B' || type == 'C' || type != 'D');
					_getch();
					break;

				case 'B': //Index 2 (Leaf Blade Shape)
					do {
						system("cls");
						obsbox();
						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

							orchidsLeaf2(); //OBLANCEOLATE / OBLONG / OBOVATE
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ ORCHID PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(32);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "ORCHID PLANTS - LEAF BLADE SHAPE";

							leafboxInfo(20);
							SetColorAndBackground(15, 0);
							gotoxy(43, 16); cout << "OBLANCEOLATE = lance-shaped; widest point is above the middle";
							gotoxy(43, 17); cout << "OBLONG       = rectangular but with rounded ends ";
							gotoxy(43, 18); cout << "OBOVATE      = egg-shaped; widest point is above the middle";

							//LEAF DRAWING
							leafDrawBOX1();
							leafDrawBOX2();
							leafDrawBOX3();
							leafShapeDrawing2();

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To D......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> type;

						switch (type) {
						case 'A': //OBLANCEOLATE
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄ OBLANCEOLATE ÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(4, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(10, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Oblanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Arethusa bulbosa";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Oblanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Platanthera clavellata";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Platanthera dilatata";

									_getch();
									break;
								case 'S':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX S ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Oblanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Spiranthes cernua";

									_getch();
									break;
								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'P' || typeIndex == 'S' || typeIndex != 'r');
							_getch();
							break;


						case 'B': //OBLONG
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄÄÄ OBLONG ÄÄÄÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(10, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Oblong";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Arethusa bulbosa";

									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Oblong";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Cypripedium acaule";

									_getch();
									break;
								case 'I':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX I ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Oblong";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Isotria verticillata";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Oblong";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Platanthera aquilonisa";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Platanthera dilatata";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Platanthera lacera";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Platanthera psycodes";
									plantEXCOL2(18); gotoxy(68, 19); cout << "Genus: Pogonia";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
										alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'C' || typeIndex == 'I' || typeIndex == 'P' || typeIndex != 'r');
							_getch();
							break;


						case 'C': //OBOVATE
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄÄÄ OBOVATE ÄÄÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(10, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(10, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Obovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Arethusa bulbosa";

									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Obovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Cypripedium acaule";

									_getch();
									break;
								case 'I':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX I ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Obovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Isotria verticillata";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Obovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Genus: Platanthera";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Platanthera lacera";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Platanthera psycodes";

									_getch();
									break;
								case 'S':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX S ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Obovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Spiranthes cernua";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Spiranthes lacera";

									_getch();
									break;
								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
										alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'C' || typeIndex == 'I' ||
								typeIndex == 'P' || typeIndex == 'S' || typeIndex != 'r');
							_getch();
							break;

						case 'D': //Return
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
									orchidsLeaf2();
									menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
								menuInstructions();
							_getch();
							break;
						} //end switch
					} //end do while
					while (type == 'A' || type == 'B' || type == 'C' || type != 'D');
					_getch();
					break;


				case 'C': //Index 3 (Leaf Blade Shape)
					do {
						system("cls");
						obsbox();
						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

							orchidsLeaf3(); //ORBICULAR / OVATE / OTHER
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(80, 6);
							cout << "ÄÄÄÄÄÄÄ ORCHID PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(32);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "ORCHID PLANTS - LEAF BLADE SHAPE";

							leafboxInfo(20);
							SetColorAndBackground(15, 0);
							gotoxy(43, 16); cout << "ORBICULAR = roughly circular, as wide as long";
							gotoxy(43, 17); cout << "OVATE     = widest below the middle; ends broadly tapering";
							gotoxy(43, 18); cout << "OTHER     = leaf shape other than those described";

							//LEAF DRAWING
							leafDrawBOX1();
							leafDrawBOX2();
							leafShapeDrawing3();

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To D......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> type;

						switch (type) {
						case 'A': //ORBICULAR
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄÄ ORBICULAR ÄÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(10, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(10, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Orbicular";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Arethusa bulbosa";

									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Orbicular";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Genus: Cypripedium";

									_getch();
									break;
								case 'E':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX E ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Orbicular";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Genus: Epipactis";

									_getch();
									break;
								case 'N':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX N ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Orbicular";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Genus: Neottia";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Orbicular";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Genus: Platanthera";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'C' || typeIndex == 'E' ||
								typeIndex == 'N' || typeIndex == 'P' || typeIndex != 'r');
							_getch();
							break;


						case 'B': //OVATE
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄÄÄÄ OVATE ÄÄÄÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(10, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(10, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(10, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Ovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Arethusa bulbosa";

									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Ovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Cypripedium acaule";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Cypripedium reginae";

									_getch();
									break;
								case 'G':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX G ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Ovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Goodyera pubescens";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Goodyera tesselata";

									_getch();
									break;
								case 'M':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX M ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Ovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Malaxis unifolia";

									_getch();
									break;
								case 'N':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX N ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Ovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Genus: Neottia";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Ovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Genus: Platanthera";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Genus: Pogonia";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
										alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'C' || typeIndex == 'G' || typeIndex == 'M' ||
								typeIndex == 'N' || typeIndex == 'P' || typeIndex != 'r');
							_getch();
							break;

						case 'C': //OTHER
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄÄÄÄ OTHER ÄÄÄÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(4, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Other";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Arethusa bulbosa";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "Orchid Plants | Leaf Blade Shape: Ovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Genus: Platanthera";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
										alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'P' || typeIndex != 'r');
							_getch();
							break;

						case 'D': //Return
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
									orchidsLeaf3();
									menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
								menuInstructions();
							_getch();
							break;
						} //end switch
					} //end do while
					while (type == 'A' || type == 'B' || type == 'C' || type != 'D');
					_getch();
					break;

				case 'D': //Return
						_getch();
						break;
				default:
						system("cls");
					obsbox();
					SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
							orchids();
							menuInstructions(); prompt();
					outputheader();
					SetColorAndBackground(15, 0);
						gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ ORCHID PLANTS ÄÄÄÄÄÄÄ"; //output header

					plantHeader(15);
						gotoxy(44, 11); cout << "INVALID COMMAND";
						gotoxy(41, 13); cout << "Value Entered Invalid...";

					menuInstructions();
					_getch();
					break;
				} //end switch
			} //end do while
			while (mainchoice == 'A' || mainchoice == 'B' || mainchoice == 'C' || mainchoice != 'D');
			_getch();
			break;

		case 'E': //True Ferns (A-Z)
			do {
				system("cls");
				obsbox();
					trueferns(); //index 1-2 for leaf blade shapes
					menuInstructions();
				outputheader();
				SetColorAndBackground(15, 0);
				gotoxy(80, 6);
					cout << "ÄÄÄÄÄÄÄ PLANT CATEGORY ÄÄÄÄÄÄÄ"; //output header
					cout << endl;

					plantHeader(16);
					SetColorAndBackground(14, 0);
					gotoxy(44, 11);
						cout << "TRUE FERN PLANTS";

					plantInfo(14);
					SetColorAndBackground(14, 0);
					gotoxy(44, 15);
						cout << "INFORMATION";

					boxInfo(28);
					SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Ferns, moonworts, and Adder's-tongues with obvious leaves";

						gotoxy(43, 22); cout << "Many true ferns have highly dissected, feathery leaves. Look for ";
						gotoxy(43, 23); cout << "spores on leaf's underside or on specialized portion of leaf.";

						gotoxy(43, 25); cout << "EXCEPTIONS: You'll never see a flower on a fern! Some flowering  ";
						            gotoxy(55, 26); cout << "plants have very feathery leaves, so look carefully. ";

					SetColorAndBackground(14, 0);
				gotoxy(12, 29);
					cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
				gotoxy(21, 29);
					cout << "Select From";
				gotoxy(12, 30);
					cout << "Options A To C......";
				SetColorAndBackground(14, 0);
				gotoxy(12, 34);
					cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> mainchoice;


				switch (mainchoice) {
				case 'A': //Index 1 (Leaf Blade Shape)
					do {
						system("cls");
						obsbox();
						SetColorAndBackground(0, 14);
						gotoxy(10, 4);
							cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

							orchidsLeaf1(); //ELLIPTIC / LANCEOLATE / LINEAR
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(75, 6);
							cout << "ÄÄÄÄÄÄÄ TRUE FERN PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(29);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11);
								cout << "TRUE FERNS - LEAF BLADE SHAPE";

							leafboxInfo(20);
							SetColorAndBackground(15, 0);
							gotoxy(43, 16); cout << "ELLIPTIC   = widest near the middle and tapering at both ends";
							gotoxy(43, 17); cout << "LANCEOLATE = widest below the middle and tapering at both ends ";
							gotoxy(43, 18); cout << "LINEAR     = very narrow with more or less parallel sides ";

							//LEAF DRAWING
							leafDrawBOX1();
							leafDrawBOX2();
							leafDrawBOX3();
							leafShapeDrawing1();

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To D......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> type;

						switch (type) {
						case 'A': //Elliptic
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄÄ ELLIPTIC ÄÄÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(10, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Elliptic";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Athyrium angustum";

									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Elliptic";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Cystopteris fragilis";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Cystopteris tenuis";

									_getch();
									break;

								case 'O':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX O ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Elliptic";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Osmunda claytoniana";

									_getch();
									break;

								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Elliptic";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Genus: Parathelypteris";

									_getch();
									break;

									case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
										alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'C' || typeIndex == 'O' || typeIndex == 'P' || typeIndex != 'r');
							_getch();
							break;

						case 'B': //LANCEOLATE
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄ LANCEOLATE ÄÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(4, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(10, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(10, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(4, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(10, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(10, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Lanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Genus: Asplenium";

									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Lanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Cystopteris fragilis";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Cystopteris tenuis";

									_getch();
									break;
								case 'D':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX D ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Lanceolate";

									plantEXCOL1(14); gotoxy(41, 15); cout << "Deparia acrostichoides";
									plantEXCOL2(14); gotoxy(67, 15); cout << "Diplazium pycnocarpon";
									plantEXCOL3(14); gotoxy(93, 15); cout << "Dryopteris carthusiana";

									plantEXCOL1(18); gotoxy(41, 19); cout << "Dryopteris clintoniana";
									plantEXCOL2(18); gotoxy(67, 19); cout << "Dryopteris cristata";
									plantEXCOL3(18); gotoxy(94, 19); cout << "Dryopteris marginalis";

									_getch();
									break;
								case 'O':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX O ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Lanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Ophioglossum pusillum";

									_getch();
									break;
								case 'T':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX T ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Lanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Thelypteris palustris";

									_getch();
									break;
								case 'W':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX W ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Lanceolate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Woodsia ilvensis";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Woodsia obtusa";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Woodwardia areolata";

									plantEXCOL1(18); gotoxy(42, 19); cout << "Woodwardia virginica";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
										alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";

									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'C' || typeIndex == 'E' || typeIndex == 'I' ||
								typeIndex == 'P' || typeIndex == 'S' || typeIndex != 'r');
							_getch();
							break;



						case 'C': //LINEAR
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄÄÄ LINEAR ÄÄÄÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(10, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(4, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(10, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(4, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(4, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Linear";

									plantEXCOL1(14); gotoxy(41, 15); cout << "Asplenium rhizophyllum";
									plantEXCOL2(14); gotoxy(67, 15); cout << "Asplenium trichomanes";

									_getch();
									break;

								case 'B':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX B ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Linear";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Botrychium simplex";

									_getch();
									break;
								case 'D':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4);
										cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";
										cout << endl << endl;

										alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX D ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Linear";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Dryopteris marginalis";

									_getch();
									break;
								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
									gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
										alphabetInstructions();
										menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
									gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";

									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'B' || typeIndex == 'D' || typeIndex != 'r');
							_getch();
							break;

						case 'D': //Return
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
									orchidsLeaf1();
									menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
								menuInstructions();
							_getch();
							break;
						} //end switch
					} //end do while
					while (type == 'A' || type == 'B' || type == 'C' || type != 'D');
					_getch();
					break;

				case 'B': //Index 2 (Leaf Blade Shape)
					do {
						system("cls");
						obsbox();
						SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

							fernsLeaf2(); //OBLONG / OVATE / TRIANGULAR
						menuInstructions();

						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ TRUE FERNS PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(29);
							SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "TRUE FERNS - LEAF BLADE SHAPE";

							leafboxInfo(20);
							SetColorAndBackground(15, 0);
							gotoxy(43, 16); cout << "OBLONG   = rectangular but with rounded ends";
							gotoxy(43, 17); cout << "OVATE    = widest below the middle; ends broadly tapering";
							gotoxy(43, 18); cout << "TRIANGLE = leaf shape is roughly triangular";

							//LEAF DRAWING
							leafDrawBOX1();
							leafDrawBOX2();
							leafDrawBOX3();
							leafShapeDrawing4();

						SetColorAndBackground(14, 0);
							gotoxy(12, 29); cout << "<NOTES>:";
						SetColorAndBackground(15, 0);
							gotoxy(21, 29); cout << "Select From";
							gotoxy(12, 30); cout << "Options A To D......";
						SetColorAndBackground(14, 0);
							gotoxy(12, 34); cout << "<ENTER>: ";
						SetColorAndBackground(15, 0);
							cin >> type;

						switch (type) {
						case 'A': //OBLONG
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄÄÄ OBLONG ÄÄÄÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(4, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(10, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(4, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(10, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(10, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'B':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX B ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape : Oblong";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Botrychium simplex";

									_getch();
									break;
								case 'D':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX D ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape : Oblong";

									plantEXCOL1(14); gotoxy(41, 15); cout << "Deparia acrostichoides";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Diplazium pycnocarpon";

									_getch();
									break;
								case 'O':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX O ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape : Oblong";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Osmunda claytoniana";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape : Oblong";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Polypodium virginianum";

									_getch();
									break;
								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'B' || typeIndex == 'D' || typeIndex == 'O' || typeIndex == 'P' || typeIndex != 'r');
							_getch();
							break;


						case 'B': //OVATE
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄÄÄÄ OVATE ÄÄÄÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(4, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(10, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(4, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(10, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); gotoxy(67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(4, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(10, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(10, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'B':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX B ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Ovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Botrychium simplex";

									_getch();
									break;
								case 'D':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX D ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Ovate";

									plantEXCOL1(14); gotoxy(41, 15); cout << "Dryopteris carthusiana";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Dryopteris goldiana";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Dryopteris intermedia";

									_getch();
									break;
								case 'O':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX O ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Ovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Ophioglossum pusillum";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Osmunda regalis";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Ovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Pteridium aquilinum";

									_getch();
									break;
								case 'W':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX W ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Ovate";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Woodsia obtusa";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'B' || typeIndex == 'D' || typeIndex == 'O' || typeIndex == 'P' || typeIndex == 'W' || typeIndex != 'r');
							_getch();
							break;

						case 'C': //TRIANGLE
							do {
								system("cls");
								obsbox();
								SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ";

								SetColorAndBackground(15, 0);
								gotoxy(10, 6); cout << "ÄÄÄÄÄÄ TRIANGULAR ÄÄÄÄÄÄÄ";
								gotoxy(20, 7); cout << "-SHAPE-";

								for (int a = 10; a <= 34; a++) {
									SetColorAndBackground(14, 0);
									gotoxy(a, 8);
									cout << "°";
									//cout << "Ü";
								}

								menuInstructions(); alphabetInstructions();

								plantALCOL1(6); SetColorAndBackground(10, 0); gotoxy(48, 7); cout << "A";
								plantALCOL2(6); SetColorAndBackground(10, 0); gotoxy(67, 7); cout << "B";
								plantALCOL3(6); SetColorAndBackground(10, 0); gotoxy(87, 7); cout << "C";
								plantALCOL4(6); SetColorAndBackground(4, 0); gotoxy(107, 7); cout << "D";

								plantALCOL1(10); SetColorAndBackground(4, 0); gotoxy(48, 11); cout << "E";
								plantALCOL2(10); SetColorAndBackground(4, 0); (67, 11); cout << "F";
								plantALCOL3(10); SetColorAndBackground(4, 0); gotoxy(87, 11); cout << "G";
								plantALCOL4(10); SetColorAndBackground(4, 0); gotoxy(107, 11); cout << "H";

								plantALCOL1(14); SetColorAndBackground(4, 0); gotoxy(48, 15); cout << "I";
								plantALCOL2(14); SetColorAndBackground(4, 0); gotoxy(67, 15); cout << "J";
								plantALCOL3(14); SetColorAndBackground(4, 0); gotoxy(87, 15); cout << "K";
								plantALCOL4(14); SetColorAndBackground(4, 0); gotoxy(107, 15); cout << "L";

								plantALCOL1(18); SetColorAndBackground(10, 0); gotoxy(48, 19); cout << "M";
								plantALCOL2(18); SetColorAndBackground(4, 0); gotoxy(67, 19); cout << "N";
								plantALCOL3(18); SetColorAndBackground(10, 0); gotoxy(87, 19); cout << "O";
								plantALCOL4(18); SetColorAndBackground(10, 0); gotoxy(107, 19); cout << "P";

								plantALCOL1(22); SetColorAndBackground(4, 0); gotoxy(48, 23); cout << "Q";
								plantALCOL2(22); SetColorAndBackground(4, 0); gotoxy(67, 23); cout << "R";
								plantALCOL3(22); SetColorAndBackground(4, 0); gotoxy(87, 23); cout << "S";
								plantALCOL4(22); SetColorAndBackground(4, 0); gotoxy(107, 23); cout << "T";

								plantALCOL1(26); SetColorAndBackground(4, 0); gotoxy(48, 27); cout << "U";
								plantALCOL2(26); SetColorAndBackground(4, 0); gotoxy(67, 27); cout << "V";
								plantALCOL3(26); SetColorAndBackground(4, 0); gotoxy(87, 27); cout << "W";
								plantALCOL4(26); SetColorAndBackground(4, 0); gotoxy(107, 27); cout << "X";

								plantALCOL1(30); SetColorAndBackground(4, 0); gotoxy(48, 31); cout << "Y";
								plantALCOL2(30); SetColorAndBackground(4, 0); gotoxy(67, 31); cout << "Z";

								plantALCOL5(30); SetColorAndBackground(14, 0); gotoxy(88, 31); cout << "Press 'r' to Return";

								SetColorAndBackground(14, 0);
									gotoxy(12, 29); cout << "<NOTES>:";
								SetColorAndBackground(15, 0);
									gotoxy(21, 29); cout << "Select From";
									gotoxy(12, 30); cout << "Options A To Z......"; //Available options
								SetColorAndBackground(14, 0);
									gotoxy(12, 34); cout << "<ENTER>: ";
								SetColorAndBackground(15, 0);
									cin >> typeIndex;

								switch (typeIndex) {
								case 'A':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX A ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Triangular";

									plantEXCOL1(14); gotoxy(41, 15); cout << "Asplenium rhizophyllum";

									_getch();
									break;
								case 'B':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX B ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Triangular";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Botrychium dissectum";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Botrychium multifidum";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Botrychium simplex";

									plantEXCOL1(18); gotoxy(41, 19); cout << "Botrychium virginianum";
									_getch();
									break;
								case 'C':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX C ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Triangular";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Cystopteris bulbifera";

									_getch();
									break;
								case 'M':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX M ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Triangular";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Marsilea quadrifolia";

									_getch();
									break;
								case 'O':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX O ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Triangular";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Onoclea sensibilis";

									_getch();
									break;
								case 'P':
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ BLADE SHAPES ÄÄÄÄÄÄ"; cout << endl << endl;

									alphabetInstructions(); prompt();
									menuInstructions();

									outputheader();
									SetColorAndBackground(15, 0); gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT INDEX P ÄÄÄÄÄÄÄ"; //output header

										gotoxy(42, 11); cout << "Here are some of the possible plant matches in the category: ";
										gotoxy(42, 12); cout << "True Ferns | Leaf Blade Shape: Triangular";

									plantEXCOL1(14); gotoxy(42, 15); cout << "Genus: Phegopteris";
									plantEXCOL2(14); gotoxy(68, 15); cout << "Genus: Polypodium";
									plantEXCOL3(14); gotoxy(94, 15); cout << "Pteridium aquilinum";

									_getch();
									break;

								case 'r': //Return
									_getch();
									break;
								default:
									system("cls");
									obsbox();
									SetColorAndBackground(0, 14);
										gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
											alphabetInstructions();
											menuInstructions(); prompt();
									outputheader();
									SetColorAndBackground(15, 0);
										gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

									plantHeader(15);
									gotoxy(44, 11); cout << "INVALID COMMAND";
									gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";
										menuInstructions();
									_getch();
									break;
								} //end switch
							} //end do while
							while (typeIndex == 'A' || typeIndex == 'B' || typeIndex == 'C' || typeIndex != 'r' ||
								typeIndex == 'M' || typeIndex == 'O' || typeIndex == 'P');
							_getch();
							break;

						case 'D': //Return
							_getch();
							break;
						default:
							system("cls");
							obsbox();
							SetColorAndBackground(0, 14);
								gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
								fernsLeaf2();
									menuInstructions(); prompt();
							outputheader();
							SetColorAndBackground(15, 0);
								gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(15);
							gotoxy(44, 11); cout << "INVALID COMMAND";
							gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";

							_getch();
							break;
						} //end switch
					} //end do while
					while (type == 'A' || type == 'B' || type == 'C' || type != 'D');
					_getch();
					break;

				case 'C': //Return
						_getch();
						break;
				default:
						system("cls");
					obsbox();
					SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
							trueferns();
							menuInstructions(); prompt();
					outputheader();
					SetColorAndBackground(15, 0);
						gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ TRUE FERN PLANTS ÄÄÄÄÄÄÄ"; //output header

					plantHeader(15);
						gotoxy(44, 11); cout << "INVALID COMMAND";
						gotoxy(41, 13); cout << "Value Entered Invalid...";

					menuInstructions();
					_getch();
					break;
				} //end switch FERNS Index
			} //end do while FERNS Index
			while (mainchoice == 'A' || mainchoice == 'B' || mainchoice != 'C');
			_getch();
			break;

		case 'F': //Non woody
			do {
				system("cls");
				obsbox();
					nonwoody(); //Asteraceae/  with alternate leaves/ with opposite, whorled or no leaves
					menuInstructions();
				outputheader();
				SetColorAndBackground(15, 0);
					gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ PLANT CATEGORY ÄÄÄÄÄÄÄ"; //output header

					plantHeader(26);
					SetColorAndBackground(14, 0);
					gotoxy(44, 11); cout << "FLOWERING NON-WOODY PLANTS";

					plantInfo(14);
					SetColorAndBackground(14, 0);
					gotoxy(44, 15); cout << "INFORMATION";

					boxInfo(29);
					SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "Asters and all other flowering plants";

						gotoxy(43, 22); cout << "Flowering plants without parallel-veined leaves, and flower ";
						gotoxy(43, 23); cout << "parts usually in multiples of 4 or 5 ";

						gotoxy(43, 25); cout << "EXCEPTIONS: This is a large group with species that vary widely in  ";
						            gotoxy(55, 26); cout << "characteristics; some narrow-leaved species have only one ";
									gotoxy(55, 27); cout << "leaf blade vein, so floral characteristics are important  ";

				SetColorAndBackground(14, 0);
					gotoxy(12, 29); cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
					gotoxy(21, 29); cout << "Select From";
					gotoxy(12, 30); cout << "Options A To D......";
				SetColorAndBackground(14, 0);
					gotoxy(12, 34); cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> mainchoice;


				switch (mainchoice) {
				case 'A': //ASTERACEAE
					system("cls");
					obsbox();

					SetColorAndBackground(0, 14);
					gotoxy(10, 4);
						cout << "ÄÄÄÄÄ PLANT INDEX 1 ÄÄÄÄÄ";
						cout << endl << endl;

							menuInstructions(); prompt();
						outputheader();
						SetColorAndBackground(15, 0);
						gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ NON-WOODY FLOWERS ÄÄÄÄÄÄÄ"; //output header

							plantHeader(10);
							SetColorAndBackground(14, 0);
								gotoxy(44, 11); cout << "ASTERACEAE";

							plantInfo(14);
							SetColorAndBackground(14, 0);
								gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(27);

							SetColorAndBackground(15, 0);
							gotoxy(43, 20); cout << "'Daisy' flower actually is a composite head containing one/two kinds ";
							gotoxy(43, 21); cout << "of flowers: ray flowers & disk flowers. Important characteristics of";
							gotoxy(43, 22); cout << "the flower head include leaf-like bracts and shape of seed-like fruit";

							gotoxy(43, 24); cout << "The Aster family includes daisies and sunflowers, but also species ";
							gotoxy(43, 25); cout << "w/ less showy flowers like thoroughwort, wild lettuce, and goldenrod. ";

						_getch();
						break;
				case 'B': //alternate leaves
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 2 ÄÄÄÄÄ";

							menuInstructions(); prompt();
						outputheader();
						SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ NON-WOODY FLOWERS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(16);
						SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "ALTERNATE LEAVES";

						plantInfo(14);
						SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(28);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "This diverse group is generally not woody, grass-like, or aquatic,";
						gotoxy(43, 21); cout << "and does not have composite flower heads. These have alternate leaves";
						gotoxy(43, 22); cout << "that join the stem at different levels, not opposite each other;";

						gotoxy(43, 24); cout << "Some crowded leaves may look opposite or whorled, but look closely";
						gotoxy(43, 25); cout << "to see if there is actually space between them on the stem. Look for";
						gotoxy(43, 26); cout << "other features such as petal number, presence of leaf teeth, etc. ";

						_getch();
						break;
				case 'C': //opposite, whorled or no leaves
						system("cls");
						obsbox();

						SetColorAndBackground(0, 14);
							gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEX 3 ÄÄÄÄÄ";

							menuInstructions(); prompt();
						outputheader();
						SetColorAndBackground(15, 0);
							gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ NON-WOODY FLOWERS ÄÄÄÄÄÄÄ"; //output header

						plantHeader(28);
						SetColorAndBackground(14, 0);
							gotoxy(44, 11); cout << "OPPOSITE / WHORLED / WITHOUT";

						plantInfo(14);
						SetColorAndBackground(14, 0);
							gotoxy(44, 15); cout << "INFORMATION";

							boxInfo(28);

						SetColorAndBackground(15, 0);
						gotoxy(43, 20); cout << "These species are herbaceous plants with only all basal, opposite,  ";
						gotoxy(43, 21); cout << "or whorled leaves; they are not aquatic, grass-like, and do not have";
						gotoxy(43, 22); cout << "composite flower heads. ";

						gotoxy(43, 24); cout << "Some species are parasitic or lack green leaves. Leaf arrangement ";
						gotoxy(43, 25); cout << "can vary fromthe bottom to top of the stem, or in young vs. older ";
						gotoxy(43, 26); cout << "plants, so try to look at several plants.";

						_getch();
						break;

				case 'D': //Return
					_getch();
					break;
				default:
					system("cls");
					obsbox();
					SetColorAndBackground(0, 14);
						gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";
						nonwoody();
						menuInstructions(); prompt();
					outputheader();
					SetColorAndBackground(15, 0);
						gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED PLANTS ÄÄÄÄÄÄÄ"; //output header

					plantHeader(15);
					gotoxy(44, 11); cout << "INVALID COMMAND";
					gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";

					_getch();
					break;
				} //end switch NON-WOODY
			} //end do while NON-WOODY
			while (mainchoice == 'A' || mainchoice == 'B' || mainchoice == 'C' || mainchoice != 'D');
			_getch();
			break;

		case'G':
			system("cls");
			obsbox();
				leafPlantsList(); menuInstructions(); prompt();
			outputheader();
			SetColorAndBackground(14, 0); gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED ÄÄÄÄÄÄÄ"; //output header

			plantHeader(14);
			SetColorAndBackground(14, 0); gotoxy(44, 11); cout << "RETURN COMMAND";
			SetColorAndBackground(15, 0); gotoxy(41, 13); cout << "Please press 'Enter' again to proceed...";
			SetColorAndBackground(15, 0); gotoxy(41, 17); cout << "This will only take a moment. Returning to Plant Main Menu...";
			_getch();
			break;
		default:
			system("cls");
			obsbox(); leafPlantsList();
			SetColorAndBackground(0, 14);
				gotoxy(10, 4); gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";

			outputheader(); prompt();
			SetColorAndBackground(14, 0);
				gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ LEAF-BASED ÄÄÄÄÄÄÄ"; //output header

			plantHeader(15);
			SetColorAndBackground(14, 0); gotoxy(44, 11); cout << "INVALID COMMAND";
			SetColorAndBackground(15, 0); gotoxy(41, 13); cout << "Value Entered Invalid...";
				menuInstructions();
			_getch();
			break;

			} //end switch
		} //end do while menu
		while (leafChoice == 'A' || leafChoice == 'B' || leafChoice == 'C' || leafChoice == 'D'||
			   leafChoice == 'E' || leafChoice == 'F' || leafChoice != 'G');
		_getch();
		break;

		case 'D': //Links Menu
			do {
				system("cls");
				obsbox();
					linksList();
					menuInstructions();
					linksInfo();

				SetColorAndBackground(14, 0);
					gotoxy(12, 29); cout << "<NOTES>:";
				SetColorAndBackground(15, 0);
					gotoxy(21, 29); cout << "Select From";
					gotoxy(12, 30); cout << "Options A To D......";
				SetColorAndBackground(14, 0);
					gotoxy(12, 34); cout << "<ENTER>: ";
				SetColorAndBackground(15, 0);
					cin >> link;

					switch (link) {
					case'A':
						system("cls");
						obsbox(); menuInstructions(); outputheader(); linksList(); prompt();

						gotoxy(80, 6); SetColorAndBackground(14, 0);
							cout << "ÄÄÄÄÄÄÄ REFERENCES ÄÄÄÄÄÄÄ"; //output header

						gotoxy(42, 10); SetColorAndBackground(0, 15);
							cout << "  HOUSE PLANTS  ";

						gotoxy(44, 12); SetColorAndBackground(15);
							cout << "https://www.backyardnature.net/fpdefine.htm";
						gotoxy(44, 13); SetColorAndBackground(15);
							cout << "https://www.enchantedlearning.com/subjects/plants/types/cactus/";
						gotoxy(44, 14); SetColorAndBackground(15);
							cout << "https://www.appropedia.org/Foliage_plants";
						gotoxy(44, 15); SetColorAndBackground(15);
							cout << "https://www.succulentsandsunshine.com/what-are-succulents/";
						gotoxy(44, 16); SetColorAndBackground(15);
							cout << "https://garden.lovetoknow.com/garden-basics/hanging-plants";

						gotoxy(44, 18); SetColorAndBackground(15);
							cout << "https://www.fs.fed.us/wildflowers/beauty/ferns/what.shtml";//
						gotoxy(44, 19); SetColorAndBackground(15);
							cout << "https://www.gardeningknowhow.com/";
						gotoxy(44, 20); SetColorAndBackground(15);
							cout << "https://www.thespruce.com/grow-living-stones-plants-1902983";
						gotoxy(44, 21); SetColorAndBackground(15);
							cout << "https://www.houseplantsexpert.com/house-plant-types.html";
						gotoxy(44, 22); SetColorAndBackground(15);
							cout << "https://www.fs.fed.us/wildflowers/beauty/ferns/what.shtml";

						gotoxy(44, 23); SetColorAndBackground(15);
							cout << "https://indoorgardening.com/indoor-plant-care//";
						gotoxy(44, 24); SetColorAndBackground(15);
							cout << "https://www.gardenersworld.com/plants/";
						gotoxy(44, 25); SetColorAndBackground(15);
							cout << "https://www.thespruce.com/grow-living-stones-plants-1902983";
						gotoxy(44, 26); SetColorAndBackground(15);
							cout << "https://www.homestratosphere.com/types-of-trees/";

						gotoxy(44, 28); SetColorAndBackground(15);
							cout << "https://www.proflowers.com/blog/office-plants/";
						gotoxy(44, 29); SetColorAndBackground(15);
							cout << "https://leafyplace.com/cool-unique-plants/";
						gotoxy(44, 30); SetColorAndBackground(15);
							cout << "https://www.gardeningknowhow.com/";
						_getch();
						break;

					case'B':
						system("cls");
						obsbox(); menuInstructions(); outputheader(); linksList(); prompt();

						gotoxy(80, 6); SetColorAndBackground(14, 0);
							cout << "ÄÄÄÄÄÄÄ REFERENCES ÄÄÄÄÄÄÄ"; //output header

						gotoxy(42, 10); SetColorAndBackground(0, 15);
							cout << "  EXOTICS PLANTS  ";

						gotoxy(44, 12); SetColorAndBackground(15);
							cout << "http://www.forest-treasures.com/exoticplants/araceae/ ";
						gotoxy(44, 13); SetColorAndBackground(15);
							cout << "http://www.forest-treasures.com/exoticplants/bromeliads/ ";
						gotoxy(44, 14); SetColorAndBackground(15);
							cout << "http://www.forest-treasures.com/exoticplants/different_vine_genera/ ";
						gotoxy(44, 15); SetColorAndBackground(15);
							cout << "http://www.forest-treasures.com/exoticplants/ferns/ ";
						gotoxy(44, 16); SetColorAndBackground(15);
							cout << "http://www.forest-treasures.com/exoticplants/hoya/ ";

						gotoxy(44, 18); SetColorAndBackground(15);
							cout << "http://www.forest-treasures.com/exoticplants/medinilla/ ";
						gotoxy(44, 19); SetColorAndBackground(15);
							cout << "http://www.forest-treasures.com/exoticplants/orchids/ ";
						gotoxy(44, 20); SetColorAndBackground(15);
							cout << "http://www.forest-treasures.com/exoticplants";
						gotoxy(50, 21); SetColorAndBackground(15);
							cout << "/other_variegated_plant_genera/";
						gotoxy(44, 22); SetColorAndBackground(15);
							cout << "http://www.forest-treasures.com/exoticplants/palms/ ";
						gotoxy(44, 23); SetColorAndBackground(15);
							cout << "http://www.forest-treasures.com/exoticplants/pandanacea/ ";

						gotoxy(44, 25); SetColorAndBackground(15);
							cout << "http://www.forest-treasures.com/exoticplants/trees_and_shrubs/ ";
						gotoxy(44, 26); SetColorAndBackground(15);
							cout << "http://www.forest-treasures.com/exoticplants/variegated/ ";
						gotoxy(44, 27); SetColorAndBackground(15);
							cout << "http://www.forest-treasures.com/exoticplants/zingiberaceae/ ";

						_getch();
						break;

					case'C':
						system("cls");
						obsbox(); menuInstructions(); outputheader(); linksList(); prompt();

						gotoxy(80, 6); SetColorAndBackground(14, 0);
							cout << "ÄÄÄÄÄÄÄ REFERENCES ÄÄÄÄÄÄÄ"; //output header

						gotoxy(42, 10); SetColorAndBackground(0, 15);
							cout << "  LEAF-BASED  ";

						gotoxy(44, 12); SetColorAndBackground(15);
							cout << "https://gobotany.nativeplanttrust.org/simple/woody-plants/ ";
						gotoxy(44, 13); SetColorAndBackground(15);
							cout << "https://gobotany.nativeplanttrust.org/simple/aquatic-plants/ ";
						gotoxy(44, 14); SetColorAndBackground(15);
							cout << "https://gobotany.nativeplanttrust.org/simple/graminoids/ ";

						gotoxy(44, 16); SetColorAndBackground(15);
							cout << "https://gobotany.nativeplanttrust.org/simple/monocots/  ";
						gotoxy(44, 17); SetColorAndBackground(15);
							cout << "https://gobotany.nativeplanttrust.org/simple/ferns/ ";
						gotoxy(44, 18); SetColorAndBackground(15);
							cout << "https://gobotany.nativeplanttrust.org/simple/non-monocots/ ";
						_getch();
						break;

					case'D': //return
						system("cls");
						obsbox(); menuInstructions(); outputheader(); linksList(); prompt();
						SetColorAndBackground(15, 0); gotoxy(80, 6); cout << "ÄÄÄÄÄÄÄ REFERENCES ÄÄÄÄÄÄÄ"; //output header

						plantHeader(14);
						SetColorAndBackground(14, 0); gotoxy(44, 11); cout << "RETURN COMMAND";
						SetColorAndBackground(15, 0); gotoxy(41, 13); cout << "Please press 'Enter' again to proceed...";
						SetColorAndBackground(15, 0); gotoxy(41, 17); cout << "This will only take a moment. Returning to Plant Main Menu...";
						_getch();
						break;

					default:
						system("cls");
						obsbox(); menuInstructions(); outputheader(); linksList(); prompt();
						SetColorAndBackground(0, 14); gotoxy(10, 4); cout << "ÄÄÄÄÄ PLANT INDEXES ÄÄÄÄÄ";

						SetColorAndBackground(15, 0);
						gotoxy(75, 6); cout << "ÄÄÄÄÄÄÄ PLANT REFERENCES ÄÄÄÄÄÄÄ"; //output header

						plantHeader(15);
						SetColorAndBackground(14, 0); gotoxy(44, 11); cout << "INVALID COMMAND";
						SetColorAndBackground(15, 0); gotoxy(41, 14); cout << "We're sorry. Currently, there is no data for the selected plant category...";

						_getch();
						break;
					}
			} while (link == 'A' || link == 'B' || link == 'C' || link != 'D');
			_getch();
			break;

		case 'E': //EXIT
			exit(0);
			break;
		} //end switch main menu
	} //end do while main menu
	while (categChoice == 'A' || categChoice == 'B' || categChoice == 'C' || categChoice == 'D');

	system("pause>0"); // removal of junk set of words.
	return 0;

} //end main function


