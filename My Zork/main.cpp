#include<iostream>
#include<string>
#include"movements.h"





using namespace std;



int main()
{
	

	

	
	string name;

	char input;
	int yourposition = CAMPFIRE; 
	
	
	

	cout << "Input a name for your character: " ;
	cin >> name;
	
	cout << "\nWelcome  " << name <<"!"<< endl;
	cout << "\n Now you are in Nildal's campfire"<<endl;
	cout << "\nWhich direction you want to go?(n/s/w/e)? Remember that if you wanna exit the game you have to press 'q'." << endl;
	
	

	while (cin>>input && input != 'q'){
		fflush(stdin);

		switch (Movement(yourposition, input)){
		case CAMPFIRE: {
			cout << "\nYou are in Nildal's campfire"; 
			yourposition = CAMPFIRE;
			break;
		}
		case DARKFOREST: {
			cout << "\nYou are in the Dark Forest";
			yourposition = DARKFOREST;
			break;
		}
		case CASTLE: {
			cout << "\nYou are in the Haunted castle";
			yourposition = CASTLE;
			break;
		}
					
		case BARN: {
			cout << "\nYou see a barn. The door seems closed";
			cout << "\n You get close to the barn but the door is closed. Do you open it or follow your way?('o' n/s/w/e)";
			
			yourposition = BARN;
			break;
		
					 }
		case BARNINTERIOR: {
			cout << "\nYou entered the barn!";
			yourposition = BARNINTERIOR;
			break;
		}
		case BARNEXTERIOR: {
			cout << "\nYou are outside the barn! Do you wanna open the door and go inside again or follow your way?('o'  n/s/w/e)";
			yourposition = BARNEXTERIOR;
			break;

		}
		case BARNWALLEAST:{
			cout << "\nYou see a door. Do you wanna open it('o') or continue exploring?";
			yourposition = BARNWALLEAST;
			break;

		}
		case BARNWALLWEST:{
			cout << "\nThere's a wall here!";
			yourposition = BARNWALLWEST;
			break;
		}
		case BARNWALLSOUTH:{
			cout << "\nThere's a wall here!";
			yourposition = BARNWALLSOUTH;
			break;
		}
		case BARNWALLNORTH:{
			cout << "\nYou see a door. Do you wanna open it('o') or continue exploring?";
			yourposition = BARNWALLNORTH;
			break;
		}
			
		
		case STEPPES : {
			cout << "\nYou are in Willowl's steppes";
			yourposition = STEPPES;
			break;
		}
		case CAVE: {
			cout << "\nYou are in the Ancient Cave";
			yourposition = CAVE;
			break;
		}
		case THRONE: {
			cout << "\nYou are in the Throne chamber";
			yourposition = THRONE;
			break;
		}
		case PORTAL: {
			cout << "\nYou are in the Portal room";
			yourposition = PORTAL;
			break;
		}
		case BARRIER: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in Nildal's campfire";
			yourposition = BARRIER;
			break;
		}
		case BARRIER1: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in the Dark Forest";
			yourposition = BARRIER1;
			break;
		}
		case BARRIER2: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in the Haunted castle";
			yourposition = BARRIER2;
			break;
		}
		case BARRIER3: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in the barn";
			yourposition = BARRIER3;
			break;
		}
		case BARRIER4: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in Willowl's Steppes";
			yourposition = BARRIER4;
			break;
		}
		case BARRIER5: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in the Ancient Cave";
			yourposition = BARRIER5;
			break;
		}
		case BARRIER6: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead.You still in the Throne chamber";
			yourposition = BARRIER6;
			break;
		}
		case BARRIER7: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead.You still in the Portal room";
			yourposition = BARRIER7;
			break;
		}
		case BARRIERCAMP:{
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in Nildal's campfire";
			yourposition = BARRIERCAMP;
			break;
		}
		case BARRIERFOREST: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in the Dark Forest";
			yourposition = BARRIERFOREST;
			break;
		}
		case BARRIERCASTLE: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in the Haunted castle";
			yourposition = BARRIERCASTLE;
			break;
		}
		case BARRIERBARN: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in the barn";
			yourposition = BARRIERBARN;
			break;
		}
		case BARRIERSTEPPES: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in Willowl's Steppes";
			yourposition = BARRIERSTEPPES;
			break;
		}
		case BARRIERCAVE: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in the Ancient Cave";
			yourposition = BARRIERCAVE;
			break;
		}
		case BARRIERTHRONE: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in the Throne chamber";
			yourposition = BARRIERTHRONE;
			break;
		}
		case BARRIERPORTAL: {
			cout << "\nYou are clashing against an spiritual barrier that doesn't let you go ahead. You still in the Portal room ";
			yourposition = BARRIERPORTAL;
			break;
		}
		case VOID:{
			cout << "\nThat's not a direction...";
			yourposition = CAMPFIRE;
			break;
		}
		case VOID1:{
			cout << "\nThat's not a direction...";
			yourposition = DARKFOREST;
			break;
		}
		case VOID2:{
			cout << "\nThat's not a direction...";
			yourposition = CASTLE;
			break;
		}
		case VOID3:{
			cout << "\nThat's not a direction...";
			yourposition = BARN;
			break;
		}
		case VOID4:{
			cout << "\nThat's not a direction...";
			yourposition = STEPPES;
			break;
		}
		case VOID5:{
			cout << "\nThat's not a direction...";
			yourposition = CAVE;
			break;
		}
		case VOID6:{
			cout << "\nThat's not a direction...";
			yourposition = THRONE;
			break;
		}
		case VOID7:{
			cout << "\nThat's not a direction...";
			yourposition = PORTAL;
			break;
		}
		case VOIDBARN:{
			cout << "\nThat's not a direction...";
			yourposition = BARNINTERIOR;
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