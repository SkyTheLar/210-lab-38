/**************************************************

COMSC 210 | Lab 38 | Skylar Robinson | IDE Used: Eclipse

**************************************************/

#include <iostream>
#include <fstream>

#include "BinaryTree.h"
using namespace std;

int menu();

int main() {
	BinaryTree tree;

	//open file
    ifstream in;
    in.open("codes.txt");
    if (!in) {
    	cout << "File error.\n";
    	return -1;
    }

    //populate tree
    string code;
    while (getline(in, code)) {
    	tree.insertNode(code);
    }

    tree.displayInOrder();

    //close file
    in.close();

    int choice = menu();
    while (choice != 5) {
    	switch (choice)
    	case 1: break;
    	case 2: break;
    	case 3: break;
    	case 4: break;
    	default: break;
    }

    return 0;
}

int menu() {
	int choice;
	cout << "Tree operations:\n"
		 << "====================\n"
		 << "[1] Add code\n"
		 << "[2] Delete code\n"
		 << "[3] Search for code\n"
		 << "[4] Modify code\n"
		 << "[5] Exit"
		 << "Enter a choice by number-> ";
	cin >> choice;
	cin.ignore();
	return choice;
}
