#include "refrigerator.h"
#include<stdio.h>
refrigerator::refrigerator() {
	printf("%s�����ꂽ\n", name);
}

refrigerator::~refrigerator() {
	printf("%s����ꂽ\n", name);
}

void refrigerator::electricAppliances() {
	printf("%s��%s\n", name, role);
}
