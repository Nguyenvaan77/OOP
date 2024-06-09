#include<iostream>
#include<cstdio>

using namespace std;

class shape {
public:
	virtual int getArea() = 0;
protected:
	int height;
	int width;
};

class rectangle:public shape{

public:
	int getArea() {
		return height* width;
	}
};

class tron :public shape {

public:
	int getArea() {
		return (height * width)/2;
	}
};

int main() {
	return 0;
}