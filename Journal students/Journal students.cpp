// Journal students.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <fstream>

#include "Class Student.h"
#include "Functions.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\t\t\t\t Программа записи информации о учениках в файл" << endl;

	string path = "База данных учеников.txt";
	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app | fstream::ate); // ate - Перемещаем файловый указатель в конец файла

	if (!fs.is_open())
	{
		cout << "Ошибка открытия файла, хранящего базу данных учеников!" << endl;
	}
	else
	{
		int countStudents = 0;


		int studentCount = enterStudentsCount();
		Student* studentArray = new Student[studentCount];

		for (int i = 0; i < studentCount; i++)
		{
			studentArray[i].setId(i + 1);

			cout << "Введите возраст " << i + 1 << " ученика" << endl;
			studentArray[i].setAge(enterStudentAge());

			cout << "Введите класс, в котором учится " << i + 1 << " ученик (от 1 до 12):" << endl;
			studentArray[i].setGrade(enterStudentGrade());

			cout << "Введите имя " << i + 1 << " ученика" << endl;
			studentArray[i].setName(enterStudentName()); 

			cout << "Введите любимый урок " << i + 1 << " ученика" << endl;
			studentArray[i].setFavoriteLesson(enterStudentFavoriteLesson());

			fs << studentArray[i].getInfo();
		}
		delete[] studentArray;
	}

	fs.close();

	system("pause");
	return 0;
}
