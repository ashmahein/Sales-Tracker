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
#include "DataAnalysis.h"

/*************************************************************
* Function: open ()                                         *
* Date Created: 07/21/16                                    *
* Date Last Modified: 07/21/16                              *
* Description: opens the file                               *
*                                                           *
* Input parameters: file                                    *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void DataAnalysis::open(fstream &infile)
{
	infile.open("data.csv", ios::in);
}

/*************************************************************
* Function: readLine ()                                     *
* Date Created: 07/21/16                                    *
* Date Last Modified: 07/21/16                              *
* Description: reads one line for the file                  *
*                                                           *
* Input parameters: file                                    *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void DataAnalysis::readLine(fstream &infile)
{
	
	char line[50] = "";
	char type[50] = "";
	char status[50] = "";

	infile.getline(line, 50, ',');
	int units = atoi(line);
	infile.getline(type, 50, ',');
	infile.getline(status, 50);

	if (status[0] == 'S')
	{
		this->mTreeSold.insert(units, type);
	}
	else
	{
		this->mTreePurchased.insert(units, type);
	}
}

/*************************************************************
* Function: readFile ()                                     *
* Date Created: 07/21/16                                    *
* Date Last Modified: 07/21/16                              *
* Description: calls read line to read entire file          *
*                                                           *
* Input parameters: infile                                  *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void DataAnalysis :: readFile(fstream &infile)
{
	this->open(infile);

	char line[50] = "";
	infile.getline(line, 50);

	while (!infile.eof())
	{
		this->readLine(infile);
	}
	cout << "Purchased Items: " << endl;
	this->mTreePurchased.inOrderTraversal();

	putchar('\n');

	cout << "Sold Items: " << endl;
	this->mTreeSold.inOrderTraversal();
}

/*************************************************************
* Function: trends ()                                       *
* Date Created: 07/21/16                                    *
* Date Last Modified: 07/22/16                              *
* Description: displays the trends from the file using      *
*              findLargest and findSmallest.                *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void DataAnalysis::trends()
{
	TransactionNode obj(0, ""), obj2(0, ""), obj3(0, ""), obj4(0, "");
	obj = mTreePurchased.findLargest();
	obj2 = mTreePurchased.findSmallest();
	obj3 = mTreeSold.findLargest();
	obj4 = mTreeSold.findSmallest();

	cout << "Most Purchased: " << endl;
	cout << "Product: " << obj.getNewData() << ' ' << "Units: " << obj.getNewUnits() << endl;

	putchar('\n');

	cout << "Least Purchased: " << endl;
	cout << "Product: " << obj2.getNewData() << ' ' << "Units: " << obj2.getNewUnits() << endl;

	putchar('\n');

	cout << "Most Sold: " << endl;
	cout << "Product: " << obj3.getNewData() << ' ' << "Units: " << obj3.getNewUnits() << endl;

	putchar('\n');

	cout << "Least Sold: " << endl;
	cout << "Product: " << obj4.getNewData() << ' ' << "Units: " << obj4.getNewUnits() << endl;

	putchar('\n');
}

/*************************************************************
* Function: runAnalysis ()                                  *
* Date Created: 07/21/16                                    *
* Date Last Modified: 07/22/16                              *
* Description: runs the app                                 *
*                                                           *
* Input parameters: NONE                                    *
*                                                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void DataAnalysis::runAnalysis()
{
	cout << "Data Analysis will begin..." << endl;

	putchar('\n');

	readFile(this->mCsvStream);

	putchar('\n');

	trends();
}
