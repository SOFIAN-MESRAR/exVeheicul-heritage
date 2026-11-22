#include "VoitureElectriq.h"

VoitureElectriq::VoitureElectriq(int v, string maq ,int r, int numbattre)
	:Voiture(v, maq, r), numbattre(numbattre)	
{
}

void VoitureElectriq::afficher() const
{
	Voiture::afficher();
	std::cout << "numbattre= " << this->numbattre << std::endl;
}

VoitureElectriq::~VoitureElectriq()
{
}
