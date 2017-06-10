#include <iostream>
#include "Lblock.h"

using namespace std;
int main()
{
cout<<"First tetris : L"<<endl;
L_Block l;
l.paint();
l.rotate();
l.paint();
l.right();
l.paint();
l.right();
l.rotate();
l.paint();
l.rotate();
l.paint();
cout<<endl<<"Second tetris : T"<<endl;
T_Block t;
t.paint();
t.rotate();
t.paint();
t.right();
t.paint();
t.right();
t.rotate();
t.paint();
t.rotate();
t.paint();

return 0;
}


