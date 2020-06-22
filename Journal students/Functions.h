#pragma once

#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>


using namespace std;

int enterStudentsCount();

int enterStudentAge();

int enterStudentGrade();

string enterStudentName();

string enterStudentFavoriteLesson();

bool containSymbols(const std::string& str);

bool containDigits(const std::string& str);
