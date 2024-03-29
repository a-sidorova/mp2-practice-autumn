#include <iostream>
#include <stdlib.h>
#include <conio.h>

#include "Includes/TMatrix.h"
#include "Includes/exceptions.h"

#define RANDOM 4

using namespace std;

void main()
{

    TMatrix<int> A(5), B(5), C(3);
    TVector<int> v1(5, 1), v2(5, 1), v3(3);

    for (int i = 0; i < A.GetSize(); i++)  // filling out
    {
        v1[i] = rand() % RANDOM + 1;
        v2[i] = rand() % RANDOM + 1;

        for (int j = 0; j < A.GetSize() - i; j++)
        {
            A[i][j] = rand() % RANDOM + 1;
            B[i][j] = rand() % RANDOM + 1;
        }
    }

    for (int i = 0; i < C.GetSize(); i++)  // filling out
    {
        v3[i] = rand() % RANDOM + 1;

        for (int j = 0; j < C.GetSize() - i; j++)
            C[i][j] = rand() % RANDOM + 1;
    }
    
    try  // output
    {
        cout << "##### Matrices #####" << endl << endl;
        cout << "Matrix A:" << endl;
        cout << A << endl;
        cout << "Matrix B:" << endl;
        cout << B << endl;
        cout << "Matrix C:" << endl;
        cout << C << endl;

        cout << "##### Vectors #####" << endl << endl;
        cout << "Vector v1:" << endl;
        cout << v1 << endl << endl;
        cout << "Vector v2:" << endl;
        cout << v2 << endl << endl;
        cout << "Vector v3:" << endl;
        cout << v2 << endl << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    cout << "##### Test of Vectors #####" << endl << endl;
    
    try  // parameterized constructors
    {
        cout << "##### Test of Parameterized constructors #####" << endl << endl;
        cout << "Vector with size 5: " << endl;
        TVector<int> v4(5);
        cout << v4 << endl;
        cout << "Vector with size 2 and start index 3: " << endl;
        TVector<int> v5(2, 3);
        cout << v5 << endl;
        cout << "Start Index = " << v5.GetStartIndex() << endl;
        cout << "Vector with size -100: " << endl;
        TVector<int> v6(-100);
        cout << v6 << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // copy constructors
    {
        cout << "##### Test of Copy constructors #####" << endl << endl;
        cout << "Vector v4(v1): " << endl;
        TVector<int> v4(v1);
        cout << v4 << endl;
        cout << "Vector v1: " << endl;
        cout << v1 << endl << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // adding
    {
        cout << "##### Adding #####" << endl << endl;
        cout << "Vector v1 + v2:" << endl;
        cout << v1 + v2 << endl;
        cout << "Vector v1 + v3:" << endl;
        cout << v1 + v3 << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // subtraction
    {
        cout << "##### Subtraction #####" << endl << endl;
        cout << "Vector v1 - v2:" << endl;
        cout << v1 - v2 << endl;
        cout << "Vector v1 - v3:" << endl;
        cout << v1 - v3 << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // multiplication of vectors
    {
        cout << "##### Multiplication of vectors #####" << endl << endl;
        cout << "Vector v1 * v2:" << endl;
        cout << v1 * v2 << endl;
        cout << "Vector v1 * v3:" << endl;
        cout << v1 * v3 << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // actions between vectors and numbers
    {
        cout << "##### Actions between vectors and numbers #####" << endl << endl;
        cout << "v1 + 10:" << endl;
        cout << v1 + 10 << endl;
        cout << "v2 - 6:" << endl;
        cout << v2 - 6 << endl;
        cout << "v3 * 4:" << endl;
        cout << v3 * 4 << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // length
    {
        cout << "##### Length of vectors #####" << endl << endl;
        cout << "len|A|:" << endl;
        cout << A.Length() << endl << endl;
        cout << "len|B|:" << endl;
        cout << B.Length() << endl << endl;
        cout << "len|C|:" << endl;
        cout << C.Length() << endl << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // comparisons
    {
        cout << "##### Comparisons #####" << endl << endl;
        cout << "v1 == v2? : ";
        cout << (v1 == v2) << endl << endl;
        cout << "v3 == v3? : ";
        cout << (v3 == v3) << endl << endl;
        cout << "v1 != v3? : ";
        cout << (v1 != v3) << endl << endl;
        cout << "v2 != v2? : ";
        cout << (v2 != v2) << endl << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    cout << "##### Test of Matrices #####" << endl << endl;

    try // parameterized constructors
    {
        cout << "##### Test of Parameterized constructors #####" << endl << endl;
        cout << "Matrix with size 3: " << endl;
        TMatrix<int> D(3);
        cout << D << endl;
        cout << "Matrix with size -25: " << endl;
        TVector<int> F(-250);
        cout << F << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // copy constructors
    {
        cout << "##### Test of Copy constructors #####" << endl << endl;
        cout << "Matrix G(A): " << endl;
        TMatrix<int> G(A);
        cout << G << endl;
        cout << "Matrix A: " << endl;
        cout << A << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // adding
    {
        cout << "##### Adding #####" << endl << endl;
        cout << "Matrix A + B:" << endl;
        cout << A + B << endl;
        cout << "Matrix A + C:" << endl;
        cout << A + C << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // subtraction
    {
        cout << "##### Subtraction #####" << endl << endl;
        cout << "Matrix A - B:" << endl;
        cout << A - B << endl;
        cout << "Matrix A - C:" << endl;
        cout << A - C << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // multiplication of matrices
    {
        cout << "##### Multiplication of matrices #####" << endl << endl;
        cout << "Matrix A * B:" << endl;
        cout << A * B << endl;
        cout << "Matrix A * C:" << endl;
        cout << A * C << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // actions between matrices and numbers
    {
        cout << "##### Actions between matrices and numbers #####" << endl << endl;
        cout << "A + 10:" << endl;
        cout << A + 10 << endl;
        cout << "Matrix B - 6:" << endl;
        cout << B - 6 << endl;
        cout << "C * 4:" << endl;
        cout << C * 4 << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // multiplication of matrix and vector
    {
        cout << "##### Multiplication of matrix and vector #####" << endl << endl;
        cout << "A * v1:" << endl;
        cout << A * v1 << endl << endl;
        cout << "A * v2:" << endl;
        cout << A * v2 << endl << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // determinant
    {
        cout << "##### Determinants of matrices #####" << endl << endl;
        cout << "det|A|:" << endl;
        cout << A.Determinant() << endl << endl;
        cout << "det|B|:" << endl;
        cout << B.Determinant() << endl << endl;
        cout << "det|C|:" << endl;
        cout << C.Determinant() << endl << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    try  // comparisons
    {
        cout << "##### Comparisons #####" << endl << endl;
        cout << "A == B? : ";
        cout << (A == B) << endl << endl;
        cout << "A == A? : ";
        cout << (A == A) << endl << endl;
        cout << "A != B? : ";
        cout << (A != B) << endl << endl;
        cout << "C != C? : ";
        cout << (C != C) << endl << endl;
    }
    catch (Exception ex)
    {
        cout << ex.what() << endl << endl;
    }

    int c =_getch();
}