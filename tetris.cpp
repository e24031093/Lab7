#include <iostream>
#include "Iblock.h"
using namespace std;
int main(){
	I_Block i;
	i.paint();
	i.rotate().paint();
	i.right().paint();
	i.right().rotate().paint();
	return 0;
	}
