#include <iostream>
#include <cmath>

using namespace std;
using std::cout;
using std::cin;

double myPower(double firstNumber, int secondNumber){
	int result = 1;
	for(int i=0;i<secondNumber;i++){
		result = result * firstNumber;
	}
	return result;
}

void printDiv(double firstNumber, int secondNumber){
	double myDivis = firstNumber / secondNumber;
	cout << "The division of " << firstNumber << " and " << secondNumber << " is ";
	cout << myDivis;
}

void printMulty(double firstNumber, int secondNumber){
	double myMuly = firstNumber * secondNumber;
	cout << "The multiplication of " << firstNumber << " and " << secondNumber << " is ";
	cout << myMuly;
}

void printSum(double firstNumber, int secondNumber){
	double sum = firstNumber + secondNumber;
	cout << "The sum of " << firstNumber << " and " << secondNumber << " is ";
	cout << sum;
}

void printPower(double firstNumber, int secondNumber){

	double power = myPower(firstNumber, secondNumber);
	cout << "The power of " << firstNumber << " and " << secondNumber << " is ";
	cout << power;
}

void printSub(double firstNumber, int secondNumber){
	double sub = firstNumber - secondNumber;
	cout << "The subtract of " << firstNumber << " and " << secondNumber << " is equal to ";
	cout << sub;
}

void printSQRT(double firstNumber){
	double squarert = sqrt(firstNumber);
	cout << "The square root of " << firstNumber << " is ";
	cout << squarert;

}

int main(){

	double firstNumber;
	int secondNumber;

	cout << "Type an number: ";
	cin >> firstNumber;
	cout << "Type another number: ";
	cin >> secondNumber;
	printPower(firstNumber, secondNumber);
	cout << "\n";
	printDiv(firstNumber, secondNumber);
	cout << "\n";
	printMulty(firstNumber, secondNumber);
	cout << "\n";
	printSum(firstNumber, secondNumber);
	cout << "\n";
	printSub(firstNumber, secondNumber);
	cout << "\n";
	printSQRT(firstNumber);
	cout << "\n";
	printSQRT(secondNumber);


}