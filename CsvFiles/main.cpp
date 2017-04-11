#include <iostream>
#include <conio.h>
#include "CsvFiles.h"

using namespace std;

int main()
{
	cout << "CSV (.csv) files editor" << endl;
	cout << endl;
	cout << "Class CsvFiles adds: " << endl;
	cout << "CsvFiles::CsvFiles(std::string f_name, char s_char)" << endl;
	cout << "void CsvFiles::load()" << endl;
	cout << "void CsvFiles::show()" << endl;
	cout << "void CsvFiles::save()" << endl;
	cout << "void CsvFiles::overwrite()" << endl;
	cout << endl;

	Files file1("file.csv", ';');//Select string name and type of separator
	file1.overwrite();//Create exemplary .csv file
	file1.load();//Load data from .csv file
	file1.matrix[0][0] = "1";//Edit one field from the array
	file1.matrix[0][1] = "2";
	file1.matrix[0][2] = "3";
	file1.show();//Show loaded data
	file1.save();//Save data to .csv file

	_getch();

	return 0;
}
