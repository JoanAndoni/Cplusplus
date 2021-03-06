/*
	Name: Joan Andoni Gonz�lez Rioz
	ID: A00569929

    Node class to store integers in a linked list
    
    Gilberto Echeverria
    gilecheverria@yahoo.com

	*/

template <class T>
class Node {
    private:
        T data;
        Node * next = nullptr;
    public:
        //Node () { data = 0; }
        Node (int _data=0) { data = _data; }
        ~Node () { next = nullptr; }
        void setData(int _data) { data = _data; }
        int getData() { return data; }
        void setNext(Node * _next) { next = _next; }
        Node * getNext() { return next; }
};