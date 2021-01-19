#include<string>

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