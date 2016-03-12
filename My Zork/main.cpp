#include<iostream>
#include<string>
#include"movements.h"
#include"character.h"




using namespace std;



int main()
{
	

	Player player1;
	char input;
	int yourposition = CAMPFIRE; 

	cout << "Input a name for your character: \n" ;
	cin >> player1.name;
	
	cout << "Welcome  " << player1.name <<"!"<< endl;
	cout << "\nYou are in Nilda's campfire"<<endl;
	cout << "Which direction you want to go?(n/s/w/e)? Remember that if you wanna exit the game you have to press 'q'." << endl;
	
	

	while (cin>>input &&input != 'q'){
		fflush(stdin);

		switch (Movement(yourposition, input)){
		case CAMPFIRE: {
			cout << "\nYou are in the campfire"; 
			yourposition = CAMPFIRE;
			break;
		}
		case DARKFOREST: {
			cout << "\nYou are in the darkforest";
			yourposition = DARKFOREST;
			break;
		}
		case CASTLE: {
			cout << "\nYou are in the castle";
			yourposition = CASTLE;
			break;
		}
		case BARN: {
			cout << "\nYou are in the barn";
			yourposition = BARN;
			break;
		}
		case STEPPES : {
			cout << "\nYou are in the steppes";
			yourposition = STEPPES;
			break;
		}
		case CAVE: {
			cout << "\nYou are in the cave";
			yourposition = CAVE;
			break;
		}
		case THRONE: {
			cout << "\nYou are in the throne";
			yourposition = THRONE;
			break;
		}
		case PORTAL: {
			cout << "\nYou are in the portal";
			yourposition = PORTAL;
			break;
		}
		case BARRIER: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIER;
			break;
		}
		case BARRIER1: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIER1;
			break;
		}
		case BARRIER2: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIER2;
			break;
		}
		case BARRIER3: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIER3;
			break;
		}
		case BARRIER4: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIER4;
			break;
		}
		case BARRIER5: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIER5;
			break;
		}
		case BARRIER6: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIER6;
			break;
		}
		case BARRIER7: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIER7;
			break;
		}
		case BARRIERCAMP:{
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIERCAMP;
			break;
		}
		case BARRIERFOREST: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIERFOREST;
			break;
		}
		case BARRIERCASTLE: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIERCASTLE;
			break;
		}
		case BARRIERBARN: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIERBARN;
			break;
		}
		case BARRIERSTEPPES: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIERSTEPPES;
			break;
		}
		case BARRIERCAVE: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIERCAVE;
			break;
		}
		case BARRIERTHRONE: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIERTHRONE;
			break;
		}
		case BARRIERPORTAL: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead";
			yourposition = BARRIERPORTAL;
			break;
		}
		default:
			
			break;

		}
		
		cout << "\nSelect the next direction please:(n/s/w/e)";

	}//FIN DEL LOOP
	



	getchar();
	return 0;
}