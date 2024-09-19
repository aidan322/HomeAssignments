#include <iostream>
#include "header.h"
using namespace std;
extern string name;
int main(){
	name = "world";
	helloworld();
	cin >> name;
	helloworld();
}
