#include <bits/stdc++.h>
using namespace std;
#define EPS 1e-5
typedef double d;
struct point{
	d x, y;
};

d sqr(d x){
	return (d)x*x;
}

d dist(point p1, point p2){
	return (d)(sqr(p1.x-p2.x) + sqr(p1.y-p2.y));
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		point p1, p2, p3, p4;
		scanf("%lf %lf", &p1.x, &p1.y);
		scanf("%lf %lf", &p2.x, &p2.y);
		scanf("%lf %lf", &p3.x, &p3.y);
		scanf("%lf %lf", &p4.x, &p4.y);

		d d1, d2, d3;
		d1 = dist(p4, p1);
		d2 = dist(p4, p2);
		d3 = dist(p4, p3);

		bool ok = true;
		if(d1==d2 && 2*d1==d3){
			d d4 = dist(p3, p1);
			if(d4 == dist(p3, p2) && d4==d1)
		}
	}
	return 0;
}