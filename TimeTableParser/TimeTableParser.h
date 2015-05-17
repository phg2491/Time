#pragma once
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class TimeTableParser
{
public:
	TimeTableParser(void);
	TimeTableParser(string fileName);
	~TimeTableParser(void);

	void openFile(string fileName);
	string getFileName();
	void parseArray(int size, int *arr);
	void parseArray(int row, int col, int **arr);

private :
	ifstream inputFile;
	string fileName;
};

