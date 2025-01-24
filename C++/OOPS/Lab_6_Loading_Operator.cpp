#include <iostream>
#include <cstdlib>
using namespace std;

class Matrix
{
public:
    int row = 0;
    int column = 0;
    int **arr;
    Matrix();
    Matrix(int row, int column)
    {
        this->row = row;
        this->column = column;
        arr = new int *[row];
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[column];
        }
    }
    void setValues()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "Enter the value of " << i << " , " << j << endl;
                cin >> arr[i][j];
            }
        }
        return;
    }
    void display()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << i << " , " << j << " = " << arr[i][j] << endl;
            }
        }
    }

    Matrix operator+(Matrix const &mat)
    {
        Matrix res(row, column);
        if (row != mat.row || column != mat.column)
        {
            cout << "Addition is not possible\n";
            return res;
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                res.arr[i][j] = mat.arr[i][j] + arr[i][j];
            }
        }
        return res;
    }

    Matrix operator-(Matrix const &mat)
    {
        Matrix res(row, column);
        if (row != mat.row && column != mat.column)
        {
            cout << "Addition is not possible\n";
            return res;
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                res.arr[i][j] = arr[i][j] - mat.arr[i][j];
            }
        }
        return res;
    }

    Matrix operator*(Matrix const &b)
    {
        if (column != b.row)
        {
            cout << "Multiplication is not possible\n";
            exit(0);
        }
        Matrix res(row, b.column);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < b.column; j++)
            {
                res.arr[i][j] = 0;
                for (int k = 0; k < column; k++)
                {
                    res.arr[i][j] += arr[i][k] * b.arr[k][j];
                }
            }
        }
        return res;
    }

    Matrix operator*(int scalar)
    {
        Matrix res(row, column);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                res.arr[i][j] = arr[i][j] * scalar;
            }
        }
        return res;
    }

    friend Matrix operator*(int scalar, Matrix const &mat)
    {
        Matrix res(mat.row, mat.column);
        for (int i = 0; i < mat.row; i++)
        {
            for (int j = 0; j < mat.column; j++)
            {
                res.arr[i][j] = mat.arr[i][j] * scalar;
            }
        }
        return res;
    }

    Matrix operator/(int scalar)
    {
        if (scalar == 0)
        {
            cout << "Division by zero is not allowed\n";
            exit(0);
        }
        Matrix res(row, column);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                res.arr[i][j] = arr[i][j] / scalar;
            }
        }
        return res;
    }
};
int main()
{
    Matrix a(2, 2), b(2, 2);

    cout << "Set values for matrix A:" << endl;
    a.setValues();

    cout << "Set values for matrix B:" << endl;
    b.setValues();

    cout << "\nMatrix A + B:" << endl;
    Matrix add = a + b;
    add.display();

    cout << "\nMatrix A - B:" << endl;
    Matrix sub = a - b;
    sub.display();

    cout << "\nMatrix A * B:" << endl;
    Matrix mul = a * b;
    mul.display();

    int scalar = 2;
    cout << "\nMatrix A * " << scalar << ":" << endl;
    Matrix scalarMul = a * scalar;
    scalarMul.display();

    cout << "\n"
         << scalar << " * Matrix A (commutative):" << endl;
    Matrix scalarMulComm = scalar * a;
    scalarMulComm.display();

    cout << "\nMatrix A / " << scalar << ":" << endl;
    Matrix scalarDiv = a / scalar;
    scalarDiv.display();
}
