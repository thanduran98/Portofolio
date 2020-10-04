/*------------------------------------STACK------------------------------------*/

template <class T> class stack{
	private:
		class node{
			public:
			T val;
			node *nex;
		};
		node *head;
		
	public:
		stack(){
			head = NULL;
		}
		void push(T item);
		T top();
		void pop();
		bool empty();
};

template <typename T> void stack<T>::push(T item){
	node *tmp = new(node);
	tmp->val = item;
	tmp->nex = NULL;
	
	if(head==NULL){
		head = tmp;
		return;
	}
	
	tmp->nex = head;
	head = tmp;
}

template <typename T> void stack<T>::pop(){
	node *tmp = head;
	if(head->nex==NULL) head = NULL;
	else head = head->nex;
	delete tmp;
}

template <typename T> T stack<T>::top(){
	return head->val;
}

template <typename T> bool stack<T>::empty(){
	return (head==NULL);
}
