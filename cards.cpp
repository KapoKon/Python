#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;

class MyClass
{
		int number;
		string color;
		string symbol;
		string shape;
	public:
		void setCardShape(string);
		void setCardNumber(int);
		void setCardSymbol(int);
		void setCardColor();
		string getCardColor();
		string getCardShape();
		int getCardNumber();
		string getCardSymbol();
		void random_card(int*,string*);
};
void MyClass::setCardShape(string givenshape)
{
	if(givenshape.compare("spades") ==0)		shape=givenshape;
	else if(givenshape.compare("diamonds")==0)	shape=givenshape;
	else if(givenshape.compare("hearts")==0)	shape=givenshape;
	else if(givenshape.compare("clubs")==0)		shape=givenshape;
	else										shape="wrong shape";
}
void MyClass::setCardNumber(int givennumber)
{
	if(givennumber<1 || givennumber>13)	number=0;
	else								number=givennumber;
}
void MyClass::setCardSymbol(int givennumber)
{
	if(givennumber<1 || givennumber>13)	symbol="\0";
	else								symbol=givennumber;
}
void MyClass::setCardColor()
{
	if(shape.compare("diamonds")==0 || shape.compare("hearts")==0)	color = "red";
	else if(shape.compare("spades")==0 || shape.compare("clubs")==0)color = "black";
}

string MyClass::getCardColor()
{
	if(shape.compare("diamonds")==0 || shape.compare("hearts")==0)		return "red";
	else if(shape.compare("spades")==0 || shape.compare("clubs")==0)	return "black";
	else																return "ERROR";
}
string MyClass::getCardShape()
{
	return shape;
}
int MyClass::getCardNumber()
{
	return number;
}
string MyClass::getCardSymbol()
{
	int i;
	string symbols[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
	for(i=1;i<14;i++)
	{
		if(number==i)	symbol=symbols[i-1];
	}
	return symbol;
}

void MyClass::random_card(int* temp_number, string* temp_shape)
{
	int rand(void);
	int temp_shap = rand()%4;
	*temp_number = rand() % 13 + 1;
	if(temp_shap==0)		*temp_shape="diamonds";
	else if(temp_shap==1)	*temp_shape="hearts";
	else if(temp_shap==2)	*temp_shape="spades";
	else if(temp_shap==3)	*temp_shape="clubs"; 
}

int main(int argc, char *argv[])
{
	MyClass class1;
	int temp_number;
	string temp_shape;
	class1.random_card(&temp_number, &temp_shape);
	class1.setCardShape(temp_shape);
	class1.setCardNumber(temp_number);
	class1.setCardSymbol(temp_number);
	class1.setCardColor();
	cout << class1.getCardColor() << endl;
	cout << class1.getCardShape() << endl;
	cout << class1.getCardNumber() << endl;
	cout << class1.getCardSymbol() << endl;
}

