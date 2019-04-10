class MyCircularDeque
{
public:
	vector<int> v;
	int size1;

	/** Initialize your data structure here. Set the size of the deque to be k. */
	MyCircularDeque(int k)
	{
		size1 = k;

	}

	/** Adds an item at the front of Deque. Return true if the operation is successful. */
	bool insertFront(int value)
	{
		if (v.size() >= size1)
			return false;
		v.insert(v.begin(), value);
		return true;
	}

	/** Adds an item at the rear of Deque. Return true if the operation is successful. */
	bool insertLast(int value)
	{
		if (isFull())
			return false;
		v.push_back(value);
		return true;
	}

	/** Deletes an item from the front of Deque. Return true if the operation is successful. */
	bool deleteFront()
	{
		if (isEmpty())
			return false;
		v.erase(v.begin());

		return true;
	}

	/** Deletes an item from the rear of Deque. Return true if the operation is successful. */
	bool deleteLast()
	{
		if (v.empty())
			return false;
		v.pop_back();

		return true;
	}

	/** Get the front item from the deque. */
	int getFront()
	{
		if (v.empty())
			return -1;
		return v[0];
	}

	/** Get the last item from the deque. */
	int getRear()
	{
		if (isEmpty())
			return -1;
		return v[v.size() - 1];
	}

	/** Checks whether the circular deque is empty or not. */
	bool isEmpty()
	{
		return v.empty();
	}

	/** Checks whether the circular deque is full or not. */
	bool isFull()
	{
		if (v.size() >= size1)
			return true;
		else
			return false;
	}
};