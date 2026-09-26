// Reads a friend's name, age, job status, hobby, and favorite food, then prints a formatted biodata card.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, jobStatus, hobby, favFood;
    int age;

    cout << "***** My Best Friend Biodata *****" << endl;

    cout << "What is his/her name? ";
    getline(cin, name);

    cout << "How old is he/she? ";
    cin >> age;
    cin.ignore(); 

    cout << "Is he/she working or studying? ";
    getline(cin, jobStatus);

    cout << "What is his/her hobby? ";
    getline(cin, hobby);

    cout << "What is his/her favorite food? ";
    getline(cin, favFood);

    cout << "\n***** My BFF Biodata *****" << endl;
    cout << "Name          : " << name << endl;
    cout << "Age           : " << age << endl;
    cout << "Job status    : " << jobStatus << endl;
    cout << "Hobby         : " << hobby << endl;
    cout << "Favorite food  : " << favFood << endl;
    cout << "***** do not forget me! *****" << endl;

    return 0;
}