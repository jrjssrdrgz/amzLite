#include "AmzlPackageDatabase.h"



AmzlPackageDatabase::AmzlPackageDatabase()
{
}


AmzlPackageDatabase::~AmzlPackageDatabase()
{
}

int AmzlPackageDatabase::getInput()
{
	return barcodeInput;
};

void AmzlPackageDatabase::setInput(int y)
{
	barcodeInput = y;
};