#include "TimeTableParser.h"


TimeTableParser::TimeTableParser(void)
{
}

TimeTableParser::TimeTableParser(string fileName)
{
	inputFile.open(fileName, ios::out);

	if(inputFile.fail())
		cout <<"������ã�� �� �����ϴ�." << endl;
	else{
		this->fileName = fileName;
	}
}


TimeTableParser::~TimeTableParser(void)
{
}


string TimeTableParser::getFileName()
{
	return fileName;
}

void TimeTableParser::openFile(string fileName)
{
	inputFile.open(fileName, ios::out);

	if(inputFile.fail())
		cout <<"������ ã�� �� �����ϴ�." << endl;
	else{
		this->fileName = fileName;
	}
}
void TimeTableParser::parseArray(int size, int *arr){
	for(int i=0; i< size; i++){
		inputFile >> arr[i];
	}
}

void TimeTableParser::parseArray(int row, int col, int **arr){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			inputFile >> arr[i][j]; 
		}
	}
}