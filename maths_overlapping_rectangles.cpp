#include <bits/stdc++.h>
using namespace std;
struct point{
	int x, y;
};

/*bool overlap(p l1, p r1, p l2, p r2){
	if((l1.y >= r2.y && l1. y <= l2.y) && (r1.x >= l2.x && r1.x <= r2.x))
		return 1;
	if(r1.x >= l2.x && r1.x <= r2.x && r1.y <= l2.y && r1.y >= r2.y)
		return 1;

	if(l1.x >= l2.x && l1.x <= r2.x && r1.y >=r2.y && r1.y <= l2.y)
		return 1;

	if(l1.x <= r2.x && l1.x >= l2.x && l1.y >= r2.y && l1.y <= l2.y)
		return 1;

	return 0;
}*/
bool overlap(point l1, point r1, point l2, point r2){
	if(l1.x >= r2.x || l2.x >= r1.x)
		return false;
	if(l1.y <= r2. y || l2. y <= r1.y)
		return false;
	
	return true;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		point l1, r1, l2, r2;
		scanf("%d %d %d %d", &l1.x, &l1.y, &r1.x, &r1.y);
		scanf("%d %d %d %d", &l2.x, &l2.y, &r2.x, &r2.y);
		
		if(overlap(l1, r1, l2, r2))
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}