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