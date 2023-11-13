// example from T5_pt2; p.23/30


#include <iostream>
#include <iomanip> // setw(n)
using namespace std;

int main() {
	// defining matrices
	double** A = NULL, ** B = NULL, ** C = NULL;  

	unsigned M = 0, 
			 N = 0,
			 
			 F = 0,
			 K = 0;

	cout << "C = AB = ?\n";

	// A = (M x N);
	cout << "Matrix A:\n";
	cout << "Enter the number of rows: "; cin >> M;
	cout << "Enter the number of columns: "; cin >> N;
	cout << endl;

	// B = (F x K);
	cout << "Matrix B:\n";
	cout << "Enter the number of rows : "; cin >> F;
	cout << "Enter the number of columns: "; cin >> K;


	if (N != F) {	// rows of a MUST be equal to cols of B
		cout << "Number of the columns of A does not equal to the number of the rows of B!!!\n";
		return 0;
	}
	cout << endl;

	cout << "Therefore, C(" << M << ", " << K << ") = AB = ?\n";

	A = new double* [M];
	B = new double* [N];
	C = new double* [M];

	// allocating space for A rows
	for (int i = 0; i < M; i++)
		A[i] = new double[M];
	cout << endl;

	// Matrix A
	cout << "Enter matrix A:\n";
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> A[i][j];
		}

	// allocating space for B rows
	for (int i = 0; i < N; i++)
		B[i] = new double[K];
	cout << endl;

	// Matrix B
	cout << "Enter matrix B:\n";
	for (int i = 0; i < N; i++)
		for (int j = 0; j < K; j++) {
			cout << "B[" << i << "][" << j << "] = ";
			cin >> B[i][j];
		}

	// allocating space for C rows
	for (int i = 0; i < M; i++)
		C[i] = new double[K];




	// multiplication
	double elC = 0.0;						// element of C
	for (int i = 0; i < M; i++) {			// M from A
		for (int h = 0; h < K; h++) {		// K from C
			elC = 0.0;
			for (int j = 0; j < N; j++) {	// N from B
				elC += A[i][j] * B[j][h];
			}
			C[i][h] = elC;
		}
	}

	// printing the C matrix 
	for (int i = 0; i < M; i++) {
		for (int h = 0; h < K; h++) {
			cout << setw(4) << C[i][h]; // "set width" -> 4 spaces (*formatting & cosmetics* <3)
		}
		cout << endl;
	}


	// deletion
	for (int i = 0; i < M; i++) // from A = new double* [M];
		delete[] A[i];

	for (int i = 0; i < N; i++) // from B = new double* [N];
		delete[] B[i];

	for (int i = 0; i < M; i++) // from C = new double* [M];
		delete[] C[i];

	delete[] A;
	delete[] B;
	delete[] C;

	A = B = C = NULL;


	return 0;
}