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


class Add1{
	public:
		Add1(int i, int j);
		int operator()();
	private:
		int _i;
		int _j;
};

Add1::Add1(int i, int j){
	_i = i;
	_j = j;
}

int Add1::operator()(){
	return _i + _j;
}


template <typename T>
inline T const & max12(T const &a, T const &b)
{
	return a < b? b : a;
}


template<typename T>

inline T const &max12(T const &a, T const &b, T const &c)
{
	return max12(max12(a,b),c);
}



template <typename T>
class MyPoint{
	public:
		MyPoint(T *a):a_(a){};
		void say(){std::cout << a_ << std::endl;}
	private:
		T *a_=nullptr;
};

template<typename T, int N>
void hello123(T a){
	for(int i=0; i < N; i++){
		std::cout << a << std::endl;
	}
}


template <typename T>
class Base {
public:void exit();
};
template <typename T>
class Derived : Base<T> {
public:void foo() {
this->exit();        //调用外部
}};


class People{
public:
	People(){std::cout << "hello People!";};
	~People(){std::cout << "Goodbye People!";};
};

double *find_ar(double *ar, int n, const double &val) {
  for (int i = 0; i < n; i++)
    if (ar[i] == val) return &ar[i];
  return 0;  // or, in C++11, return nullptr;
}

class PrintInt{
	public:
		void operator()(int elem) const {
			cout << elem << " ";
		}
};


void writeCharsetToFile(const string&filename){
	ofstream file(filename);
	if (!file){
		cerr << "can not open output file:" << filename << endl;
		exit(EXIT_FAILURE);
	}
	for (int i=32; i < 256; i++){
		file << "value: " << static_cast<char>(i) << endl;
	}
}

class LessThan
{          
public:
	LessThan(int val): _val( val ) { }              
	int  comp_val() const { return _val;}  // 基值的读取              
	void comp_val( int nval ){ _val = nval;}   // 基值的写入              
	bool operator()( int _value ) const {
		return _val > 101;
	};          
	private:
	int _val;
};

class EquipmentPiece {
	public:
		EquipmentPiece(int IDNumber){};
};


class TimeKeeper {
public:    
TimeKeeper(){ std::cout << "TimeKeeper init";};    
virtual ~TimeKeeper(){ std::cout << "TimerKeeper ~";};
} ;


class AtomicClock:public TimeKeeper{
	public:
		~AtomicClock(){ std::cout << "~atomic clock!";}
};