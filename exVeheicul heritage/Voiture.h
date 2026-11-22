#pragma once
#include "Veheicul.h"
class Voiture :  public Veheicul
{
private:
	int r;
public:
	Voiture(int,string,int );
    void afficher()const override;
	~Voiture() override;
};

