
//Noah Blum
// Code Classmates Program
// 9/24/24

#include <iostream>
using namespace std;
int main()
{
	int score = 0;
	string color;
	string bee;
	int age;
	cout << "What is Noah's favorite color?" << endl;
	cin >> color;

	if ((color == "Blue") || (color == "blue")) {
		cout << "Good Job!" << endl;
		score++;
	}
	else {
		cout << "Inncorrect! The correct answer was blue." << endl;
	}

	cout << "What is Noah's favorite type of bug?" << endl;
	cin >> bee;

	if ((bee == "Bee")|| (bee == "bee")) {
		cout << "Correct!" << endl;
		score++;
	}
	else {
		cout << "Inncorrect! The correct answer was bee." << endl;
	}
	cout << "How old is Paul Rowe?" << endl;
	cin >> age;

	if (age == 15) {
		cout<< "Correct!" << endl;
		score++;
	}
	else {
		cout << "Inncorrect! The correct answer is 15." << endl;
	}
	cout << "Your score was " << score << " out of 3.";
}



