#include <iostream>
using namespace std;
const float PI=3.141593;
const float fp=35;
const float cp=20;

class Circle{
	public:
		Circle(float r);
		float cir();
		float area();
	private:
		float radius;
};

Circle::Circle(float r){
	radius=r;
}
float Circle::cir(){
	return 2*PI*radius;
}
float Circle::area(){
	return PI*radius*radius;
}
int main(){
	float radius;
	cout<<"Enter the radius of the pool: ";
	cin>>radius;
	Circle pool(radius);
	Circle poolRim(radius+3);
	float fen=poolRim.cir()*fp;
	cout<<"Fencing cost is "<<fen<<endl;
	float con=(poolRim.area()-pool.area())*cp;
	cout<<"Concreat cost is "<<con<<endl;
	return 0;
}
