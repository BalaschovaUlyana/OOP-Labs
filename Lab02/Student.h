#pragma once
#include<string>
#include <iostream>
#include <ctime>
using namespace std;
class Student
{
public:
	Student(const string& secondName, const string& firstName, const string& patronymic)
	{
		Student::firstName = firstName;
		Student::secondName = secondName;
		Student::patronymic = patronymic;
	}

	virtual ~Student() {};

	string getFIO()
	{
		return secondName + " " + firstName + " " + patronymic;
	}

	virtual void setRating(int rating) = 0;
	
	int getRating()
	{
		return rating;
	}
	bool equalStudent(Student* student)
	{
		//���� ��� �������� �������� ����� �� ��� � ��� ����������� ��������
		//� �� ������� ���������� ��������� TRUE;
		if (this->getFIO() == student->getFIO()
			&& this->rating == student->rating)
			return true;
		return false;
	}
	/// ����� ������������� ����������� ����� ������
	friend ostream& operator<<(ostream& stream, Student& obj)
	{
		stream <<obj.getFIO()  << " " << obj.type  << "	||������: " << obj.getRating() << endl;
		return stream;
	}
	string firstName;
	string secondName;
	string patronymic;

	string type;

	int rating;
};
