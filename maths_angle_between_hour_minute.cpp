#include <bits/stdc++.h>
using namespace std;

#define EPS 1e-5
int main(){
	int t; scanf("%d", &t);
	while(t--){
		double h,m;
		scanf("%lf %lf", &h, &m);
		double ha, ma; //h angle, m angle;
		double one_hour = 360.00/12.00;
		double one_minute = 360.00/60.00;

		double hour_minute = 360.00/(12.00*60.00); 
		
		ha = (double)h * one_hour;
		ha += ((m >= 60) ? m-60 : m)*hour_minute;

		ma = (double)m * one_minute;

		double a1, a2;
		if(ha - ma > EPS){
			a1 = ha - ma;
			a2 = 360.00 - (ha-ma);
			a1 = floor(a1);
			a2 = floor(a2);
			cout<< min(a1, a2) <<endl;
		}
		else{
			a1 = ma-ha;
			a2 = 360.00 - a1;
			a1 = floor(a1);
			a2 = floor(a2);
			cout<< min(a1, a2) <<endl;	
		}
		
	}
	return 0;
}