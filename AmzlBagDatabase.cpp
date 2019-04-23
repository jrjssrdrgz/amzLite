#include "AmzlBagDatabase.h"




AmzlBagDatabase::AmzlBagDatabase()
{
}


AmzlBagDatabase::~AmzlBagDatabase()
{
}

int AmzlBagDatabase::getInput()
{
	return barcodeInput;
};

void AmzlBagDatabase::setInput(int y)
{
	barcodeInput = y;
};

int AmzlBagDatabase::getBag()
{
	return bag;
}

void AmzlBagDatabase::setBag(int z)
{
	bag = z;
	
	// once vector<int> works, should be:
	// bag = z;
	// bags.append/bags.push, whatever it is
	// end.
}
