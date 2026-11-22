#include "Voiture.h"

Voiture::Voiture(int v,string marq,int r ):r(r),Veheicul(v,marq)
{
}

void Voiture::afficher() const{
	Veheicul::afficher();
	std::cout << "r= " << this->r << std::endl;

}

Voiture::~Voiture()
{
}
