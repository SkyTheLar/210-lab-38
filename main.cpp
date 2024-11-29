/**************************************************

COMSC 210 | Lab 38 | Skylar Robinson | IDE Used: Eclipse

**************************************************/

#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {


    ifstream in;
    in.open("codes.txt");
    if (!in) {
    	cout << "File error.\n";
    	return -1;
    }

    string code;
    while (getline(in, code)) {

    }

    return 0;
}
