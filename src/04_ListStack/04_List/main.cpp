#include "Includes/TList.h"
#include "Includes/exceptions.h"

#include <conio.h>
#include <iostream>

void main()
{
	cout << "##### TEST <List> #####" << endl << endl;
	
	try
	{
		cout << "### Testing of constructors ###" << endl;

		cout << "Defalt: ";
		TList<int, int> listDef;
		cout << listDef;

		cout << "Parameterized: ";
		TNode<int, int>* node3 = new TNode<int, int>(10, NULL);
		TNode<int, int>* node2 = new TNode<int, int>(9, NULL, node3);
		TNode<int, int>* node1 = new TNode<int, int>(8, NULL, node2);
		TNode<int, int>* node0 = new TNode<int, int>(7, NULL, node1);
		TList<int, int> listParametr(node0);
		cout << listParametr;

		cout << "Copy: ";
		TList<int, int> listCopy(listParametr);
		cout << listCopy;
	}
	catch (Exception ex)
	{
		cout << ex.what() << endl << endl;
	}

	cout << endl << "### Testing of methods ###" << endl;
	try
	{
		cout << endl << "### Testing of search ###" << endl;
		cout << "List: ";
		TNode<int, int>* node3 = new TNode<int, int>(10, NULL);
		TNode<int, int>* node2 = new TNode<int, int>(9, NULL, node3);
		TNode<int, int>* node1 = new TNode<int, int>(8, NULL, node2);
		TNode<int, int>* node0 = new TNode<int, int>(7, NULL, node1);
		TList<int, int> list(node0);
		cout << list;

		cout << "Search 9: " << list.Search(9) << endl;
		cout << "Search 1: " << list.Search(1) << endl;
	}
	catch (Exception ex)
	{
		cout << ex.what() << endl << endl;
	}
	
	try
	{
		cout << endl << "### Testing of popBegin ###" << endl;
		cout << "ListA: ";
		TList<int, int> listA;
		cout << listA;
		cout << "ListA.PopBegin (25): ";
		listA.PopBegin(25, NULL);
		cout << listA;

		cout << endl << "ListB: ";
		TNode<int, int>* node3 = new TNode<int, int>(10, NULL);
		TNode<int, int>* node2 = new TNode<int, int>(9, NULL, node3);
		TNode<int, int>* node1 = new TNode<int, int>(8, NULL, node2);
		TNode<int, int>* node0 = new TNode<int, int>(7, NULL, node1);
		TList<int, int> listB(node0);
		cout << listB;
		cout << "ListB.PopBegin (1): ";
		listB.PopBegin(1, NULL);
		cout << listB;
	}
	catch (Exception ex)
	{
		cout << ex.what() << endl << endl;
	}

	try
	{
		cout << endl << "### Testing of popEnd ###" << endl;
		cout << "ListA: ";
		TList<int, int> listA;
		cout << listA;
		cout << "ListA.PopEnd (25): ";
		listA.PopEnd(25, NULL);
		cout << listA;

		cout << endl << "ListB: ";
		TNode<int, int>* node3 = new TNode<int, int>(10, NULL);
		TNode<int, int>* node2 = new TNode<int, int>(9, NULL, node3);
		TNode<int, int>* node1 = new TNode<int, int>(8, NULL, node2);
		TNode<int, int>* node0 = new TNode<int, int>(7, NULL, node1);
		TList<int, int> listB(node0);
		cout << listB;
		cout << "ListB.PopEnd (1): ";
		listB.PopEnd(1, NULL);
		cout << listB;
	}
	catch (Exception ex)
	{
		cout << ex.what() << endl << endl;
	}

	try
	{
		cout << endl << "### Testing of popBefore ###" << endl;
		cout << "ListA: ";
		TNode<int, int>* node3 = new TNode<int, int>(10, NULL);
		TNode<int, int>* node2 = new TNode<int, int>(9, NULL, node3);
		TNode<int, int>* node1 = new TNode<int, int>(8, NULL, node2);
		TNode<int, int>* node0 = new TNode<int, int>(7, NULL, node1);
		TList<int, int> listA(node0);
		cout << listA;
		cout << "ListA.popBefore 9 (30): ";
		listA.PopBefore(9, 30, NULL);
		cout << listA;
		cout << "ListA.popBefore 7 (1) [begin]: ";
		listA.PopBefore(7, 1, NULL);
		cout << listA;
		cout << "ListA.popBefore 29 (28): ";
		listA.PopBefore(29, 28, NULL);
		cout << listA;
	}
	catch (Exception ex)
	{
		cout << ex.what() << endl << endl;
	}

	try
	{
		cout << endl << "### Testing of popAfter ###" << endl;
		cout << "ListA: ";
		TNode<int, int>* node3 = new TNode<int, int>(10, NULL);
		TNode<int, int>* node2 = new TNode<int, int>(9, NULL, node3);
		TNode<int, int>* node1 = new TNode<int, int>(8, NULL, node2);
		TNode<int, int>* node0 = new TNode<int, int>(7, NULL, node1);
		TList<int, int> listA(node0);
		cout << listA;
		cout << "ListA.popAfter 9 (30): ";
		listA.PopAfter(9, 30, NULL);
		cout << listA;
		cout << "ListA.popAfter 10 (100) [end]: ";
		listA.PopAfter(10, 100, NULL);
		cout << listA;
		cout << "ListA.popAfter 29 (28): ";
		listA.PopAfter(29, 28, NULL);
		cout << listA;
	}
	catch (Exception ex)
	{
		cout << ex.what() << endl << endl;
	}

	try
	{
		cout << endl << "### Testing of delete ###" << endl;
		cout << "ListA: ";
		TNode<int, int>* node3 = new TNode<int, int>(10, NULL);
		TNode<int, int>* node2 = new TNode<int, int>(9, NULL, node3);
		TNode<int, int>* node1 = new TNode<int, int>(8, NULL, node2);
		TNode<int, int>* node0 = new TNode<int, int>(7, NULL, node1);
		TList<int, int> listA(node0);
		cout << listA;
		cout << "ListA.Delete 8: ";
		listA.Delete(8);
		cout << listA;
		cout << "ListA.Delete 10 [end]: ";
		listA.Delete(10);
		cout << listA;
		cout << "ListA.Delete 7 [begin]: ";
		listA.Delete(7);
		cout << listA;
		cout << "ListA.Delete 100: ";
		listA.Delete(100);
		cout << listA;
	}
	catch (Exception ex)
	{
		cout << ex.what() << endl << endl;
	}

	_getch();
}