#include "stdafx.h"
#include "Hash.h"


Hash::Hash()
{
	for (int i = 0; i != SIZE; i++) {
		HashTable[i] = new item;
		HashTable[i]->name = "NULL";
		HashTable[i]->balance = "NULL";
		HashTable[i]->next = NULL;
	}
}

Hash::~Hash()
{
}

int Hash::HashFunction(string key)
{
	int hash = 0;
	for (int i = 0; i != key.length(); i++)
		hash = hash + (int)key[i];
	int index = hash%SIZE;
	return index;
}

int Hash::NumberOfItemsInBucket(int Bucket)
{
	int count = 0;
	if (HashTable[Bucket]->name == "NULL")
		return count;
	else {
		itemptr curr = HashTable[Bucket];
		while (curr->next != NULL) {
			count++;
			curr = curr->next;
		}
		return count;
	}
}

void Hash::AddItem(string Name , string Balance)
{
	if (HashTable[HashFunction(Name)]->name == "NULL")
	{
		HashTable[HashFunction(Name)]->name = Name;
		HashTable[HashFunction(Name)]->balance = Balance;
	}
	else {
		itemptr curr = HashTable[HashFunction(Name)];
		itemptr n = new item;
		n->name = Name;
		n->balance = Balance;
		n->next = NULL;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = n;
	}
}

void Hash::PrintHashTable()
{
	for (int i = 0; i != SIZE; i++) {
		if (HashTable[i]->name != "NULL") {
			cout << "------------------------------" << endl;
			cout << "Bucket Index:" << i << endl;
			cout << "Name is:" << HashTable[i]->name << endl;
			cout << "Balance is:" << HashTable[i]->balance << endl;
			cout << "Number of Items in the same Bucket:" << NumberOfItemsInBucket(i) << endl;
			cout << "--------------------" << endl;
			for (int j = 0; j != NumberOfItemsInBucket(i); i++) {
				int count = 0; itemptr curr = HashTable[i];
				cout << "Items at Index " << i << " as Linked List are:-" << endl;
				while (curr->next != NULL) {
					curr = curr->next;
					cout << "-----" << endl;
					cout << "Linked List Index:" << count << endl; count++;
					cout << "Name is:" << curr->name << endl;
					cout << "Balance is:" << curr->balance << endl;
				}
			}cout << "--------------------" << endl;
			cout << "------------------------------" << endl;
		}
	}
}

void Hash::SearchName(string Name)
{
	bool check = false;
	if (HashTable[HashFunction(Name)]->name == Name) {
		cout << "Name is:" << HashTable[HashFunction(Name)]->name << endl;
		cout << "Balance is:" << HashTable[HashFunction(Name)]->balance << endl;
	}
	else {
		itemptr curr = HashTable[HashFunction(Name)]->next;
		while (curr != NULL && curr->name != Name)
			curr = curr->next;
		if (curr == NULL)
			cout << "Sorry!Your Name wasn't found in the Hash Table" << endl;
		else {
			cout << "Name is:" << curr->name << endl;
			cout << "Balance is:" << curr->balance << endl;
		}
	}

}

void Hash::DeleteName(string Name)
{
	if (HashTable[HashFunction(Name)]->name == Name) {
		HashTable[HashFunction(Name)]->name = "NULL";
		HashTable[HashFunction(Name)]->balance = "NULL";
	}
	else {
		itemptr curr = HashTable[HashFunction(Name)]; itemptr temp = NULL;
		while (curr != NULL && curr->name != Name) {
			temp = curr;
			curr = curr->next;
		}
		if (curr == NULL)
			cout << "Your Name wasn't found in the Hash Table to be deleted" << endl;
		else {
			temp->next = curr->next;
			delete curr;
		}
	}
}

void Hash::ChangeDetails(string Name, string Balance)
{
	DeleteName(Name);
	AddItem(Name, Balance);
}
