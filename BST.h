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
#include "TransactionNode.h"


class BST
{
public:
	//constructor
	BST();
	//destructor
	~BST();

	//public member functions
	void insert(const int &newUnits, const string &newData);
	void inOrderTraversal();
	TransactionNode &findLargest();
	TransactionNode &findSmallest();

//private data members.
private:
	BSTNode *pRoot;

	//private member functions
	void destroyTree(BSTNode *&pTree);
	void insert(BSTNode *&pTree, const int &newUnits, const string &newData);
	void inOrderTraversal(BSTNode *&pTree);
};