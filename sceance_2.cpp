// sceance_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>


using namespace std;

void printVector(const vector<int>& v);

void substractVector(vector<int>& v)
{
    for (int& elt : v)
        elt--;
}
int funcB();

int a = funcB();

//{1, 2, 3, 4} ==> {0, 1, 2, 3}

int main()
{
    funcB();
    //cout << a;

    //references.
    //int box = 5;
    ////box = 6;
    //std::cout << box << '\n';
    //std::cout << &box << '\n';

    //pointers, declaration, referencing, dereferencing.
    //int* p = &box;
    //box = 7;
    //std::cout << box << '\t' << *p << '\n';
    //*p = 9;
    //std::cout << box << '\t' << *p << '\n';

    //C-arrays.
    //int tab[] = { 6, 7, 8 , 9, 10 };
    //std::cout << tab << '\n';
    //std::cout << *tab << '\n';

    ////looping through C-arrays.
    //for (size_t i = 0; i < 5; i++)
    //{
    //    std::cout << tab[i] << '\t';
    //}

    
    //C strings.
    //char line[] = "a line";
    //std::cout << line;
    //line[1] = 't';

    //const char* mot = "another line";
    //mot[1] = 'r';

    //std::string.
    //string s;
    //s = "first line";
    //cout << s.length();
    //s = "second line";
    //cout << '\n' << s.length();

    /*for (size_t i = 0; i < s.length(); i++)
    {
        cout << s[i] << '\n';
    }

    s = "ds;lkagjdgpoierhepihpoiwfhghjsg;klj;lkhjfd;klagjfdgfa";

    for (size_t i = 0; i < s.length(); i++)
    {
        cout << s[i] << '\n';
    }*/
    //std::vector.
    //resizable array.
    // STL standard template library. 
    
    //vector<int> v(100, 1);

    //v = { 1, 2, 3, 4, 5 };
    //
    //v.push_back(64);
    //v.pop_back();
    //v.pop_back();
    //
    //auto it = v.begin() + 2;
    //v.insert(it, 88);

    //for (size_t i = 0; i < v.size(); i++)
    //{
    //    std::cout << v[i] << '\t';
    //}
    //std::cout << '\n';
    ////range based for loop.
    //for (auto& element : v)
    //{
    //    element = 53;
    //    //std::cout << element << '\t';
    //}

    //for (size_t i = 0; i < v.size(); i++)
    //{
    //    std::cout << v[i] << '\t';
    //}


    //oprations on vectors, push, pop, resize, reserve, ....

    //vector<int> v;
    //v.reserve(1000);
    ////v.push_back(888);

    //v = { 1, 2, 4, 6 };

    //v[4] = 5;
    //cout << v[0];

    //looping through vectors.

    //void functions. 

    //vector<int> myVector = { 1, 23, 56 };
   /* printVector(myVector);
    printVector(myVector);
    printVector(myVector);*/
    //data returning functions.

    //pass by value VS pass by reference.

    vector<int> v = { 1, 2, 3, 4, 5, 6 };  
    printVector(v);
    substractVector(v);
    printVector(v);


}

int funcB()
{
    return 65;
}

void funcA()
{
    return;
}


void printVector(const vector<int>& v)
{
    for (const int& elt : v)
    {
        cout << elt << '\t';
    }
    cout << '\n';
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
