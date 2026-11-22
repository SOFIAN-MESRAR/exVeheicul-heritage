#pragma once
#include<iostream>
using namespace std;
class Veheicul
{
private:
	int vitesse;
	string marq;
public:

	Veheicul(int, string);
	virtual void afficher() const;
	virtual ~Veheicul();

};

