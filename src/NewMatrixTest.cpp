#include "NewMatrixTest.h"
#include "cute.h"

#include <vector>
#include <iostream>

using namespace std;
using namespace cstools;


void matrixEqualityTest() {

	vector<double> v1{1, 2, 3};
	vector<double> v2{4, 5, 6};
	vector<double> v3{7, 8, 9};

	vector<vector<double> > vv{v1, v2, v3};

	NewMatrix m1(vv);


	vector<double> x1{1, 2, 3};
	vector<double> x2{4, 5, 6};
	vector<double> x3{7, 8, 9};

	vector<vector<double> > xx{x1, x2, x3};
	NewMatrix m2(xx);

	auto t1 = m1.getElements();

	auto t2 = m2.getElements();
	auto it2 = t2->begin();
	bool eq = true;
	for (auto it1 = t1->begin(); it1 != t1->end(); it1++, it2++) {

		auto it22 = it2->begin();
		for (auto it11 = it1->begin(); it11 != it1->end(); it11++, it22++)
		{
			eq = eq && (*it11 == *it22);
		}
	}

	ASSERT(eq);


}

void matrixInequalityTest() {

	vector<double> v1{1, 2, 3};
	vector<double> v2{4, 5, 6};
	vector<double> v3{7, 8, 5};

	vector<vector<double> > vv{v1, v2, v3};

	NewMatrix m1(vv);


	vector<double> x1{1, 2, 3};
	vector<double> x2{4, 5, 6};
	vector<double> x3{7, 8, 9};

	vector<vector<double> > xx{x1, x2, x3};
	NewMatrix m2(xx);

	auto t1 = m1.getElements();

	auto t2 = m2.getElements();
	auto it2 = t2->begin();
	bool eq = true;
	for (auto it1 = t1->begin(); it1 != t1->end(); it1++, it2++) {

		auto it22 = it2->begin();
		for (auto it11 = it1->begin(); it11 != it1->end(); it11++, it22++)
		{
			eq = eq && (*it11 == *it22);
		}
	}

	ASSERT(!eq);


}



void thisIsANewMatrixTestTest() {
////

//
//
    cout << "----- M3 = M1 + M2 -------" << endl;
//
//    m3.printMatrix();
////
//    Matrix m4 = m1 * m2;
//    cout << "----- M4 = M1 * M2 -------" << endl;
//
//    m4.print_matrix();
//
//    Matrix id = Matrix::identity(3);
//
//    cout << "----- Identity(3) -------" << endl;
//    id.print_matrix();
//    Matrix m5 = m1 * id;
//
//    cout << "----- M5 = M1 * id -------" << endl;
//
//    m5.print_matrix();
//
//    vector<double> t = {1, 1, 2};
//    Matrix r_vec = Matrix(t); // 1 x 3 matrix
//    cout << "----- r_vec -------" << endl;
//
//    r_vec.print_matrix();
//
//    Matrix m6 = r_vec * m5;
//
//    cout << "----- M6 = r_vec * m5 -------" << endl;
//
//    m6.print_matrix();




	ASSERTM("start writing tests", false);	
}

cute::suite make_suite_NewMatrixTest() {
	cute::suite s { };
	s.push_back(CUTE(matrixEqualityTest));
	s.push_back(CUTE(matrixInequalityTest));
	return s;
}


