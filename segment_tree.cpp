#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class SegmentTree{
private: 
	vi st, A;
	int n;
	int left(int p){ return p<<1; }
	int right(int p){ return (p<<1)+1; }

	void build(int p, int l, int r){
		if(l==r) st[p] = l;
		else{
			build(left(p), l, (l+r)/2);
			build(right(p), (l+r)/2 + 1, r);
			int p1, p2;
			p1 = st[left(p)];
			p2 = st[right(p)];
			st[p] = (A[p1] <= A[p2] ? p1 : p2) ;
		}
	}

	int rmq(int p, int l, int r, int i, int j){
		if(i > r || j < l) return -1;
		if(l >= i && r <= j) return st[p];

		int p1, p2;
		p1 = rmq(left(p), l, (l+r)/2, i, j);
		p2 = rmq(right(p), (l+r)/2 + 1, r, i, j);
		if(p1 == -1) return p2;
		if(p2 == -1) return p1;

		return (A[p1] <= A[p2] ? p1 : p2);
	}

	void update(int p, int l, int r, int idx, int val){
		int i = idx, j = idx;
		if(i > R || j < L) return st[p];
		if(l==i && r==j){
			A[i] = val;
			return st[p] = l;
		}
		int p1, p2;
		p1 = update(left(p), l, (l+r)/2, idx, val);
		p2 = update(right(p), (l+r)/2 + 1, r, idx, val);
		return st[p] = (A[p1] <= A[p2] ? p1 : p2);
	}
public:
	SegmentTree(const vi &_A){
		A = _A; n = (int)A.size();
		st.assign(4*n, 0);
		build(1, 0, n-1);
	}

	int rmq(int i, int j){ return rmq(1, 0, n-1, i, j); }
	int update(int idx, int val){
		return update(1, 0, n-1, idx, val);
	}

};

int main(){

}