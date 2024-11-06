#include "refrigerator.h"
#include<stdio.h>
refrigerator::refrigerator() {
	printf("%s‚ªì‚ç‚ê‚½\n", name);
}

refrigerator::~refrigerator() {
	printf("%s‚ª‰ó‚ê‚½\n", name);
}

void refrigerator::electricAppliances() {
	printf("%s‚Í%s\n", name, role);
}
