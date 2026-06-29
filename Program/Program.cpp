#include <iostream>

using namespace std;

template <typename KEY, typename VALUE>
class HashTable
{
private:
	struct Node
	{
		KEY key;
		VALUE value;

		Node * next;
	};

	struct Bucket
	{
		int count;
		Node * head;
	};

	int size;
	int capacity;

	Bucket * bucket;

public:
	HashTable()
	{
		size = 0;
		capacity = 8;

		bucket = new Bucket[capacity];

		for (int i = 0; i < capacity; i++)
		{
			bucket[i].head = nullptr;
			bucket[i].count = 0;
		}
	}

	template <typename KEY>
	unsigned int hash_function(KEY key)
	{
		return (unsigned int)key % capacity;
	}

	template<>
	unsigned int hash_function(const char * key)
	{
		unsigned int sum = 0;

		for (int i = 0; *key != '\0'; i++)
		{
			sum += key[i];

			key = key + 1;
		}

		return sum % capacity;
	}

	void insert(KEY key, VALUE value)
	{
		int hashIndex = hash_function(key);

		Node * newNode = new Node;
		 
		newNode->key = key;

		newNode->value = value;

		newNode->next = nullptr;

		if (bucket[hashIndex].count == 0)
		{
			bucket[hashIndex].head = newNode;
		}
		else
		{
			newNode->next = bucket[hashIndex].head;

			bucket[hashIndex].head = newNode;
		}

		bucket[hashIndex].count++;

		size++;
	}

};

int main()
{ 	
	HashTable<const char *, int> hashTable;

	hashTable.insert("Abyssal Mask", 3000);
	hashTable.insert("Bami's Cinder", 1000);

	hashTable.insert("Chain Vest", 800);

	return 0;
}

