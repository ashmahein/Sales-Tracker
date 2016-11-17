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
#include "BSTNode.h"

/*************************************************************
* Function: BSTNode ()                                      *
* Date Created: 07/20/16                                    *
* Date Last Modified: 07/20/16                              *
* Description: constructor that set the data to new data    *
*              and pLeft and pRight to nullptr.             *
*                                                           *
* Input parameters: newData                                 *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
BSTNode::BSTNode(const string &newData)
{
	this->mData = newData;
	this->mPLeft = nullptr;
	this->mPRight = nullptr;
}

/*************************************************************
* Function: ~BSTNode ()                                     *
* Date Created: 07/20/16                                    *
* Date Last Modified: 07/20/16                              *
* Description: destructor                                   *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
BSTNode::~BSTNode()
{

}

/*************************************************************
* Function: setter                                          *
* Date Created: 07/20/16                                    *
* Date Last Modified: 07/20/16                              *
* Description: sets info                                    *
*                                                           *
* Input parameters: newData                                 *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BSTNode::setNewData(const string &newData)
{
	this->mData = newData;
}

/*************************************************************
* Function: setter                                          *
* Date Created: 07/20/16                                    *
* Date Last Modified: 07/20/16                              *
* Description: sets info                                    *
*                                                           *
* Input parameters: pLeft                                   *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BSTNode::setPLeft(BSTNode * const &newPLeft)
{
	this->mPLeft = newPLeft;
}

/*************************************************************
* Function: setter                                          *
* Date Created: 07/20/16                                    *
* Date Last Modified: 07/20/16                              *
* Description: sets info                                    *
*                                                           *
* Input parameters: pRight                                   *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void BSTNode::setPRight(BSTNode * const &newPRight)
{
	this->mPRight = newPRight;
}

/*************************************************************
* Function: getter                                          *
* Date Created: 07/20/16                                    *
* Date Last Modified: 07/20/16                              *
* Description: sets info                                    *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: string                                           *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
string BSTNode::getNewData() const
{
	return this->mData;
}

/*************************************************************
* Function: getter                                          *
* Date Created: 07/20/16                                    *
* Date Last Modified: 07/20/16                              *
* Description: sets info                                    *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: string                                           *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
BSTNode *& BSTNode::getPLeft()
{
	return this->mPLeft;
}

/*************************************************************
* Function: getter                                          *
* Date Created: 07/20/16                                    *
* Date Last Modified: 07/20/16                              *
* Description: sets info                                    *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: string                                           *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
BSTNode *& BSTNode::getPRight()
{
	return this->mPRight;
}