#include "refrigerator.h"
#include<stdio.h>
refrigerator::refrigerator() {
	printf("%sが作られた\n", name);
}

refrigerator::~refrigerator() {
	printf("%sが壊れた\n", name);
}

void refrigerator::electricAppliances() {
	printf("%sは%s\n", name, role);
}
