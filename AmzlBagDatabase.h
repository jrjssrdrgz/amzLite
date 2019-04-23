#pragma once

#include<vector>

class AmzlBagDatabase
{
private:
	int barcodeInput;
	int bag;
	//vector <int> bags = { 0, 0, 0 }; // get this working??? should just be random error fixed upon restart.
	
	

public:
	AmzlBagDatabase();
	~AmzlBagDatabase();
	int getInput();
	void setInput(int);
	int getBag();
	void setBag(int);
};


