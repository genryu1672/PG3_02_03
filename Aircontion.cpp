#include "Aircontion.h"
#include<stdio.h>
Aircontion::Aircontion() {
	printf("%s‚ªì‚ç‚ê‚½\n", name);
}

Aircontion::~Aircontion() {
	printf("%s‚ª‰ó‚ê‚½\n", name);
}

void Aircontion::electricAppliances() {
	printf("%s‚Í%s\n", name, role);
}
