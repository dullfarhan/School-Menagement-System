#include"Project_Header.h"

void  dataEntryGenrealCourse(generalCourse*& generalcourseNo);

//19f0254_______19f0113

int main()
{
	char loop = 'y';
	char loop1 = 'y';
	teacher* TeacherNo = new teacher[0];
	student* StudentNo = new student[0];
	//cout << teacher::getTotalNoOFTeacher() << endl;
	//cout << student::getTotalNoOfStudents() << endl;;
	admin ad;
	int selection, selection1, teacher;
	int const NoOFBasicCourse = 7;
	int const totalNoOfClassRoom = 10;
	classRoom* classNo = new classRoom [totalNoOfClassRoom];
	generalCourse* generalCourseNo = new generalCourse[NoOFBasicCourse];
	dataEntryGenrealCourse(generalCourseNo);
	while (loop == 'y') {
		cout << endl;
		cout << "Press 1 for Admin : \n";
		cout << "Press 2 for Teacher : \n";
		cout << "Press 3 for Student : \n";
		cout << "Press 4 for Exit : \n";
		cout << "Enter Choice : ";
		cin >> selection;
		system("cls");
		if (selection == 1) {
			while (loop1 == 'y') {
				cout << endl;
				cout << "Admin View\n";
				cout << "1). View All Teachers : \n";
				cout << "2). Assign cher : \n";
				cout << "5). Edit TeCourse : \n";
				cout << "3). Add Course : \n";
				cout << "4). Add Teaacher : \n";
				cout << "6). View All Students : \n";
				cout << "7). Add Students : \n";
				cout << "8). Edit Students : \n";
				cout << "9). All Students Fee Status : \n";
				cout << "0). Exit : ";
				cin >> selection1;
				if (selection1 == 1) {
					ad.viewAllTeacher(TeacherNo);

				}
				if (selection1 == 2) {
					ad.assignCourse(TeacherNo, generalCourseNo);

				}
				if (selection1 == 3) {
					ad.generalCourseAddSub(generalCourseNo, TeacherNo);

				}

				if (selection1 == 4) {
					ad.addTeacher(TeacherNo);

				}

				if (selection1 == 5) {
					ad.editTeacher(TeacherNo);

				}
				
				if (selection1 == 6) 
				{
					ad.viewAllStudents(classNo, totalNoOfClassRoom);
				}
				if (selection1 == 7)
				{
					ad.addStudents(classNo, totalNoOfClassRoom);
				}
				if (selection1 == 8)
				{
					ad.editStudents(classNo, totalNoOfClassRoom);
				}
				if (selection1 == 9)
				{
					ad.viewAllStudentsFeeStatus(classNo, totalNoOfClassRoom);
				}
				if (selection1 == 0) {
					loop1 = 'n';

				}
			}
		}
		if (selection == 2) {
			while (loop1 == 'y') {
				cout << endl;
				cout << "Teacher View\n";
				cout << "Press 1 for View Assigned Cources\n";
				cout << "Press 2 to EXIT : ";
				cin >> selection1;
				if (selection1 == 1) {
					for (int i = 0; i < teacher::getTotalNoOFTeacher(); i++) {
						cout << i + 1 << "). " << TeacherNo[i].getFirstName() << endl;
					}
					cout << "Select Teacher : ";
					cin >> teacher;
					TeacherNo[teacher - 1].viewAllCources();
				}
				
				if (selection1 == 2) {
					loop1 = 'n';
				}
			}
		}
		if (selection == 3) {
			//cout << "student under work";
			while (loop1 == 'y')
			{
				cout << endl;
				cout << "Student View\n";
				cout << "Press 1 for Fee Status\n";
				//cout << "Press 2 to View marks : \n";
				cout << "Press 2 to EXIT : ";
				cin >> selection1;
				if (selection1 == 1)
				{
					ad.viewStudentsFeeStatus(StudentNo);
				}
				/*if (selection1 == 2)
				{
					
				}*/
				if (selection1 == 2)
				{
					loop1 = 'n';
				}
			}
		}
		if (selection == 4) 
		{
			//loop1 = 'n';
			cout << "Exit Initiated..." << endl;
			cout << "Exit Successful." << endl;
			exit(0);
		}
		system("cls");
		loop1 = 'y';
	}
}

