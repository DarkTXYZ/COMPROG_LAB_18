#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A , Rect B){
	double x = min(A.x + A.w, B.x + B.w) - max(A.x , B.x);
	double y = min(A.y, B.y) - max(A.y - A.h , B.y - B.h);
	if(!((x > 0 && y > 0) || (x < 0 && y < 0)))
		return 0;
	else
		return x*y;
}
