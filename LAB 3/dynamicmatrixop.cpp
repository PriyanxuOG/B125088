#include <iostream>
 using namespace std;

int main() {
    int m = 3; 
    int n = 4; 

    
    int** A = new int*[m];
    int** B = new int*[m];

    
    for (int i = 0; i < m; ++i) {
        A[i] = new int[n];
        B[i] = new int[n];
    }

    
    int elements = m * n;
    int inputArray[elements];


    cout << "Enter elements for matrix A and B:" << '\n';
    for (int i = 0; i < elements; ++i) {
        cin >> inputArray[i];
    }

   
    int** C = new int*[m];
    for (int i = 0; i < m; ++i) {
        C[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

   
    cout << "Matrix addition result:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << C[i][j] << ' ';
        }
        cout << '\n';
    }


    delete[] A;
    delete[] B;
    for (int i = 0; i < m; ++i) {
        delete[] C[i];
    }
    delete[] C;

    return 0;
}
