#include <iostream>

using namespace std;

template <class T> class vector{
	private:
		int cap;
		int sz;
		T *arr;
	public:
		T& operator [] (unsigned int i){return arr[i];}
		int size();
		T* begin();
		T* end();
		void push_back(const T &item);
		void pop_back();
		void reserve(int n, bool copy);
		void clear();
		
};

template <typename T> void vector<T>::clear(){
	delete arr;
	arr = NULL;
	sz = cap = 0;
}

template <typename T> int vector<T>::size(){
	return sz;
}

template <typename T> void vector<T>::push_back(const T &item){
	if(sz==cap){
		if(cap==0) reserve(1,false);
		else reserve(2*cap,true);
	}
	arr[sz++] = item;
}

template <typename T> void vector<T>::pop_back(){
	sz--;
}

template <typename T> T* vector<T>::begin(){
	return arr;
}

template <typename T> T* vector<T>::end(){
	return arr+size();
}

template <typename T> void vector<T>::reserve(int n, bool copy){
	T *newArr;
	newArr = new T[n];
	
	if(copy) for(int i= 0;i<sz;i++) newArr[i] = arr[i];
	if(arr!=NULL) delete [] arr;
	
	arr = newArr;
	cap = n;
}
