/*
REQUIREMENTS:
Write a program that asks for five test scores. 
The program should calculate the average test score and display it. 
The number displayed should be formatted in fixed-point notation, 
with one decimal point of precision.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double score;
	double totalOfScores = 0;
	int numberOfScores = 5;

	cout << "Please enter score 1: ";
	cin >> score;
	totalOfScores += score;

	cout << "Please enter score 2: ";
	cin >> score;
	totalOfScores += score;

	cout << "Please enter score 3: ";
	cin >> score;
	totalOfScores += score;

	cout << "Please enter score 4: ";
	cin >> score;
	totalOfScores += score;

	cout << "Please enter score 5: ";
	cin >> score;
	totalOfScores += score;

	cout << fixed << setprecision(1);
	double average = totalOfScores / 5;
	cout << average;
}
