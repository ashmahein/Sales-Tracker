/*******************************************************************************
* Programmer: Ash Mahein                                                      *
* Class: CptS 122; Lab Section 1                                              *
* Programming Assignment: 7                                                   *
* Date: 7/19/16                                                               *
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
#include "BST.h"

/*************************************************************
* Function: BST ()                                          *
* Date Created: 07/19/16                                    *
* Date Last Modified: 07/19/16                              *
* Description: constructor that set pRoot to null           *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
BST::BST()
{
	this->pRoot = nullptr;
}

/*************************************************************
* Function: destroyTree ()                                  *
* Date Created: 07/19/16                                    *
* Date Last Modified: 07/19/16                              *
* Description: destroy's the tree after the program is      *
*              about to end.                                *
*                                                           *
* Input parameters: pTree                                   *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BST::destroyTree(BSTNode *&pTree)
{
	if (pTree == nullptr)
	{
		return;
	}
	else if (pTree->getPLeft() != nullptr)
	{
		destroyTree(pTree->getPLeft());
	}
	else
	{
		destroyTree(pTree->getPRight());
	}
	delete(pTree);
}

/*************************************************************
* Function: ~BST ()                                         *
* Date Created: 07/19/16                                    *
* Date Last Modified: 07/19/16                              *
* Description: destructor                                   *
*                                                           *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
BST::~BST()
{
	destroyTree(*&pRoot);
}

/*************************************************************
* Function: insert ()                                       *
* Date Created: 07/19/16                                    *
* Date Last Modified: 07/19/16                              *
* Description: inserts into tree                            *
*                                                           *
*                                                           *
* Input parameters: units, data                             *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BST::insert(const int &newUnits, const string &newData)
{
	insert(this->pRoot, newUnits, newData);
}

/*************************************************************
* Function: inOrderTraversal ()                             *
* Date Created: 07/19/16                                    *
* Date Last Modified: 07/19/16                              *
* Description: traverses through tree and then prints it    *
*                                                           *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BST::inOrderTraversal()
{
	inOrderTraversal(this->pRoot);
}

/*************************************************************
* Function: insert ()                                       *
* Date Created: 07/19/16                                    *
* Date Last Modified: 07/19/16                              *
* Description: inserts the information read from the file   *
*              into the BST, by comparing the units.        *
*                                                           *
* Input parameters: pTree, units, and data.                 *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BST::insert(BSTNode *&pTree, const int &newUnits, const string &newData)
{
	
	if (pTree == nullptr)
	{
		pTree = new TransactionNode (newUnits, newData);
	}
	else if ((dynamic_cast <TransactionNode *> (pTree)->getNewUnits()) > newUnits)
	{
		insert(pTree->getPLeft(), newUnits, newData);
	}
	else if((dynamic_cast <TransactionNode *> (pTree)->getNewUnits()) < newUnits)
	{
		insert(pTree->getPRight(), newUnits, newData);
	}
}

/*************************************************************
* Function: inOrderTraversal ()                             *
* Date Created: 07/19/16                                    *
* Date Last Modified: 07/20/16                              *
* Description: Traverses through the tree and then prints   *
*              out the tree in desending order.             *
*                                                           *
* Input parameters: pTree                                   *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BST::inOrderTraversal(BSTNode *&pTree)
{
	if (*&pTree != nullptr)
	{
		inOrderTraversal(*&pTree->getPLeft());
		pTree->printData();
		inOrderTraversal(*&pTree->getPRight());
	}
}

/*************************************************************
* Function: findLargest ()                                  *
* Date Created: 07/20/16                                    *
* Date Last Modified: 07/20/16                              *
* Description: Traverses through the tree and finds the     *
*              largest item in the tree                     *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: Transaction node                                 *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
TransactionNode & BST:: findLargest()
{
	BSTNode *pTree = pRoot;
		while (pTree->getPRight() != nullptr)
		{
			int temp2 = (dynamic_cast <TransactionNode *> (pTree)->getNewUnits());
			int temp = (dynamic_cast <TransactionNode *> (pTree->getPRight())->getNewUnits());

			pTree = pTree->getPRight();
		}

		//int temp2 = (dynamic_cast <TransactionNode *> (pTree)->getNewUnits());
		//int temp = (dynamic_cast <TransactionNode *> (pTree->getPLeft())->getNewUnits());
		//if (pTree == nullptr)
		//{
		//	cout << "Largest not found." << endl;
		//}
		//else if (temp > temp2)
		//{
		//	if (pTree->getPLeft() != nullptr)
		//	{
		//		findLargest(pTree->getPLeft());
		//	}
		//}
	return (dynamic_cast <TransactionNode *> (pTree)->getNode());
}

/*************************************************************
* Function: findSmallest ()                                 *
* Date Created: 07/20/16                                    *
* Date Last Modified: 07/20/16                              *
* Description: Traverses through the tree and finds the     *
*              smallest item in the tree                    *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: Transaction node                                 *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
TransactionNode & BST:: findSmallest()
{
	BSTNode *pTree = pRoot;
	while (pTree->getPLeft() != nullptr)
	{
		int temp2 = (dynamic_cast <TransactionNode *> (pTree)->getNewUnits());
		int temp = (dynamic_cast <TransactionNode *> (pTree->getPLeft())->getNewUnits());

		pTree = pTree->getPLeft();
	}
	return (dynamic_cast <TransactionNode *> (pTree)->getNode());
}