#include "ComplexTest.h"
#include "cute.h"

#include "Complex.h"

using namespace cstools;

void thisIsAComplexTestTest() {

	Complex c;

	ASSERT_EQUAL(0, c.temp);
}

cute::suite make_suite_ComplexTest() {
	cute::suite s { };
	s.push_back(CUTE(thisIsAComplexTestTest));
	return s;
}
