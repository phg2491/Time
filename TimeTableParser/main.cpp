#include"TimeTableParser.h"

int main(){

	// ��� ����
	// 1. TimeTableParser ��ü�� �������ݴϴ�.
	TimeTableParser myTimetable("TimeTable01.txt");
	
	// 2.�ڷḦ ������ 2���� �迭�� �����Ҵ����� ������ �ݴϴ�.
	int **arr = new int *[6];
	for(int i=0; i<6; i++)
		arr[i] = new int[6];

	// parseArray �Լ��� ����Ͽ� �迭�� �ؽ�Ʈ������ �ű�ϴ�.
	myTimetable.parseArray(6,6,arr);


	// 4. ��� Ȯ��
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}