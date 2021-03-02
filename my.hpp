#include <string>
using namespace std;

int add(int i = 10) { return i; }

namespace Second {
int add(int x, int y) { return x + y; }
}  // namespace Second

namespace Second {
int add(int x, int y, int z) { return x + y + z; }
}  // namespace Second

int to100(int &i) {
  i = 100;
  return i;
}

enum ECar { SUV, Wagon, Sedan };

ECar GetMyCarType() { return ECar::SUV; }

void f1() { std::cout << "Thread ok!" << endl; };

class Dog {
  std::string name;
  int weight;

 public:
  Dog(string);
  ~Dog();
  string getName();
};

Dog::Dog(string dog_name) { name = dog_name; }

Dog::~Dog() {}

string Dog::getName() { return name; }

auto getValue() { return 100; }

class Cat {
 public:
  static int age;
  static void run() { std::cout << Cat::age; }
};

int Cat::age = 122;

template <typename T>
T myMax(T x, T y) {
  return (x > y) ? x : y;
}

template <typename T>
T mySum(T x, T y) {
  return x + y;
}



class Foo{
	public:
	Foo(int x, double y);
};


Foo::Foo(int x, double y){

}

void Func(Foo f){
	
}


class Fish {
	public:
		Fish(string name);
	virtual void swim();
	private:
		string name;
};

Fish::Fish(string name){
	name = name;
	swim();
}

void Fish::swim(){
	cout << "swim" << endl;
}



class AFish:public Fish{
	public:
		AFish(string name):Fish(name){};
		void swim();
};

void AFish::swim(){
	cout << "AFish::swim" << endl;
}


class Mon{
	public:
		Mon(int i);
		Mon(const Mon &) = delete;
		Mon& operator=(const Mon&) = delete;
	private:
		int _i;
};


Mon::Mon(int i){
	_i = i;
}

