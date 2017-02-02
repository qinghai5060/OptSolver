#include "OptSolver.h"
#include <QtWidgets/QApplication>
#include "queens.hpp"
#include <cstdlib>
#include <iostream>
#include "scip_exception.hpp"

using namespace std;
using namespace scipexamples;




int main(int argc, char *argv[])
{

	// get the number of queens for commandline
	size_t n = 10; /*lint !e732*/


		// initialize the queens solver
		QueensSolver solver(n);

		// solve the queens problem
		solver.solve();

		// display the solution on stdout
		solver.disp();
	


    QApplication a(argc, argv);
    OptSolver w;
    w.show();
    return a.exec();
}
