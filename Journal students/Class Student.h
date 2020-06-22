#pragma once

#include <iostream>
#include <string>
using namespace std;

class Student
{
	string name;
	string favoriteLesson;
	int age;
	int grade;
	int id;

public:
	Student();

	Student(int age, int grade, string name, string favoriteLesson, int id);




	void setAge(int age);
	int getAge();

	void setName(string name);
	string getName();

	void setGrade(int grade);
	int getGrade();

	void setFavoriteLesson(string favoriteLesson);
	string getFavoriteLesson();

	void setId(int id);
	int getId();

	void print();

	string getInfo();
};
