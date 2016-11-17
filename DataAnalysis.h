/*******************************************************************************
* Programmer: Ash Mahein                                                      *
* Class: CptS 122; Lab Section 1                                              *
* Programming Assignment: 7                                                   *
* Date: 7/12/16                                                               *
*                                                                             *
* Description: This program reads in with data and places the information in  *
*              a BST ordering it given the number of units sold/purchased     *
*              it then displays the most/least purchased/sold items in the    *
*              list.                                                          *
*                                                                             *
* Relevant Formulas: NONE									                  *
* Collaboration: Andy O'Fallon, Rahul Singal, Jose Cuevas.                    *
* Websites used: Stackoverflow                                                *
******************************************************************************/
#pragma once
#include "BSTNode.h"
#include "BST.h"

class DataAnalysis
{
public:
	//public member function
	void runAnalysis();

private:
	//private data members.
	BST mTreeSold;
	BST mTreePurchased;
	fstream mCsvStream;

	//private member functions.
	void open(fstream &infile);
	void readLine(fstream &infile);
	void readFile(fstream &infile);
	void trends();
};