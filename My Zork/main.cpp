#include<iostream>
#include<string>
#include"movements.h"
#include"character.h"



using namespace std;



int main()
{
	Character player;
	player.setName("Megaoski");
	cout << player.getName() << endl;

	/*/cout << "Greetings traveler. You have entered your own hell to defeat all your fears and all your past shadows, that made your life a " << endl;
	cout << "Input a name please: " << endl;
	

	char a;
	char* b = new char;
    b = &a;
	cin >> a;
	cout << "\nThe name you entered is " << a;

    delete b;/*/

	
	
	
	/*/char direction;

	cout << "Welcome to this zork, you are now in Nildal's campfire. Remember you can quit the game anytime pressing q" << endl;
	cout << "Where do you wanna go? (n/s/w/e)" << endl;
	cin >> direction;/*/

	



	system("pause");
	return 0;
}