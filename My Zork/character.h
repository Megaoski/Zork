#ifndef CHARACTER_H
#define CHARACTER_H

#include<iostream>
#include<string>

using namespace std;

class Character{

public:
	void setName(string x){
		name = x;
	}
	string getName(){
		return name;
	}

private:
	string name;
};

#endif