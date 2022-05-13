// Sceance_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
//using std::cout;

int global = 1;


int main(){
    cout << "Hello World!\n";
    //Why C++.
    // C++ versions. C++03 , C++11, C++14, 17, 20
     
    // C++ structure.
     
    // Variables generelisation.

    // Variables contain always some sort of data (even garbage).

    // Idenrifiers (names for variables).


    // Naming conventions.
    // camelCase   justAPhrase  a b i

    // Reserved keywords.

    // Variable declaration.
    // type nomDeVariable = {};

    // Initialisation of variables.



    //// Assignment statements.
    //int a;
    //a = 4;

    // IO
    // cout // cin

    //std::cout << "hello" << "a" << '\n';
    //std::cin >> a >> b;
    //std::cout << '\n' << a;

    //

    // namespaces

    // Data types.

    // int. entiers [2 Milliard +2 Milliard] 4 octet.
        //int nomDeVariable = 0;

    // float. 4 octet. 
    //float nomDeFloat = 3.4;

    //cout << nomDeFloat;

    // double. 8 octet.
    //double nomDeDouble = 5.4564654;
    //cout << nomDeDouble;

    //short / long / long long / unsigned ...
    /*  short a;
      unsigned int b;*/

  // char. 1 octet. 0-255. 'A' = 65.
  /*char c = 'A';
  cout << c << '\n';*/

  // bool. 1 octet.
  /*bool b = true;
  cout << boolalpha << b;
   */
   // auto. C++ 11.
   //auto g = "hello";
   //int a = 5;
   //int b = 6; 

   //auto c = a + b;
   //cout << c;


   // Arithmetic operations (+, -, *, /, %).
   /*int a = 5;
   int b = 2;
   cout << a + b << '\n' << a * b << '\n' << a - b << '\n' << a / b << '\n' << a % b;*/


   // Logical operations(!, ||, &&, ==, !=).
   // avec les valeurs bool.
   //bool b = true;
   //int a = 5;
   //cout << b << '\n' << !b << '\n' << (b || false)
   //    << '\n' << (b && false) << '\n' << (a == 5)
   //    << '\n' << (a != 5);

   // Identation.


   // Comments.
   //
   /**/


   // const.

   //int a = 6;
   //const int b = a + 1;
   //cout << a << '\t' << b << '\n';
   //a = 7; 
   //cout << a << '\t' << b;

   // Variable scope.
    
   // auto local = "local 1";
   // cout << local << '\n';
   //{
   //     //auto local = "local 2";
   //     cout << local << '\n';

   //    {
   //         auto local = 5;
   //         //local = "local2";
   //         cout << local << '\n';
   //        {
   //            //cout << global << '\n';
   //            //int local_3 = 3;

   //            cout << local << '\n';
   //        }
   //        //cout << local_3;
   //    }
   //}
 
    // Flow control.
     
    // if / else. 
    //if (true)
    //{
    //    cout << "true";
    //}
    //if (false)
    //{
    //    cout << "false";
    //}

    //if (true)
    //    cout << "true";

    //switch.
    
    //int a = 2;
    //switch (a)
    //{
    //case 1: // a == 1.
    //    cout << "1";
    //    break;
    //case 2: // a == 2.
    //    cout << "2";
    //    break;
    //default: //Always true.
    //    cout << "not found";
    //    break;
    //}
     
    // Loops.
    
    // for. i++  i = i + 1. i += 1 , 
    // [ferme, ouvert[.
//i = 0, 1, 2, 3
    //for (size_t i = 0; i < 3; i++)
    //{
    //    cout << i << '\n';
    //}
    // 
    // while.
    
    //int i = 0; 
    //while (i < 3)
    //{
    //    cout << i << '\n';
    //    if (i == 1) 
    //        break;
    //    i += 1;
    //}

     
    // do while.
    //do
    //{

    //} while (true);

    //Pointers.

    //Arrays.

    //C-style strings.

    //functions.


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
