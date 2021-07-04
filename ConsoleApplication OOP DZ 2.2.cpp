#include <iostream>

using namespace std;


class Fruit
{
private:
	 const string m_name;
	 const string m_color;

	public:
	Fruit( string name,string color) : m_name(name), m_color(color)
	{
	}
	string getName()
	{
		return m_name;
	}
	string getColor()
	{
		return m_color;
	}

};

class Apple :public Fruit
{
protected:
	Apple( string name,string color):Fruit(name,color)
	{
	
	}
public:
	Apple(string color = "red") :Fruit("apple", color)
	{

	}
};

class Banana : public Fruit
{
protected:
	Banana(string name, string color) :Fruit(name, color)
	{
	}

	public:
		Banana(string color="yellow"): Fruit("banana",color)

	{
	}
};

class GrannySmith:public Apple
{
public:
	GrannySmith(string color= "green") :Apple("Granny Smith aplle", "green")
	{

	}
};

int main()
{
	Apple a("red");
	Banana b("yellow");
	GrannySmith c("green");

	cout << " My " << a.getName() << " is " <<  a.getColor() << endl;
	cout << " My " << b.getName() << " is " << b.getColor() << endl;
	cout << " My " << c.getName() << " is " << c.getColor() << endl;
	
	return 0;
}
