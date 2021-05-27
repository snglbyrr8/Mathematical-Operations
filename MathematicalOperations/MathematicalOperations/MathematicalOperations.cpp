#include <iostream>
#include <Windows.h>
using namespace std;
double pi = 3.14;
void choosing() {

	cout << "1-Finding the area of a square" << endl;
	cout << "2-Finding the perimeter of a square" << endl;
	cout << "3-Finding the area of a circle" << endl;
	cout << "4-Finding the perimeter of a circle" << endl;
	cout << "5-Finding the lateral area of a cube" << endl;
	cout << "6-Finding the volume of a cube" << endl;
	cout << "7-Solvin equation" << endl;
	cout << "8-Slovin quadratic equation" << endl;
	cout << "9-Finding sum of the number's digits " << endl;
	cout << "10-EXIT" << endl;
}
int areaofsquare(int x) {//for square
	return x * x;
}
int perimeterofsquare(int x) {
	return x * 4;
}
double areaofcircle(int x) {//for circle
	return pi * x * x;
}
double perimeterofcircle(int x) {
	return 2 * pi * x;
}
int lateralAreaOfCube(int x) {//for cube
	return 6 * x * x;
}
int volumeOfCube(int x) {
	return x ^ 3;
}
int solvingEquation(int x,int a, int b) {
	return a*x + b;
}
int quadraticEquation(int x, int b, int a, int c) {
	return a * x*x + b * x + c;
}
int sum(int j, int k, int l, int m) {
	return j + k + l + m;
}
int main()
{
	int a;
	int b;
	int c;
	int x;
	int side;
	double radius;
	int choice;
	do
	{
		cout << "Please enter a choice which you want to do" << endl;
		choosing();
		cin >> choice;
		
	} while (choice != 1 && choice != 2 && choice != 3 && choice != 4 &&
		choice != 5 && choice != 6 && choice!=7 && choice!=8 && choice!=9);
	if (choice == 1) {
		cout << "please enter a side veriable" << endl;
		cin >> side;
		cout << "Please wait..." << endl;
		Sleep(1000);
		cout << areaofsquare(side) << endl;
		cout << "DONE.Choose next step"<<endl;
		cin >> choice;

	}
	if (choice == 2)
	{
		cout << "please enter a side veriable" << endl;
		cin >> side;
		cout << "Please wait..." << endl;
		Sleep(1000);
		cout << perimeterofsquare(side) << endl;
		cout << "DONE.Choose next step"<<endl;
		cin >> choice;

	}
	if (choice == 3)
	{
		cout << "please enter a radius veriable" << endl;
		cin >> radius;
		cout << "Please wait..." << endl;
		Sleep(1000);
		cout << areaofcircle(radius) << endl;
		cout << "DONE.Choose next step"<<endl;
		cin >> choice;
	}
	if (choice == 4)
	{
		cout << "please enter a radius veriable" << endl;
		cin >> radius;
		cout << "Please wait..." << endl;
		Sleep(1000);
		cout << perimeterofcircle(radius) << endl;
		cout << "DONE.Choose next step"<<endl;
		cin >> choice;

	}
	if (choice == 5)
	{
		cout << "please enter a side veriable" << endl;
		cin >> side;
		cout << "Please wait..." << endl;
		Sleep(1000);
		cout << lateralAreaOfCube(side) << endl;
		cout << "DONE.Choose next step"<<endl;
		cin >> choice;

	}
	if (choice == 6)
	{
		cout << "please enter a side veriable" << endl;
		cin >> side;
		cout << "Please wait..." << endl;
		Sleep(1000);
		cout << volumeOfCube(side) << endl;
		cout << "DONE.Choose next step"<<endl;
		cin >> choice;

	}
	if (choice==7)
	{
		
		cout << "Please enter veriables"<<endl;
		cin >> x;
		cin >> a;
		cin >> b;
		Sleep(1000);
		cout << solvingEquation(x, a, b)<<endl;
		cout << "DONE.Choose next step" << endl;
		cin >> choice;
	}
	if (choice == 8)
	{
		
		cout << "Please enter veriables"<< endl;
		cin >> x;
		cin >> a;
		cin >> b;
		cin >> c;
		Sleep(1000);
		cout << quadraticEquation(x, a, b,c)<<endl;
		cout << "DONE.Choose next step" << endl;
		cin >> choice;
	}
	if (choice==9)
	{
		cout << "Please enter veriables" << endl;
		cin >> x;
		cin >> a;
		cin >> b;
		cin >> c;
		Sleep(1000);
		cout << sum(x, a, b, c)<<endl;
		cout << "DONE.Choose next step" << endl;
		cin >> choice;

	}

	if (choice == 10)
	{
		return 0;
	}



	

}



