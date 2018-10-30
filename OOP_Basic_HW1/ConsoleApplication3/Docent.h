#pragma once
class Docent
{
private:
	int TeacherID;
public:
	Docent();
	void CreateClass();
	void GoThroughAttendance();
	void GiveHomework();
	void GiveGrade();
	~Docent();
};

