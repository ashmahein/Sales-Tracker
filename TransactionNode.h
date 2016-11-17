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

class TransactionNode : public BSTNode
{
public:
	//constructor
	TransactionNode(const int newUnits = 0, const string newData = "");

	//destructor
	~TransactionNode();

	//setter
	void setUnits(const int newUnits);

	//getter
	int getNewUnits() const;
	TransactionNode & getNode();

	//public member function.
	void printData();

	//private data member.
private:
	int mUnits;
};
