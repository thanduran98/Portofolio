/*------------------------------------QUEUE------------------------------------*/

template <class T> class queue{
	private:
		class node{
			public:
			T val;
			node* nex;
		};
		node *head, *tail;
	public:
		queue(){
			head = tail = NULL;
		}
		void push(T item);
		void pop();
		T front();
		bool empty();
};

template <typename T> void queue<T>::push(T item){
	node* tmp = new(node);
	tmp->val = item;
	tmp->nex = NULL;
	if(head==NULL){
		head =tail= tmp;
		return;
	}
	tail->nex = tmp;
	tail = tmp;
}

template <typename T> void queue<T>::pop(){
	node* tmp = head;
	if(head==tail) head = tail = NULL;
	else head = head->nex;
	delete tmp;
}

template <typename T> T queue<T>::front(){
	return head->val;
}

template <typename T> bool queue<T>::empty(){
	return (head==NULL);
}
