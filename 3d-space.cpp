#include <iostream>
#include <cmath>
using namespace std;


class Coord3D {
public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p){
    double length = sqrt(pow(p->x,2)+pow(p->y,2)+pow(p->z,2));
    return length;
}

Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if(length(p1)>length(p2)){
        return p1;
    }else{
        return p2;
    }

}

int main(){
    Coord3D P1 = {10,20,30};    
    Coord3D P2  = {-20,21,-22};

    Coord3D
    
    cout << "Address of P1: " << &P1 << endl;
    cout << "Address of P2: " << &P2 << endl;

    Coord3D* ptr1 = &P1;
    Coord3D* ptr2 = &P2;

    Coord3D* ans = fartherFromOrigin(ptr1, ptr2);
    cout << "ans = " << ans << endl;
}