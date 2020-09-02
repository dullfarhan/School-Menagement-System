#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct date 
{
	int day;
	int month;
	int year;
};
class person
{
protected:
	bool gender;
	string firstName;
	string lastName;
	string address;
public:
	void setFirstName(string nam);
	void setLastName(string nam);
	void setGender(bool nam);
	void setAddress(string nam);
	string getFirstName();
	string getLastName();
	bool getGender();
	string getAddress();

	/////////////////////////////////////////////////////////////////
};
///////////////////////////////////////////////////////////////////////////////////////

class student : public virtual person 
{
protected:
	int RollNo;
	date dateOfBirth;
	string FatherName;
	bool FeeSubmitted;
	string bloodGroup;
	date registrationDate;
	unsigned int ContactNo;
	string FatherProfession;
	unsigned int ParentContact;
	
public:
	student();
	student(const student& obj);

	int getRollNo();
	string getFatherName();
	string getFatherProfession();
	string getBloodGroup();
	unsigned int getContactNo();
	bool getfeeSubmission();
	string getRegistrationDate();
	string getdateOfBirth();

	unsigned int getParentContact();

	void setRollNo(int nam);
	void setFatherName(string nam);
	void setFatherProfession(string nam);
	void setBloodGroup(string nam);
	void setfeeSubmission(bool nam);
	void setParentContact(unsigned int nam);
	void setContactNo(unsigned int nam);
	void setRegistrationDate(int nam1, int nam2, int nam3);
	void setDateOfBirth(int nam1, int nam2, int nam3);
	
	student* getThisPtr();
	friend class admin;

	void viewAssessmentMarks();
	void viewFeeStatus();
	
	void stdInput(int grade, int stNo);
	void stdOutput();
	int totalStudents();
	void viewAllStudents();

};
class course 
{
protected:
	string parentCourse;
	string courseName;
	string courseCode;
	/*teacher* assignedTeacher;*/
public:
	string getParentCourse();
	string getcourseName();
	string getCourseCode();
	void setCourseName(string nam);
	void setCourseCode(string nam);
	/*void setAssignedTeacher(teacher* rhs);*/
	void setParentCourse(string nam);
	course();
	course(const course& rhs);
	void output();
};
class teacher : public virtual person {
protected:
	course* assignedCourse;
	int totalAssignedCourse;
	static int totalNoOFTeacher;
	string email;
	date dateOfBirth;
	string CNIC;
	string password;
	string qualification;
	unsigned int contact;
	date joiningDate;
	double salary;
public:
	teacher();
	teacher(const teacher& obj);
	static int getTotalNoOFTeacher();
	string getEmail();
	string getCNIC();
	course* getAssignedCourse();
	int getTotalAssignedCourse();
	void setAssignedCoursePtr(course* rhs);
	string getQualification();
	unsigned int getContact();
	string getJoiningDate();
	string getdateOfBirth();
	double getSalary();
	void viewAllCources();
	void setEmail(string nam);
	void setCNIC(string nam);
	void setAssignedCourse(course rhs);
	void setAssignedCourse(course* rhs, int i);
	void getTotalAssignedCourse(int nam);
	void setQualification(string nam);
	void setContact(unsigned int nam);
	void setDateOfBirth(int day, int month, int year);
	void setJoiningDate(int day, int month, int year);
	void setSalary(double nam);
	teacher* getThisPtr();
	void input();
	void output();
	/*void EditMarks(classRoom* &obj, int totalNoOfClassRoom);*/
	friend void addTeacher(teacher*& obj);
	//friend void addCourse(generalCourse& obj, teacher*& ptr);
	friend class admin;
};

class classRoom {
private:
	int totalNoOfStudents;
	int noOfAssignedCourese;
	int* marksSheet;
	student* studentNo;
public:
	int getTotalNoOfStudents();
	int  getNoOfStudents();
void setNoOfStudents(int num);
	student* getStudent();
	classRoom();
	friend class admin;
};
class generalCourse {
protected:
	string generalCourseName;
	int totalSubCourse;
	course* subCourseNo;
public:
	generalCourse(int total);
	generalCourse();
	course* getCoursePtr() {
		return subCourseNo;
	}
	int getTotalSubCourse() {
		return totalSubCourse;
	}
	void setGeneralCourseName(string name);
	string getGeneralCourseName();
	friend void addCourse(generalCourse& obj, teacher*& ptr);
	void outputCourse(int i);
	friend class admin;
	friend void assignCourse(teacher*& obj, generalCourse*& ptr);
};
class admin {
public:
	void viewAllTeacher(teacher*& obj);
	void editTeacher(teacher*& obj);
	void assignCourse(teacher*& obj, generalCourse*& ptr);
	void addTeacher(teacher*& obj);
	void generalCourseAddSub(generalCourse*& rhs, teacher*& lhs);

	void viewAllStudents(classRoom*& obj, int totalNoOfClassRoom);
	void addStudents(classRoom*& obj,int totalNoOfClassRoom);
	void editStudents(classRoom*& obj, int totalNoOfClassRoom);
	void viewAllStudentsFeeStatus(classRoom*& obj, int totalNoOfClassRoom);
	void viewStudentsFeeStatus(student*& obj);
};
//////////////////////////////////////////////////