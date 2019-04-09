/*
R-6.6 

Provide the missing housekeeping functions for the ArrayVector class of Code Fragment 6.2:
	copy constructor
	assignment operator
	destructor

(untested)
*/

typedef int Elem;

class ArrayVector
{
public:
	ArrayVector();	//default constructor
	ArrayVector(int capInput, int nInput, const Elem& inputA);	//copy constructor (I think)
	ArrayVector(const ArrayVector& inputArrVec);

	~ArrayVector();	//destructor

	int size() const;
	bool empty() const;
	Elem& operator[](int i);
	Elem& at(int i) throw(IndexOutOfBounds);
	void erase(int i);
	void insert(int i, const Elem& e);
	void reserve(int N);

private:
	int capacity;	//current array size.
	int n;			//number of elements in a vector.
	Elem* A;		//array storing the elements.
};

ArrayVector::ArrayVector()
{
	capacity = 10;
	n = 10;
	Elem A[n];

}

ArrayVector::ArrayVector(int capInput, int nInput, const Elem& inputA)
{
	capacity = capInput;
	n = nInput;
	A = inputA;
}

ArrayVector::ArrayVector(const ArrayVector& inputArrVec)
{
	capacity = inputArrVec.capacity;
	n = inputArrVec.n;
	A = inputArrVec.A;
}

ArrayVector::~ArrayVector()
{
	delete [] A;
}

