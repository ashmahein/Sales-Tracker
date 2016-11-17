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

#include <iostream> //needed for cout and cin.
#include <string> //needed to use strings.
#include <sstream>
#include <cstdlib> //needed to pause program.
#include <fstream> //needed to read files.
#include <ostream> //needed to write to files.
#include <ios> //needed to input/output.

using namespace::std;

class BSTNode
{
public:
	//constructor
	BSTNode(const string &newData);

	//virtual destructor
	virtual ~BSTNode();

	//setters
	void setNewData(const string &newData);
	void setPLeft(BSTNode * const &newPLeft);
	void setPRight(BSTNode * const &newPRight);

	//getters
	string getNewData() const;
	BSTNode *& getPLeft();
	BSTNode *& getPRight();

	//pure virtual function.
	virtual void printData() = 0;

	//protected data members.
protected:
	string mData;
	BSTNode *mPLeft;
	BSTNode *mPRight;
};