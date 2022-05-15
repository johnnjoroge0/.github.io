#include<iostream>
using namespace std;
class myclass{
public:
    int x;

private:
    int y;


};
int main(){
    myclass myobj;
    myobj.x=50;
    myobj.y=100;
cout << myobj.x<< "\n";
cout << myobj.y<< "\n";
return 0;
}
