/************************************************************************************************
	Name:	 CoachLDEW
	Date:	 06.09.2024
	Purpose: This is a simple program that uses a function to hide the cursor
*************************************************************************************************/


#include <iostream>
#include <Windows.h>


using namespace std;


//Function to hide the cursor
void HideCursor()
{
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);		//Get the ID of the console window
	//Data Structure that controls the apearance of the cursor.  It has two attributes dwSize and bVisible
	CONSOLE_CURSOR_INFO cursor;
	//This attribute changes the size of the cursor. Here it is set at 100%
	cursor.dwSize = 100;
	//This Boolean attribute sets the cursor to visible or invisible.  False is invisible
	cursor.bVisible = false;

	//Manipulates the characteristics it takes two parameters.  The ID of the console window and a data structure that
	//handles the appearance of the cursor
	//You have to pass the cursor variable by reference so that it can make changes to the actual object
	SetConsoleCursorInfo(hCon, &cursor);
}


int main()
{
	//Function call to hide the cursor
	HideCursor();

	cout << "Hello World!" << endl;
	cout << "As you can see the cursor is no longer visible." << endl;

	return 0;
}