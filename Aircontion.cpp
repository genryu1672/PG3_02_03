#include "Aircontion.h"
#include<stdio.h>
Aircontion::Aircontion() {
	printf("%s�����ꂽ\n", name);
}

Aircontion::~Aircontion() {
	printf("%s����ꂽ\n", name);
}

void Aircontion::electricAppliances() {
	printf("%s��%s\n", name, role);
}
