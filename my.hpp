#include<string>
using namespace std;

int add(int i=10){
    return i;
}

namespace Second {
    int add(int x, int y){
        return x + y;
    }
}


namespace Second {
    int add(int x, int y, int z){
        return x + y + z;
    }
}

int to100(int& i){
    i = 100;
    return i;
}

enum ECar
{
    SUV,
    Wagon,
    Sedan
};

ECar GetMyCarType(){
    return ECar::SUV;
}

void f1(){
    std::cout << "Thread ok!" << endl;
};


class Dog{
    std::string name;
    int weight;

    public:
        Dog(string);
        ~Dog();
        string getName();
};

Dog::Dog(string dog_name){
    name = dog_name;
}

Dog::~Dog(){

}

string Dog::getName(){
    return name;
}

auto getValue(){
    return 100;
}