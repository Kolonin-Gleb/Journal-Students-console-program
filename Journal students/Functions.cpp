#include "Functions.h"

int enterStudentsCount()
{
    while (true)
    {
        cout << "¬ведите количество учеников (от 1 до 5):" << endl;
        string studentCount = "Incorrect count";
        cin >> studentCount;

        if (containSymbols(studentCount))
        {
			cout << " оличество учеников не может содержать символы!" << endl;
        }
        else if (atoi(studentCount.c_str()) <= 0 || atoi(studentCount.c_str()) >= 6)
        {
            cout << " оличество учеников может быть равно от 1 до 5!" << endl;
        }
        else
        {
			return atoi(studentCount.c_str());
        }
    }
    cout << endl << endl;
}

int enterStudentAge()
{
    while (true)
    {
        string studentAge = "Incorrect age";
        cin >> studentAge;

		if (containSymbols(studentAge) || atoi(studentAge.c_str()) <= 0)
        {
			cout << "¬озраст ученика не может быть = " << studentAge << endl;
			cout << "¬ведите возраст ученика:" << endl;
        }
        else
        {
			return atoi(studentAge.c_str());
        }
    }
    cout << endl << endl;
}

int enterStudentGrade()
{
    while (true)
    {
        string studentGrade = "Incorrect grade";
        cin >> studentGrade;

		if (containSymbols(studentGrade) || atoi(studentGrade.c_str()) <= 0 || atoi(studentGrade.c_str()) > 12)
        {
			cout << " ласс ученика не может быть = " << studentGrade << endl;
			cout << "¬ведите класс ученика:" << endl;
        }
        else
        {
			return atoi(studentGrade.c_str());
        }
    }
    cout << endl << endl;
}

string enterStudentName()
{
    while (true)
    {
        string studentName;
        cin >> studentName;

        if (containDigits(studentName))
        {
            cout << "»м€ ученика не может быть = " << studentName << endl;
            cout << "¬ведите им€ ученика:" << endl;
        }
        else
        {
            return studentName;
        }
    }
    cout << endl << endl;
}

string enterStudentFavoriteLesson()
{
    while (true)
    {
        string studentFavoriteLesson;
        cin >> studentFavoriteLesson;

		if (containDigits(studentFavoriteLesson))
        {
			cout << "Ћюбимый предмет ученика не может быть = " << studentFavoriteLesson << endl;
			cout << "¬ведите любимый предмет ученика:" << endl;
        }
        else
        {
			return studentFavoriteLesson;
        }
    }
    cout << endl << endl;
}

bool containSymbols(const std::string& str)
{
	return str.find_first_of(" ()[]{}.,/\|:;%^&?@!`~#$*-_=+<>абвгдеЄжзийклмнопрстуфхцчшщъыьэю€abcdefghijklmnopqrstuvwxyzјЅ¬√ƒ≈®∆«»… ЋћЌќѕ–—“”‘’÷„ЎўЏџ№ЁёяABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos ? false : true;
}

bool containDigits(const std::string& str)
{
    return str.find_first_of("1234567890") == std::string::npos ? false : true;
	// «апись выше эквивалентна данному ветвлению
    //if (str.find_first_of("1234567890") == std::string::npos)
	//{
	//	return false;
	//}
	//else
	//{
	//	return true;
	//}
}