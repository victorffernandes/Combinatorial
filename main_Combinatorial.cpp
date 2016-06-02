#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

std::string stringify(double x)
 {
   std::ostringstream o;
   if (!(o << x))
     cout<< "An error occured, sorry.";
   return o.str();
 }

double fat(double num){
	if(num==1)
	return num;
	else
	return num*fat(num-1);
}

double arrangement(double n, double p){
	return fat(n) / (fat(n-p));
}

double combination(double n, double p){
	return fat(n) / (fat(n-p)*fat(p));
}

void question(){
	double num1;
	double num2;
	string answer;
	cout << "\nWhat do you choose? Arrangement or Combination? A or C?";
	cin>>answer;
	if(answer == "A"){
		cout << "Insert n value: ";
		cin >> num1;
		cout << "Insert p value: ";
		cin >> num2;
		cout << stringify(arrangement(num1,num2));
		question();
	}else if (answer == "C"){
		cout << "Insert n value: ";
		cin >> num1;
		cout << "Insert p value: ";
		cin >> num2;
		cout << stringify(combination(num1,num2));
		question();
	}else{
		cout << "\nThat's not a valid answer, sorry.";
		question();
	}
}

int main(int argc, char** argv) {
	question();
	return 0;
}

