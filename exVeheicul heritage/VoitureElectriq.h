#pragma once
#include "Voiture.h"
class VoitureElectriq : public Voiture
{
private:
	int numbattre;
public:
	VoitureElectriq(int, string, int, int);
	void afficher() const override;
	~VoitureElectriq() override;
};

