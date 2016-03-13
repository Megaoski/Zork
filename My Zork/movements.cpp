#include<iostream>
#include<string>
#include"movements.h"



using namespace std;


int Movement(int room,char direction){

	

	switch (direction){
	case 'n':{
		
		if (room == DARKFOREST) return CAMPFIRE;
		else if (room == CASTLE) return DARKFOREST;
		else if (room == BARN) return CASTLE;
		else if (room == STEPPES) return CAVE;
		else if (room == CAVE) return THRONE;
		else if (room == THRONE) return PORTAL;
		else if (room == PORTAL) return BARRIERPORTAL;
		else if (room == CAMPFIRE)return BARRIERCAMP;
		else if (room == BARRIERCAMP) return BARRIERCAMP;
		else if (room == BARRIERFOREST) return CAMPFIRE;
		else if (room == BARRIER1) return CAMPFIRE;
		else if (room == BARRIERBARN) return CASTLE;
		else if (room == BARRIER3) return CASTLE;
		else if (room == BARRIERSTEPPES)  return CAVE;
		else if (room == BARRIER4)  return CAVE;
		else if (room == BARRIERCAVE) return THRONE;
		else if (room == BARRIER5) return THRONE;
		else if (room == BARRIERTHRONE) return PORTAL;
		else if (room == BARRIER6) return PORTAL;
		else if (room == BARRIERPORTAL) return BARRIER7;
		else if (room == BARRIER7) return BARRIERPORTAL;
		else if (room == BARNINTERIOR) return BARNWALLNORTH;
		else if (room == BARNEXTERIOR) return CASTLE;
		else if (room == BARNWALLNORTH) return BARNWALLNORTH;
		else if (room == BARNWALLSOUTH) return BARNWALLNORTH;
		else if (room == BARNWALLEAST) return BARNWALLNORTH;
		else if (room == BARNWALLWEST) return BARNWALLNORTH;
		
		break;
	}
	case's':{
		if (room == CAMPFIRE) return DARKFOREST;
		else if (room == DARKFOREST) return CASTLE;
		else if (room == CASTLE) return BARN;
		else if (room == BARN) return BARRIERBARN;
		else if (room == STEPPES) return BARRIERSTEPPES;
		else if (room == CAVE) return STEPPES;
		else if (room == THRONE) return CAVE;
		else if (room == PORTAL) return THRONE;
		else if (room == BARRIERCAMP) return DARKFOREST;
		else if (room == BARRIER) return DARKFOREST;
		else if (room == BARRIERFOREST) return CASTLE;
		else if (room == BARRIER1) return CASTLE;
		else if (room == BARRIERCASTLE) return BARN;
		else if (room == BARRIER2) return BARN;
		else if (room == BARN) return BARRIERBARN;
		else if (room == BARRIERBARN) return BARRIER3;
		else if (room == BARRIER3) return BARRIERBARN;
		else if (room == BARRIERSTEPPES) return BARRIER4;
		else if (room == BARRIER4) return BARRIERSTEPPES;
		else if (room == BARRIERCAVE) return STEPPES;
		else if (room == BARRIER5) return STEPPES;
		else if (room == BARRIERTHRONE) return CAVE;
		else if (room == BARRIER6) return CAVE;
		else if (room == BARRIERPORTAL) return THRONE;
		else if (room == BARRIER7) return THRONE;
		else if (room == BARNINTERIOR) return BARNWALLSOUTH;
		else if (room == BARNEXTERIOR) return BARRIER3;
		else if (room == BARNWALLSOUTH) return BARNWALLSOUTH;
		else if (room == BARNWALLNORTH) return BARNWALLSOUTH;
		else if (room == BARNWALLEAST) return BARNWALLSOUTH;
		else if (room == BARNWALLWEST) return BARNWALLSOUTH;
		break;
	}
	case'w':{
		if (room == CAMPFIRE) return BARRIERCAMP;
		else if (room == DARKFOREST) return BARRIERFOREST;
		else if (room == CASTLE) return BARRIERCASTLE;
		else if (room == BARN) return BARRIERBARN;
		else if (room == STEPPES) return BARN;
		else if (room == CAVE) return CASTLE;
		else if (room == THRONE) return BARRIERTHRONE;
		else if (room == PORTAL) return BARRIERPORTAL;
		else if (room == BARRIERCAMP) return BARRIER;
		else if (room == BARRIER)return BARRIERCAMP;
		else if (room == BARRIERFOREST) return BARRIER1;
		else if (room == BARRIER1) return BARRIERFOREST;
		else if (room == BARRIERCASTLE) return BARRIER2;
		else if (room == BARRIER2) return BARRIERCASTLE;
		else if (room == BARRIERBARN) return BARRIER3;
		else if (room == BARRIER3) return BARRIERBARN;
		else if (room == BARRIERSTEPPES) return BARN;
		else if (room == BARRIER4) return BARN;
		else if (room == BARRIERCAVE) return CASTLE;
		else if (room == BARRIER5) return CASTLE;
		else if (room == BARRIERTHRONE) return BARRIER6;
		else if (room == BARRIER6) return BARRIERTHRONE;
		else if (room == BARRIERPORTAL) return BARRIER7;
		else if (room == BARRIER7) return BARRIERPORTAL;
		else if (room == BARNINTERIOR) return BARNWALLWEST;
		else if (room == BARNEXTERIOR) return BARRIER3;
		else if (room == BARNWALLWEST) return BARNWALLWEST;
		else if (room == BARNWALLEAST) return BARNWALLWEST;
		else if (room == BARNWALLSOUTH) return BARNWALLWEST;
		else if (room == BARNWALLNORTH) return BARNWALLWEST; 
		break;
	}
	case'e':{
		if (room == CAMPFIRE) return BARRIERCAMP;
		else if (room == DARKFOREST) return BARRIERFOREST;
		else if (room == CASTLE) return CAVE;
		else if (room == BARN) return STEPPES;
		else if (room == STEPPES) return BARRIERSTEPPES;
		else if (room == CAVE) return BARRIERCAVE;
		else if (room == THRONE) return BARRIERTHRONE;
		else if (room == PORTAL) return BARRIERPORTAL;
		else if (room == BARRIERCAMP) return BARRIER;
		else if (room == BARRIER) return BARRIERCAMP;
		else if (room == BARRIERFOREST) return BARRIER1;
		else if (room == BARRIER1) return BARRIERFOREST;
		else if (room == BARRIERCASTLE) return CAVE;
		else if (room == BARRIER2) return CAVE;
		else if (room == BARRIERBARN) return STEPPES;
		else if (room == BARRIER3) return STEPPES;
		else if (room == BARRIERSTEPPES) return BARRIER4;
		else if (room == BARRIER4) return BARRIERSTEPPES;
		else if (room == BARRIERCAVE) return BARRIER5;
		else if (room == BARRIER5) return BARRIERCAVE;
		else if (room == BARRIERTHRONE) return BARRIER6;
		else if (room == BARRIER6) return BARRIERTHRONE;
		else if (room == BARRIERPORTAL) return BARRIER7;
		else if (room == BARRIER7) return BARRIERPORTAL;
		else if (room == BARNINTERIOR) return BARNWALLEAST;
		else if (room == BARNEXTERIOR) return STEPPES;
		else if (room == BARNWALLEAST) return BARNWALLEAST;
		else if (room == BARNWALLWEST) return BARNWALLEAST;
		else if (room == BARNWALLSOUTH) return BARNWALLEAST;
		else if (room == BARNWALLNORTH) return BARNWALLEAST;
		
		break;
	}
	
	case 'o':{
		if (room == BARNINTERIOR) return BARNEXTERIOR;
		else if (room == BARN) return BARNINTERIOR;
		else if (room == BARNEXTERIOR) return BARNINTERIOR;
		else if (room == BARNWALLNORTH) return BARNEXTERIOR;
		else if (room == BARNWALLEAST) return BARNEXTERIOR;
		else return printf("That's not a direction...");
		break;
	}
	
	default: {
		return printf("That's not a direction...");
		break;
	}

	}
		}









