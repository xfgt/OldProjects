// example from T5_pt2; p.23/30


#include <iostream>
#include <iomanip> // setw(n)
using namespace std;

int main() {
	// defining matrices
	double** A = NULL, ** B = NULL, ** C = NULL;  

	unsigned mA_rows = 0, 
			 mA_cols = 0,
			 
			 mB_rows = 0,
			 mB_cols = 0;

	cout << "C = AB = ?\n";

	// A = (mA_rows x mA_cols);
	cout << "Matrix A:\n";
	cout << "Enter the number of rows: "; cin >> mA_rows;
	cout << "Enter the number of columns: "; cin >> mA_cols;
	cout << endl;

	// B = (mB_rows x mB_cols);
	cout << "Matrix B:\n";
	cout << "Enter the number of rows : "; cin >> mB_rows;
	cout << "Enter the number of columns: "; cin >> mB_cols;


	if (mA_cols != mB_rows) {	// rows of A MUST be equal to cols of B
		cout << "Number of the columns of A does not equal to the number of the rows of B!!!\n";
		return 0;
	}
	cout << endl;

	cout << "Therefore, C(" << mA_rows << ", " << mB_cols << ") = AB = ?\n";

	A = new double* [mA_rows];
	B = new double* [mA_cols];
	C = new double* [mA_rows];

	// allocating space for A rows
	for (int i = 0; i < mA_rows; i++)
		A[i] = new double[mA_rows];
	cout << endl;

	// Matrix A
	cout << "Enter matrix A:\n";
	for (int i = 0; i < mA_rows; i++)
		for (int j = 0; j < mA_cols; j++) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> A[i][j];
		}

	// allocating space for B rows
	for (int i = 0; i < mA_cols; i++)
		B[i] = new double[mB_cols];
	cout << endl;

	// Matrix B
	cout << "Enter matrix B:\n";
	for (int i = 0; i < mA_cols; i++)
		for (int j = 0; j < mB_cols; j++) {
			cout << "B[" << i << "][" << j << "] = ";
			cin >> B[i][j];
		}

	// allocating space for C rows
	for (int i = 0; i < mA_rows; i++)
		C[i] = new double[mB_cols];




	// multiplication
	double elC = 0.0;						// element of C
	for (int i = 0; i < mA_rows; i++) {			// mA_rows from A
		for (int h = 0; h < mB_cols; h++) {		// mB_cols from C
			elC = 0.0;
			for (int j = 0; j < mA_cols; j++) {	// mA_cols from B
				elC += A[i][j] * B[j][h];
			}
			C[i][h] = elC;
		}
	}

	// printing the C matrix 
	for (int i = 0; i < mA_rows; i++) {
		for (int h = 0; h < mB_cols; h++) {
			cout << setw(4) << C[i][h]; // "set width" -> 4 spaces (*formatting & cosmetics* <3)
		}
		cout << endl;
	}


	// deletion
	for (int i = 0; i < mA_rows; i++) // from A = new double* [mA_rows];
		delete[] A[i];

	for (int i = 0; i < mA_cols; i++) // from B = new double* [mA_cols];
		delete[] B[i];

	for (int i = 0; i < mA_rows; i++) // from C = new double* [mA_rows];
		delete[] C[i];

	delete[] A;
	delete[] B;
	delete[] C;

	A = B = C = NULL;


	return 0;
}