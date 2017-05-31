#pragma once
#include"Associative.h"

class Hash
{
	typedef struct item {
		string name;
		string balance;
		item* next;
	}*itemptr; itemptr HashTable[SIZE];
	int HashFunction(string);
	int NumberOfItemsInBucket(int);
public:
	Hash();
	~Hash();
	void AddItem(string, string);
	void PrintHashTable();
	void SearchName(string);
	void DeleteName(string);
	void ChangeDetails(string, string);
};

