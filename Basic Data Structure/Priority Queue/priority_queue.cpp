/*--------------------------------PRIORITY QUEUE--------------------------------*/

template <class T> class priority_queue{
	private:
		static const int N = 1000005;
		T arr[N];
		int sz;
	public:
		priority_queue(){
			sz = 0;
		}
		bool empty();
		T top();
		void push(T item);
		void down(int idx);
		void pop();		
};

template <typename T> bool priority_queue<T>::empty(){
	return (sz==0);
}

template <typename T> T priority_queue<T>::top(){
	return arr[1];
}

template <typename T> void priority_queue<T>::push(T item){
	int pos = ++sz;
	for(;pos>1 && item>arr[pos/2];pos>>=1) arr[pos] = arr[pos/2];
	arr[pos] = item;
}

template <typename T> void priority_queue<T>::down(int idx){
	int L = idx*2;
	int R = idx*2+1;
	
	if(L<=sz && R<=sz && arr[L]<arr[R]) L = R;
	
	if(L<=sz && arr[idx]<arr[L]){
		T tmp = arr[idx];
		arr[idx]= arr[L];
		arr[L] = tmp;
		this->down(L);
	}
}

template <typename T> void priority_queue<T>::pop(){
	T tmp = arr[1];
	arr[1] = arr[sz];
	sz--;
	this->down(1);
}

