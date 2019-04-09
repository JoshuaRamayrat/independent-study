/*
 * Provide a fully generic version of the class NodeList of Code Fragment 6.9 
 * using a templated class
 *
 *
 * Syntax for declaring a templated class:
 * 	template <class a_type> class a_class {...};
 *
 * Instantiated object of a templated class is called a 'specialization'.:
 */

template <class EmptyElem>
class Node
{
	Node* next;
	Node* prev;
	EmptyElem elem;
}

template <class EmptyElem>
class NodeList {
	private:
		struct Node
		{
			Node* next;
			Node* prev;
			EmptyElem elem;
		}

	public:
		//insert Iterator declaration here...
		
	public:
		NodeList();
		int size() const;
		bool empty() const;
		Iterator begin() const;
		Iterator end() const;
		void insertFront(const Elem& e);
		void insertBack(const Elem& e);
		void insert(const Iterator& p, const elem& e);
		void eraseFront();
		void eraseBack();
		void erase(const Iterator& p);
	private:
		int	n;
		Node* 	header;
		Node*	trailer;
	};


template <class EmptyNode>

class NodeList
{
	public:
		NodeList();	//constructor
		int size() const;
		bool empty() const;
		void  
