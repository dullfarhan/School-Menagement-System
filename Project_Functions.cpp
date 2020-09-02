#pragma once 
#include"Project_Header.h"
#include<iostream>
//************PERSON****************************
void person::setFirstName(string nam) {
	firstName = nam;
}
void person::setLastName(string nam) {
	lastName = nam;
}
void person::setGender(bool nam) {
	// 1 for male
	//0 for female
	gender = nam;
}
void person::setAddress(string nam) {
	address = nam;
}
string person::getFirstName() {
	return firstName;
}
string person::getLastName() {
	return lastName;
}
bool person::getGender() {
	// 1 for male
	//0 for female
	return  gender;
}
string person::getAddress() {
	return address;
}


//*******************PERSON END////////////////


//*******************STUDENT******************

student::student()
{
	firstName = "";
	lastName = "";
	gender = 0;
	address = "";
	FatherName = "";
	FatherProfession = "";
	dateOfBirth = { 0,0,0 };
	bloodGroup = "";
	FeeSubmitted = 0;
	ContactNo = 0;
	registrationDate = { 0,0,0 };
	ParentContact = 0;
	RollNo = 0;
}
student::student(const student& obj)
{
	firstName = obj.firstName;
	lastName = obj.lastName;
	gender = obj.gender;
	address = obj.address;
	FatherName = obj.FatherName;
	FatherProfession = obj.FatherProfession;
	dateOfBirth.day = obj.dateOfBirth.day;
	dateOfBirth.month = obj.dateOfBirth.month;
	dateOfBirth.year = obj.dateOfBirth.year;
	bloodGroup = obj.bloodGroup;
	FeeSubmitted = obj.FeeSubmitted;
	ContactNo = obj.ContactNo;
	registrationDate.day = obj.registrationDate.day;
	registrationDate.month = obj.registrationDate.month;
	registrationDate.year = obj.registrationDate.year;
	ParentContact = obj.ParentContact;
	RollNo = obj.RollNo;
}
int student::getRollNo() {
	return RollNo;
}
string student::getFatherName() {
	return FatherName;
}
string student::getFatherProfession() {
	return FatherProfession;
}
string student::getBloodGroup() {
	return bloodGroup;
}
unsigned int student::getContactNo()
{
	return ContactNo;
}

bool student::getfeeSubmission() {
	// 1 for submitted
	// 0 for still pending
	return FeeSubmitted;
}
string student::getRegistrationDate()
{
	int temp;
	string str;
	temp = registrationDate.day / 10;
	str = temp + 48;
	temp = registrationDate.day % 10;
	str = str + static_cast<char>(temp + 48) + "-";
	temp = registrationDate.month / 10;
	str = str + static_cast<char>(temp + 48);
	temp = registrationDate.month % 10;
	str = str + static_cast<char>(temp + 48) + "-";
	temp = registrationDate.month / 1000;
	str = str + static_cast<char>(temp + 48);
	temp = (registrationDate.month / 100) % 10;
	str = str + static_cast<char>(temp + 48);
	temp = (registrationDate.month / 10) % 100;
	str = str + static_cast<char>(temp + 48);
	temp = registrationDate.month % 1000;
	str = str + static_cast<char>(temp + 48);
	return str;
}
string student::getdateOfBirth()
{
	int temp;
	string str;
	temp = dateOfBirth.day / 10;
	str = temp + 48;
	temp = dateOfBirth.day % 10;
	str = str + static_cast<char>(temp + 48) + "-";
	temp = dateOfBirth.month / 10;
	str = str + static_cast<char>(temp + 48);
	temp = dateOfBirth.month % 10;
	str = str + static_cast<char>(temp + 48) + "-";
	temp = dateOfBirth.month / 1000;
	str = str + static_cast<char>(temp + 48);
	temp = (dateOfBirth.month / 100) % 10;
	str = str + static_cast<char>(temp + 48);
	temp = (dateOfBirth.month / 10) % 100;
	str = str + static_cast<char>(temp + 48);
	temp = dateOfBirth.month % 1000;
	str = str + static_cast<char>(temp + 48);
	return str;
}
unsigned int student::getParentContact()
{
	return ParentContact;
}
void student::setRollNo(int nam) {
	RollNo = nam;
}
void student::setFatherName(string nam)
{
	FatherName = nam;
}
void student::setFatherProfession(string nam)
{
	FatherProfession = nam;
}
void student::setBloodGroup(string nam)
{
	bloodGroup = nam;
}
void student::setfeeSubmission(bool nam)
{
	// 1 for submitted
	// 0 for still pending
	FeeSubmitted = nam;
}
void student::setParentContact(unsigned int nam)
{
	ParentContact = nam;
}
void student::setContactNo(unsigned int nam)
{
	ContactNo = nam;
}
void student::setRegistrationDate(int nam1, int nam2, int nam3)
{

	registrationDate.day = nam1;
	registrationDate.month = nam2;
	registrationDate.year = nam3;
}
void student::setDateOfBirth(int nam1, int nam2, int nam3)
{

	dateOfBirth.day = nam1;
	dateOfBirth.month = nam2;
	dateOfBirth.year = nam3;
}
void student::viewFeeStatus()
{
	if (FeeSubmitted == true)
		cout << "Fee Paid" << endl;
	else
		cout << "Fee Pending" << endl;
}

void student::viewAssessmentMarks()
{

}
student* student::getThisPtr()
{
	return this;
}

void viewAllStudents()
{
	///////////////////////////////////////////////////// Dynamic Array ka kaam he yahaa
	/*cout << left << setw(20) << "Course";
	cout << left << setw(20) << "Course_CODE";
	cout << left << setw(20) << "Parent COURSE" << endl;
	for (int i = 0; i < teacher::getTotalNoOFTeacher(); i++) 
	{
		cout << left << setw(20) << assignedCourse[i].getcourseName();
		cout << left << setw(20) << assignedCourse[i].getCourseCode();
		cout << left << setw(20) << assignedCourse[i].getParentCourse() << endl;
	}*/
}
void student::stdInput(int  grade,int StNo)
{
	int numTemp, numTemp2, numTemp3;
	string strTemp;
	cout << "Enter First Name: ";
	cin >> strTemp;
	firstName = strTemp;
	cout << "Enter Last Name: ";
	cin >> strTemp;
	lastName = strTemp;
	cout << "Select the Gender (0 or 1) \n";
	cout << "0) Female\n";
	cout << "1) Male: ";
	cin >> numTemp;
	gender = numTemp;
	cout << "Enter Blood Group: ";
	cin >> strTemp;
	bloodGroup = strTemp;
	cout << "Enter Contact No. :";
	cin >> numTemp;
	ContactNo = numTemp;
	cout << "Enter Parent Contact No. :";
	cin >> numTemp;
	ParentContact = numTemp;
	cout << "Enter Day of Birth : ";
	cin >> numTemp;
	cout << "Enter  Month of Birth: ";
	cin >> numTemp2;
	cout << "Enter Year of Birth : ";
	cin >> numTemp3;
	setDateOfBirth(numTemp, numTemp2, numTemp3);
	cout << "Enter Registration Day : ";
	cin >> numTemp;
	cout << "Enter Registration Month : ";
	cin >> numTemp2;
	cout << "Enter Registration Year : ";
	cin >> numTemp3;
	setRegistrationDate(numTemp, numTemp2, numTemp3);
	cout << "Assign Roll No. to the Student : ";
	numTemp = ((grade+1) * 1000) + (StNo+1);
	RollNo = numTemp;
	cout << "Select the Fee Condition (0 or 1) \n";
	cout << "0) un Paid\n";
	cout << "1) Paid: ";
	cin >> numTemp;
	FeeSubmitted = numTemp;
}
void student::stdOutput() {
	cout << "Name: " << firstName << " " << lastName << endl;
	cout << "Roll No: " << RollNo << endl;
	cout << "Gender : ";
	if (gender == 0)
		cout << "Female";
	else 
		cout << "Male";
	cout << "Fee Detail : ";
	if (FeeSubmitted == 0)
		cout << "Fee unPaid";
	else
		cout << "Fee Paid";
	cout << endl;
	cout << "Contact No. : " << ContactNo << endl;
	cout << "Parent Contact No. : " << ParentContact << endl;
	cout << "Blood Group: " << bloodGroup << endl;
	cout << "Date of Birth: " << getdateOfBirth() << endl;
	cout << "Date of Registration : " << getRegistrationDate() << endl;
	
}








//*******************STUDENT END////////////////


//************TEACHER****************************
teacher::teacher() {
	firstName = "";
	lastName = "";
	gender = 0;
	address = "";
	email = "";
	dateOfBirth = { 0,0,0 };
	CNIC = "";
	password = "";
	qualification = "";
	contact = 0;
	joiningDate = { 0,0,0 };
	salary = 0;
	totalAssignedCourse = 0;
}
teacher::teacher(const teacher& obj) {
	firstName = obj.firstName;
	lastName = obj.lastName;
	gender = obj.gender;
	address = obj.address;
	totalNoOFTeacher = obj.totalNoOFTeacher;
	email = obj.email;
	dateOfBirth.day = obj.dateOfBirth.day;
	dateOfBirth.month = obj.dateOfBirth.month;
	dateOfBirth.year = obj.dateOfBirth.year;
	CNIC = CNIC;
	password = obj.password;
	qualification = obj.qualification;
	contact = obj.contact;
	joiningDate = obj.joiningDate;
	salary = obj.salary;
}
course* teacher::getAssignedCourse() {
	return assignedCourse;
}
int teacher::getTotalAssignedCourse() {
	return totalAssignedCourse;


}
int teacher::getTotalNoOFTeacher() {
	return totalNoOFTeacher;
}
string teacher::getEmail() {
	return email;
}
string teacher::getCNIC() {
	return CNIC;
}

string teacher::getQualification() {
	return qualification;
}
unsigned int teacher::getContact() {
	return contact;
}
string teacher::getJoiningDate() {
	int temp;
	string str;
	temp = joiningDate.day / 10;
	str = temp + 48;
	temp = joiningDate.day % 10;
	str = str + static_cast<char>(temp + 48) + "-";
	temp = joiningDate.month / 10;
	str = str + static_cast<char>(temp + 48);
	temp = joiningDate.month % 10;
	str = str + static_cast<char>(temp + 48) + "-";
	temp = joiningDate.month / 1000;
	str = str + static_cast<char>(temp + 48);
	temp = (joiningDate.month / 100) % 10;
	str = str + static_cast<char>(temp + 48);
	temp = (joiningDate.month / 10) % 100;
	str = str + static_cast<char>(temp + 48);
	temp = joiningDate.month % 1000;
	str = str + static_cast<char>(temp + 48);
	return str;
}
string teacher::getdateOfBirth() {
	int temp;
	string str;
	temp = dateOfBirth.day / 10;
	str = temp + 48;
	temp = dateOfBirth.day % 10;
	str = str + static_cast<char>(temp + 48) + "-";
	temp = dateOfBirth.month / 10;
	str = str + static_cast<char>(temp + 48);
	temp = dateOfBirth.month % 10;
	str = str + static_cast<char>(temp + 48) + "-";
	temp = dateOfBirth.month / 1000;
	str = str + static_cast<char>(temp + 48);
	temp = (dateOfBirth.month / 100) % 10;
	str = str + static_cast<char>(temp + 48);
	temp = (dateOfBirth.month / 10) % 100;
	str = str + static_cast<char>(temp + 48);
	temp = dateOfBirth.month % 1000;
	str = str + static_cast<char>(temp + 48);
	return str;

}
double teacher::getSalary() {
	return salary;
}

void teacher::setEmail(string nam) {
	email = nam;
}
void teacher::setCNIC(string nam) {
	CNIC = nam;
}

void teacher::setQualification(string nam) {
	qualification = nam;
}
void teacher::setContact(unsigned int nam) {
	contact = nam;
}
void teacher::setDateOfBirth(int day, int month, int year) {
	dateOfBirth.day = day;
	dateOfBirth.month = month;
	dateOfBirth.year = year;


}
void teacher::setJoiningDate(int day, int month, int year) {
	joiningDate.day = day;
	joiningDate.month = month;
	joiningDate.year = year;


}
void teacher::setSalary(double nam) {
	salary = nam;
}
teacher* teacher::getThisPtr() {
	return this;
}
void teacher::input() {
	int temp, temp1, temp2;
	string stemp, confirm;
	cout << "Enter First Name : ";
	cin >> stemp;
	firstName = stemp;
	cout << "Enter Last Name : ";
	cin >> stemp;
	lastName = stemp;
	cout << "Select the gender (1 or 2) \n";
	cout << "1). female\n";
	cout << "2). Male : ";
	cin >> temp;
	gender = temp - 1;
	cout << "Enter Contact No. :";
	cin >> temp;
	contact = temp;
	cout << "Enter Day of Birth : ";
	cin >> temp;
	cout << "Enter  Month of Birth: ";
	cin >> temp1;
	cout << "Enter Year of Birth: ";
	cin >> temp2;
	setDateOfBirth(temp, temp1, temp2);
	cout << "Enter CNIC NO. : ";
	cin >> stemp;
	CNIC = stemp;
	cout << "Enter Qulafication : ";
	cin >> stemp;
	qualification = stemp;
	cout << "Enter Salary : ";
	cin >> temp;
	salary = temp;
	cout << "Enter Email Adress : ";
	cin >> stemp;
	email = stemp;
	cin.ignore();
	cout << "Enter Password";
	getline(cin, stemp);

	cout << "Confirm Password : ";
	getline(cin, confirm);

	while (stemp != confirm) {
		cout << "Password doest match ReEnter Password : ";
		getline(cin, stemp);

		cout << "Confirm Password : ";
		getline(cin, confirm);

	}
	password = confirm;


	cout << "Enter Joining Day : ";
	cin >> temp;
	cout << "Enter Joining Month : ";
	cin >> temp1;
	cout << "Enter Joining Year : ";
	cin >> temp2;
	setJoiningDate(temp, temp1, temp2);
	cout << "Enter Address : ";
	cin.ignore();
	getline(cin, stemp);
	address = stemp;
	system("cls");
}



void teacher::output() {
	cout << "Name: " << firstName << " " << lastName << endl;
	cout << "Gender : ";
	if (gender == 0) {
		cout << "Female";
	}
	else {
		cout << "Male";
	}
	cout << endl;
	cout << "Degree : " << qualification << endl;
	cout << "Contact No. : " << contact << endl;
	cout << "Email ID : " << email << endl;

}
/////STATIC??????d1
int teacher::totalNoOFTeacher = 0;


teacher* getTeacherPtr(teacher* ptr) {
	return ptr;
}
void teacher::setAssignedCourse(course rhs) {
	assignedCourse = &rhs;
}
void teacher::setAssignedCoursePtr(course* rhs) {
	*assignedCourse = *rhs;
}
void teacher::setAssignedCourse(course* rhs, int i) {
	assignedCourse[i] = rhs[i];
}
void teacher::getTotalAssignedCourse(int nam) {
	totalAssignedCourse = nam;
}

void teacher::viewAllCources() {

	cout << left << setw(20) << "Course";
	cout << left << setw(20) << "Course_CODE";
	cout << left << setw(20) << "Parent COURSE" << endl;


	for (int i = 0; i < teacher::getTotalNoOFTeacher(); i++) {

		cout << left << setw(20) << assignedCourse[i].getcourseName();
		cout << left << setw(20) << assignedCourse[i].getCourseCode();
		cout << left << setw(20) << assignedCourse[i].getParentCourse() << endl;


	}
}


//*******************TEACHER-END**********************


//*******************COURSE**********************

string course::getParentCourse() {
	return parentCourse;
}
string course::getcourseName() {
	return courseName;
}
string course::getCourseCode() {
	return courseCode;
}
void course::setCourseName(string nam) {
	courseName = nam;
}
void course::setCourseCode(string nam) {
	courseCode = nam;
}
/*void course::setAssignedTeacher(teacher* rhs) {
	assignedTeacher = rhs;
}*/
void course::setParentCourse(string nam) {
	parentCourse = nam;
}

course::course() {
	parentCourse = "";
	courseName = "";
	courseCode = "";

}
course::course(const course& rhs) {
	parentCourse = rhs.parentCourse;
	courseName = rhs.courseName;
	courseCode = rhs.courseCode;

}
void course::output() {
	cout << "Parent Course : " << parentCourse << endl;
	cout << "Course Name : " << courseName << endl;;
	cout << "Course Code : " << courseCode << endl;;

}

//*******************COURSE-END**********************

//*******************CLASS_ROOM**********************
int classRoom::getNoOfStudents() {
	return totalNoOfStudents;
}
student* classRoom::getStudent() {
	return studentNo;
}

classRoom::classRoom() {

	totalNoOfStudents = 0;
	studentNo = new student[0];
	marksSheet = new int [0];
	
}
int classRoom::getTotalNoOfStudents() {
	return totalNoOfStudents;
}
void  classRoom::setNoOfStudents(int num) {
	totalNoOfStudents = num;
}
//*******************CLASS_ROOM-END**********************



//*******************GERNAL-COURSE**********************

generalCourse::generalCourse() {
	totalSubCourse = 0;
	subCourseNo = new course[totalSubCourse];

}
void generalCourse::setGeneralCourseName(string name) {
	generalCourseName = name;
}
string generalCourse::getGeneralCourseName() {
	return generalCourseName;
}

void generalCourse::outputCourse(int i) {
	cout << "Parent Course Name : ";
	cout << generalCourseName << endl;

}
//*******************GERNAL-COURSE-END**********************



//*******************ADMIN**********************
void admin::viewAllTeacher(teacher*& obj) {
	string fullname;
	cout << left << setw(30) << "Name";
	cout << left << setw(20) << "Gender";
	cout << left << setw(30) << "Degree";
	cout << left << setw(30) << "Contact NO.";
	cout << left << setw(30) << "Email-ID" << endl;

	for (int i = 0; i < teacher::getTotalNoOFTeacher(); i++) {
		fullname = obj[i].getFirstName() + " " + obj[i].getLastName();
		cout << left << setw(30) << fullname;
		cout << left << setw(20) << obj[i].getGender();
		cout << left << setw(30) << obj[i].getQualification();
		cout << left << setw(30) << obj[i].getContact();
		cout << left << setw(30) << obj[i].getEmail() << endl;


	}
}
void admin::editTeacher(teacher*& obj) {
	if (teacher::totalNoOFTeacher != 0) {
		int opt;
		double ntemp;
		string stemp;
		cout << "Select Teacher of which data you want to Edit : " << endl;
		for (int i = 0; i < teacher::getTotalNoOFTeacher(); i++) {
			cout << i + 1 << "). " << obj[i].getFirstName() << " " << obj[i].getLastName() << endl;
		}
		cin >> opt;
		opt = opt - 1;
		cout << "Enter NEW Address  : ";
		cin >> stemp;
		obj[opt].setAddress(stemp);
		cout << "Enter NEW Contact No. : ";
		cin >> ntemp;
		obj[opt].setContact(ntemp);
		cout << "Enter NEW Qualification : ";
		cin >> stemp;
		obj[opt].setQualification(stemp);
		cout << "Enter New Salary: ";
		cin >> ntemp;
		obj[opt].setSalary(ntemp);
	}
	else {
		cout << "There is NO Teacher Added yet.\n";
	}



}
void admin::assignCourse(teacher*& obj, generalCourse*& ptr) {
	if (teacher::totalNoOFTeacher != 0) {

		int teacher, general, sub;
		cout << "Select Teacher of which  you want to Assign Course : " << endl;
		for (int i = 0; i < teacher::getTotalNoOFTeacher(); i++) {
			cout << i + 1 << "). " << obj[i].getFirstName() << " " << obj[i].getLastName() << endl;
		}
		cin >> teacher;
		teacher = teacher - 1;
		cout << "Select Gerneal Course : " << endl;
		for (int i = 0; i < 6; i++) {
			cout << i + 1 << "). " << ptr[i].getGeneralCourseName() << endl;
		}
		cin >> general;
		general = general - 1;
		if (ptr[general].totalSubCourse != 0) {
			for (int i = 0; i < ptr[i].getTotalSubCourse(); i++) {
				cout << i + 1 << "). " << ptr[general].subCourseNo[i].getcourseName() << endl;
			}
			cout << "Select the Sub-course : ";
			cin >> sub;
			sub = sub - 1;

			/*ptr[general].subCourseNo[sub].setAssignedTeacher(obj[teacher].getThisPtr());*/
			int num = obj[teacher].getTotalAssignedCourse() + 1;
			course* temp = new course[obj[teacher].getTotalAssignedCourse() + 1];
			if (obj[teacher].getTotalAssignedCourse() != 0) {
				for (int i = 0; i < obj[teacher].getTotalAssignedCourse(); i++) {
					temp[i] = obj[teacher].getAssignedCourse()[i];
				}
			}
			temp[obj[teacher].getTotalAssignedCourse()] = ptr[general].subCourseNo[sub];
			obj[teacher].getTotalAssignedCourse(num);
			if (obj[teacher].getTotalAssignedCourse() != 0) {
				for (int i = 0; i < obj[teacher].getTotalAssignedCourse(); i++) {
					obj[teacher].setAssignedCourse(temp[i]);
				}
			}
		}

		else {
			cout << "There is NO Course Added yet.\n";
		}
	}
	else {
		cout << "There is NO Teacher Added yet.\n";

	}
}

void admin::generalCourseAddSub(generalCourse*& rhs, teacher*& lhs) {
	int option;
	for (int i = 0; i < 6; i++) {
		cout << i + 1 << "). " << rhs[i].getGeneralCourseName() << endl;
	}
	cout << "Select Parent Course : ";
	cin >> option;
	addCourse(rhs[option - 1], lhs);
}

void admin::addTeacher(teacher*& obj) {
	teacher* temp = new teacher[teacher::totalNoOFTeacher + 1];
	if (teacher::totalNoOFTeacher != 0) {
		for (int i = 0; i < teacher::totalNoOFTeacher; i++) {
			temp[i] = obj[i];
		}
	}
	obj = new teacher[teacher::totalNoOFTeacher + 1];
	for (int i = 0; i < teacher::totalNoOFTeacher; i++) {
		obj[i] = temp[i];
	}
	obj[teacher::totalNoOFTeacher].input();
	teacher::totalNoOFTeacher++;

}

void admin::viewAllStudents(classRoom*& obj, int totalNoOfClassRoom)
{
	int opt;

	for (int i = 0; i < totalNoOfClassRoom; i++) {
		cout << "Class " << i + 1 << " : \n";
	}
	cout << "Select Class to Which you want to Add Student : ";
	cin >> opt;
	opt = opt - 1;
	if (obj[opt].getTotalNoOfStudents() != 0)
	{
		for (int i = 0; i < obj[opt].getTotalNoOfStudents(); i++) {
			obj[opt].studentNo[i].stdOutput();
		}

	}
	else
	{
		cout << "No Student added yet" << endl;
	}
}
void admin::addStudents(classRoom*& obj,int totalNoOfClassRoom)
{
	int opt;
	
	for (int i = 0; i < totalNoOfClassRoom; i++) {
		cout << "Class " << i + 1 << " : \n";
	}
	cout << "Select Class to Which you want to Add Student : ";
	cin >> opt;
	opt = opt - 1;
	int* marksTemp = new int[obj[opt].totalNoOfStudents];
	student* temp = new student[obj[opt].totalNoOfStudents];
	
	if (obj[opt].getTotalNoOfStudents() != 0)
		
	{
		for (int i = 0; i < obj[opt].getTotalNoOfStudents(); i++) {
			temp[i] = obj[opt].studentNo[i];
			marksTemp[i] = obj[opt].marksSheet[i];
		}

	}
	obj[opt].marksSheet = new int[obj[opt].totalNoOfStudents+1];
	obj[opt].studentNo = new student[obj[opt].getTotalNoOfStudents() + 1];
	if (obj[opt].getTotalNoOfStudents() != 0)
	{
		for (int i = 0; i < obj[opt].getTotalNoOfStudents(); i++) {
			obj[opt].studentNo[i] = temp[i];
			 obj[opt].marksSheet[i]=marksTemp[i];
		}
	}
	obj[opt].marksSheet[obj[opt].totalNoOfStudents] = 0;
	obj[opt].studentNo[obj[opt].getTotalNoOfStudents()].stdInput(opt, obj[opt].getTotalNoOfStudents());
	
	

	obj[opt].totalNoOfStudents++;
	
	obj[opt].marksSheet = new int[obj[opt].totalNoOfStudents];
}
void admin::editStudents(classRoom*& obj, int totalNoOfClassRoom)
{
	int opt,opt1;
	for (int i = 0; i < totalNoOfClassRoom; i++) {
		cout << "Class " << i + 1 << " : \n";
	}
	cout << "Select Class to Which you want to Add Student : ";
	cin >> opt;
	opt = opt - 1;


	if (obj[opt].getTotalNoOfStudents() != 0){
		for (int i = 0; i < obj[opt].getTotalNoOfStudents(); i++) {
			cout<< i+1<<" )."<<obj[opt].studentNo[i].getRollNo();
		}
		cout << "Select The Student : ";
		cin >> opt1;
		opt1--;
		int numTemp, numTemp2, numTemp3;
		string strTemp;
		cout << "Enter First Name: ";
		cin >> strTemp;
		obj[opt].studentNo[opt1].setFirstName( strTemp);
		cout << "Enter Last Name : ";
		cin >> strTemp;
		obj[opt].studentNo[opt1].setLastName(strTemp);
		cout << "Select the Fee Condition (0 or 1) \n";
		cout << "0) un Paid\n";
		cout << "1) Paid: ";
		cin >> numTemp;
		obj[opt].studentNo[opt1].setfeeSubmission(numTemp);
		cout << "Enter Contact No. :";
		cin >> numTemp;
		obj[opt].studentNo[opt1].setContactNo(numTemp);
		system("cls");
	}
	else
	{
		cout << "No Student added yet" << endl;
	}
}
void admin::viewAllStudentsFeeStatus(classRoom*& obj, int totalNoOfClassRoom)
{
	cout<<left << setw(30) << "Name";
	cout << left << setw(30) << "RollNo";
	cout << left << setw(30) << "Fee Statues";
	cout << endl;
	for (int i = 0; i < 10; i++) {
		
		if (obj[i].getTotalNoOfStudents() != 0)
		{
			cout << obj[i].getTotalNoOfStudents() << endl;
			for (int j = 0; j < obj[i].getNoOfStudents(); j++) {
				cout << left << setw(30) << obj[i].studentNo[j].getFirstName();
				cout << left << setw(30) << obj[i].studentNo[j].getRollNo();
				cout << left << setw(30) << obj[i].studentNo[j].getfeeSubmission();
				cout << endl;
			}
		}
		else
		{
			cout << "No Student added yet in Class "<<i+1  << endl;
		}
	}
}
void admin::viewStudentsFeeStatus(student*& obj)
{
	if (0)
	{

	}
	else
	{
		cout << "No Student added yet" << endl;
	}
}

//*******************ADMIN-end**********************


//*******************FRIEND FUNCTIONS**********************
void  dataEntryGenrealCourse(generalCourse*& generalcourseNo) {
	string subjects[6] = { "English","Urdu","Maths","Science","Social Studies","Islmait" };
	for (int i = 0; i < 6; i++) {
		generalcourseNo[i].setGeneralCourseName(subjects[i]);

	}
}
void addCourse(generalCourse& obj, teacher*& ptr) {
	int opt;
	int loop = obj.totalSubCourse;
	string str;
	course* temp = new course[obj.totalSubCourse + 1];
	if (obj.totalSubCourse != 0) {
		for (int i = 0; i < obj.totalSubCourse; i++) {
			temp[i] = obj.subCourseNo[i];
		}
	}
	obj.subCourseNo = new course[obj.totalSubCourse + 1];
	obj.totalSubCourse = loop;
	if (obj.totalSubCourse != 0) {
		for (int i = 0; i < obj.totalSubCourse; i++) {
			obj.subCourseNo[i] = temp[i];
		}
	}
	obj.subCourseNo[obj.totalSubCourse].setParentCourse(obj.getGeneralCourseName());
	cout << "Enter Course Name : ";
	cin >> str;
	obj.subCourseNo[obj.totalSubCourse].setCourseName(str);
	cout << "Enter Course Code : ";
	cin >> str;
	obj.subCourseNo[obj.totalSubCourse].setCourseCode(str);
	obj.totalSubCourse++;
	/*cout << "Select Teacher  you want to assign in this course " << endl;
	for (int i = 0; i < teacher::getTotalNoOFTeacher(); i++) {
		cout << i+1 << "). " << ptr[i].getFirstName() << " " << ptr[i].getLastName() << endl;
	}
	cout << "Select Your Option (1-" << teacher::getTotalNoOFTeacher() << ")";
	cin >> opt;
	obj.subCourseNo[obj.totalSubCourse].setAssignedTeacher(ptr[opt - 1].getThisPtr());*/

	/*int num = ptr[opt - 1].getTotalAssignedCourse() + 1;
	course* temp1 = new course[ptr[opt - 1].getTotalAssignedCourse()+1];
	if (ptr[opt - 1].getTotalAssignedCourse() != 0) {
		for (int i = 0; i < ptr[opt - 1].getTotalAssignedCourse(); i++) {
			temp1[i] = ptr[opt - 1].getAssignedCourse()[i];
		}
	}
		temp1[ptr[opt - 1].getTotalAssignedCourse()] = obj.subCourseNo[obj.totalSubCourse - 1];
		ptr[opt-1].getTotalAssignedCourse(num);
		if (ptr[opt - 1].getTotalAssignedCourse() != 0) {
			for (int i = 0; i < ptr[opt - 1].getTotalAssignedCourse(); i++) {
				ptr[opt - 1].setAssignedCourse(temp1, i);
			}
		}*/



}

///////////////////////////////////////////////////////////////////////////////////




