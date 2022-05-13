// sceance 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector> 

using namespace std;

//int, char, string, double ....
//struct Point{
//    int x;
//    int y;
//
//    int getNorm()
//    {
//        return sqrt(x * x + y * y);
//    }
//};

//class Point
//{
//public:
//    Point(int i_x, int i_y)
//    {
//        x = i_x;
//        y = i_y;
//    }
//    Point()
//    {
//        x = 0;
//        y = 0;
//    }
//    void setX(int i_x)
//    {
//        if (i_x > 0)
//            x = i_x;
//        else
//            x = 0;
//    }
//    int getX()
//    {
//        return x;
//    }
//
//    void setPoint(int i_x, int i_y)
//    {
//        x = i_x;
//        y = i_y;
//    }
//
//    void printPoint()
//    {
//        cout << x << '\t' << y << '\n';
//    }
//private:
//    int x;
//    int y;
//};
//

//Create a Matrix class. 
//Matrix could be of any size. 
// the size is declared at the constructor.
// example :
// Matrix uniteMatrix = Matrix(3, 3);
// uniteMatrix.setElement(0, 0, 1);
// 0  0  0         1  0  0
// 0  0  0  ----   0  0  0
// 0  0  0         0  0  0
// 
// Implement addition, substraction and multiplication functionnalities.
// printMatrix should print a matrix.
// 
// returnType nomDeFonction (parametres, ...) {}


void printVector(vector<int> v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\t';
    }
    cout << '\n';
}


class Matrix
{
public:
    Matrix(int nRows, int nCol)
    {
        body = vector<vector<int>>(nRows, vector<int>(nCol));
    }
    void printMatrix()const
    {
        for (auto row : body)
        {
            for (auto elt : row)
            {
                cout << elt << '\t';
            }
            cout << '\n';
        }
    }
    void setElement(int r, int c, int v)
    {
        body[r][c] = v;
    }
    void fillMatrix()
    {
        for (auto& row : body)
        {
            for (auto& elt : row)
            {
                cin >> elt;
            }
        }
    }
    Matrix operator +(const Matrix& rhs)
    {
        Matrix result = Matrix(body.size(), body[0].size());

        for (size_t i = 0; i < body.size(); i++)
        {
            for (size_t j = 0; j < body[i].size(); j++)
            {
                result.setElement(i, j, body[i][j] + rhs.body[i][j]);
            }
        }
        return result;
    }
    Matrix operator -(const Matrix& rhs)
    {
        Matrix result = Matrix(body.size(), body[0].size());

        for (size_t i = 0; i < body.size(); i++)
        {
            for (size_t j = 0; j < body[i].size(); j++)
            {
                result.setElement(i, j, body[i][j] - rhs.body[i][j]);
            }
        }
        return result;
    }

private:
    vector<vector<int>> body;
    //body[0][0];
};


int main()
{
    //Point p1 = { 3, 4 };
    //cout << p1.x << '\t' << p1.y << '\n';
    //cout << p1.getNorm();

    //Point p1;
    //p1.printPoint();

    //Point p2 = Point(4, 5);
    //p2.setPoint(6, 6);
    //p2.printPoint();
    //p1.setPoint(2, 5);
    //p1.printPoint();

    Matrix m1 = Matrix(3, 3);
    Matrix m2 = Matrix(3, 3);
    m1.fillMatrix();
    m1.printMatrix();
    cout << endl;
    m2.fillMatrix();
    m2.printMatrix();
    cout << endl;
    Matrix m3 = m1 + m2;
    m3.printMatrix();
    cout << endl;
    Matrix m4 = m1 - m2;
    m4.printMatrix();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
