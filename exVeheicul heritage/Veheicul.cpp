#include "Veheicul.h"
Veheicul::Veheicul(int v, string marq)
	:vitesse(v), marq(marq)
{
};
void Veheicul::afficher() const {
	std::cout << "marq= " << marq << std::endl;
	std::cout << "vitesse = " << vitesse << std::endl;
};

Veheicul::~Veheicul()
{
}