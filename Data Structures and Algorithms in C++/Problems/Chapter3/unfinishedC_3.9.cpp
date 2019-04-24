/*
C-3.9

Question:
  Give a fast algorithm for combining two doubly linked lists 'L' and 'M'
  into a new doubly linked list 'Z'.
*/

/*
Answer:
  Create a new doubly linked list 'Z'.
  Have Z equal the header of the first doubly linked list 'L'.
  The node that Z's trailer node points to should point to the node that M's
  header points to.

  This code is incomplete and untested. I only provided a description of
  the algorithm above.
*/



typedef string Elem;
class dNode
{
private:
  Elem e;
  dNode* next;
  dNode* prev;

public:
};

class dLinkedList
{
public:
private:
  dNode* header;
  dNode* trailer;
protected:
  void add(dNode* inputNode, const Elem& inputE);
  void remove(dNode* inputNode);
}
