#include<iostream>
#include<iomanip>
#include<string>
#include"AmzlBagDatabase.h"
#include"AmzlPackageDatabase.h"
#include<vector>

using namespace std;

void greetingCard();
int mainPrompt();
void pathway(int);
void path1();

int main()
{
	int x;

	AmzlBagDatabase BagTracker;
	AmzlPackageDatabase PackageTracker;

	greetingCard();
	x = mainPrompt();
	pathway(x);

	
	system("PAUSE");
	return 0;
}

void greetingCard() 
{
	/* This section used for development of letters. Implemented below.
   cout << " AAAAAAA \n" << "AAAAAAAAA\n" << "AAA   AAA\n" << "AAA   AAA\n" << "AAAAAAAAA\n" << "AAA   AAA\n" << "AAA   AAA\n" << endl;
   cout << "MMMM MMMM\n" << "MM  M  MM\n" << "MM  M  MM\n" << "MM  M  MM\n" << "MM     MM\n" << "MM     MM\n" << "MM     MM\n" << endl;
   cout << "ZZZZZZZZZ\n" << "       ZZ\n" << "     ZZ  \n" << "   ZZ    \n" << "ZZ       \n" << "ZZZZZZZZZ\n" << endl;
   cout << "LLL      \n" << "LLL      \n" << "LLL      \n" << "LLL      \n" << "LLL      \n" << "LLL      \n" << "LLLLLLLLL\n" << endl;
   */

	cout << " AAAAAAA   " << "MMMM MMMM  " << "ZZZZZZZZZ  " << "LLL        " << endl;
	cout << "AAAAAAAAA  " << "MM  M  MM  " << "       ZZ  " << "LLL        " << "     " << "       " << "      " << endl;
	cout << "AAA   AAA  " << "MM  M  MM  " << "     ZZ    " << "LLL        " << "iii  " << "ttt    " << " eeee" << endl;
	cout << "AAA   AAA  " << "MM  M  MM  " << "   ZZ      " << "LLL        " << "     " << "ttttt  " << "ee  ee" << endl;
	cout << "AAAAAAAAA  " << "MM     MM  " << "  ZZ       " << "LLL        " << "iii  " << "ttt    " << "eeeeee" << endl;
	cout << "AAA   AAA  " << "MM     MM  " << "ZZ         " << "LLL        " << "iii  " << "ttt    " << "ee    " << endl;
	cout << "AAA   AAA  " << "MM     MM  " << "ZZZZZZZZZ  " << "LLLLLLLLL  " << "iii  " << "ttttt  " << " eeeee" << endl;

	cout << endl << endl;
	system("PAUSE");
	cout << system("CLS");

	cout << endl << endl;
}

int mainPrompt() 
{
	int decide;

	cout << "Welcome to AMZLite!" << endl << endl;
	cout << "What would you like to do?" << endl << endl;

	cout << "1) Read barcode input from scanner\n" << endl;
	cin >> decide;

	if (decide == 1) {
		cout << "Activing scanner input...\n";
	}
	else
		cout << "Unable to process request. Please try again.\n";

	cout << endl;

	return decide;
}

void pathway(int path)
{
	//activate path function.
	if (path == 1)
	{
		//function 1
		//trial for now:
		cout << "You activated path 1" << endl << endl;
		path1();
	}
}

void path1()
{
	string scannedIn = "0";
	cout << "Awaiting Scan..." << endl << endl;
	cin >> scannedIn;

	if (scannedIn[0] != 'T' || scannedIn[1] != 'B' || scannedIn[2] != 'A' || scannedIn.size() != 15)
	{
		cout << endl << "Scan failed\n\n";
	}
	else
		cout << endl <<  "Successfully scanned in package " << scannedIn;
	
	cout << endl << endl;

	// EX: TBA019954121266
}
