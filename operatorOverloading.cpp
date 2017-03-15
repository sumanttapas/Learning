#include <iostream>

class Base{
	int i;

public:
	Base(){
		i = 10;
	}
	int getiMarks() const{
		std::cout<< "in getiMarks() base " << i <<std::endl;
		return i;
	}
};

class Marks : public Base{
	int i,e;
public:
	Marks(){
		i = 500;
	};
	Marks(int a, int b){
		if(a == 40){
			std::cout<< "int Marks Constructor" <<std::endl;
		}
		i = a;
		e = b;
	}
	//copy constructor
	Marks(const Marks &a){
		i = a.getiMarks();
		e = a.geteMarks();
	}
	
	int getiMarks() const{
		std::cout<< "in getiMarks() derived " << i <<std::endl;
		return i;
	}
	int geteMarks() const{
		return e;
	}

	void setiMarks(int a){
		i = a;
	}
	void seteMarks(int a){
		e = a;
	}
	//Operator overloading
	bool operator < (Marks a){
		if(i<a.i && e<a.e)
			return true;
		return false;
	}
	Marks operator + (Marks b){
		Marks temp;
		temp.setiMarks(i+b.getiMarks());
		temp.seteMarks(e+b.geteMarks());
		return temp;
	}
};
int main(){
	Marks a(10,20);
	Marks b(30,40);
	if(a < b){
		std::cout << "HaHa" << std::endl;
	}
	std::cout << (a+b).getiMarks()<< std::endl;
	Marks c(a);
	std::cout << c.getiMarks()<< std::endl;
	Base * d = new Marks();
	std::cout << "Value in d: "<< d->getiMarks() << std::endl;
	return 0;
}
