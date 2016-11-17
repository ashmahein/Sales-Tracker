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
#include "TransactionNode.h"

/*************************************************************
* Function: constructor ()                                  *
* Date Created: 07/22/16                                    *
* Date Last Modified: 07/22/16                              *
* Description: constructs objects                           *
*                                                           *
* Input parameters: units, data                             *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
TransactionNode::TransactionNode(const int newUnits, const string newData) : BSTNode(newData)
{
	this->mUnits = newUnits;
}

/*************************************************************
* Function: destructor ()                                   *
* Date Created: 07/22/16                                    *
* Date Last Modified: 07/22/16                              *
* Description: destorys trees                               *
*                                                           *
* Input parameters: units, data                             *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
TransactionNode::~TransactionNode()
{

}

/*************************************************************
* Function: setter                                          *
* Date Created: 07/22/16                                    *
* Date Last Modified: 07/22/16                              *
* Description: sets the units in the node                   *
*                                                           *
* Input parameters: units                                   *
*                                                           *
* Returns: Transaction node                                 *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void TransactionNode::setUnits(const int newUnits)
{
	this->mUnits = newUnits;
}

/*************************************************************
* Function: getter                                          *
* Date Created: 07/22/16                                    *
* Date Last Modified: 07/22/16                              *
* Description: gets the units in the node                   *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: Transaction node                                 *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
int TransactionNode::getNewUnits() const
{
	return this->mUnits;
}

/*************************************************************
* Function: printData ()                                    *
* Date Created: 07/22/16                                    *
* Date Last Modified: 07/22/16                              *
* Description: prints the units and product.                *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void TransactionNode::printData()
{
	cout << "Product: " << this->getNewData() << endl;
	cout << "Units: " << this->getNewUnits() << endl;
}

/*************************************************************
* Function: getter                                          *
* Date Created: 07/22/16                                    *
* Date Last Modified: 07/22/16                              *
* Description: gets the transaction node                    *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: Transaction node                                 *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
TransactionNode & TransactionNode::getNode()
{
	return (*this);
}