#ifndef movements_h
#define movements_h

#include<iostream>
#include<string>

#define CAMPFIRE 0
#define DARKFOREST 1
#define CASTLE 2
#define BARN 3
#define STEPPES 4
#define CAVE 5
#define THRONE 6
#define PORTAL 7
#define BARRIER 8//barreras para campfire
#define BARRIERCAMP 9
#define BARRIER1 10//barreras forest
#define BARRIERFOREST 11
#define BARRIER2 12//barreras castle
#define BARRIERCASTLE 13
#define BARRIER3 14//barreras barn
#define BARRIERBARN 15
#define BARRIER4 16//barreras steppes
#define BARRIERSTEPPES 17
#define BARRIER5 18//barreras cave
#define BARRIERCAVE 19
#define BARRIER6 20//barreras throne
#define BARRIERTHRONE 21
#define BARRIER7 22//barreras portal
#define BARRIERPORTAL 23


using namespace std;

int Movement(int, char);

#endif