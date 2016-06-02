#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double fat(double num){
	if(num==1)
	return num;
	else
	return num*fat(num-1);
}

int main(int argc, char** argv) {
	cout << fat(5);
	return 0;
}

