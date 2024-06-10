#pragma once

template <class T>

class HashTable
{
private:
	const int ht_size = 10;
	T** a_hashTable;
	int tableSize;

public:
	HashTable() // create hash table
	{
		a_hashTable = new T * [ht_size];
		tableSize = ht_size;
		for (int i = 0; i < tableSize; i++) {
			a_hashTable[i] = 0;
		}
	}

	HashTable(int size)
	{
		a_hashTable = new T * [size];
		tableSize = size;
		for (int i = 0; i < tableSize; i++) {
			a_hashTable[i] = 0;
		}
	}

	~HashTable() // delete hash table
	{
		if (a_hashTable)
		{
			delete[] a_hashTable;
			a_hashTable = 0;
		}
	}

	bool insert(T* element)  // add elements into the hash tables
	{
		element = 10;
		int elementNow = get(element);
		if (elementNow == 0)
		{
			a_hashTable[tableSize] = element;
			return true;
		}
		return false;
	}
};
