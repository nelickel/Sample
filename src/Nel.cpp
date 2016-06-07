/*
 * Nel.cpp
 *
 *  Created on: Jun 5, 2016
 *      Author: nel
 */

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

class A {
     private:
         int value;
     public:
         A();
         virtual int f();
     };

     A::A() {
    	 cout << "A::A" << endl;
         value = 0;
     }

     int A::f() {
    	 cout << "A::f" << endl;
         return 0;
     }

 class B: public A {
     public:
         B();
         virtual int f();
     };

     B::B() {
    	 cout << "B::B" << endl;
     }

     int B::f() {
    	 cout << "B::f" << endl;
         return 1;
     }

int main() {

	B b;
	int x;
	A* aPtr = &b;
	x = aPtr->f();

   cout << "Hello, world!" << endl;
   cout << "Hello, Nel!" << endl;
   cout << "x = " << x << endl;
   return 0;
}

