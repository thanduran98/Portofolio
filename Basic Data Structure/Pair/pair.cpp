/*------------------------------------PAIR------------------------------------*/

template <class T, class TT	> class pair{
	public:
		T FI;
		TT SE;
		pair(){
			
		}
		pair(T fi, TT se){
			FI = fi;
			SE = se;
		}
		
		bool operator<( const pair<T,TT>& rhs){
			if(this.FI < rhs.FI ) return true;
			if(this.FI==rhs.FI) return (this.SE<rhs.SE);
			
		}		
};
