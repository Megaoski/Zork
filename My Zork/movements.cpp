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
		else if (room == CAMPFIRE)return BARRIERCAMP;
		else if (room == BARRIERCAMP) return BARRIERCAMP;
		break;
	}
	case's':{
		if (room == CAMPFIRE) return DARKFOREST;
		else if (room == DARKFOREST) return CASTLE;
		else if (room == CASTLE) return BARN;
		else if (room == BARN) return BARRIER;
		else if (room == STEPPES) return BARRIER;
		else if (room == CAVE) return STEPPES;
		else if (room == THRONE) return STEPPES;
		else if (room == PORTAL) return THRONE;
		else if (room == BARRIERCAMP) return DARKFOREST;
		break;
	}
	case'w':{
		if (room == CAMPFIRE) return BARRIERCAMP;
		else if (room == DARKFOREST) return BARRIER;
		else if (room == CASTLE) return BARRIER;
		else if (room == BARN) return BARRIER;
		else if (room == STEPPES) return BARN;
		else if (room == CAVE) return CASTLE;
		else if (room == THRONE) return BARRIER;
		else if (room == PORTAL) return BARRIER;
		else if (room == BARRIERCAMP) return BARRIER;
		break;
	}
	case'e':{
		if (room == CAMPFIRE) return BARRIERCAMP;
		else if (room == DARKFOREST) return BARRIER;
		else if (room == CASTLE) return CAVE;
		else if (room == BARN) return STEPPES;
		else if (room == STEPPES) return BARRIER;
		else if (room == CAVE) return BARRIER;
		else if (room == THRONE) return BARRIER;
		else if (room == PORTAL) return BARRIER;
		else if (room == BARRIERCAMP) return BARRIER;
		break;
	}
	default: 
		return printf("That's not a direction...");
		break;

	}
		}
	



