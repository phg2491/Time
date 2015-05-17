#include"TimeTableParser.h"

int main(){

	// 사용 예제
	// 1. TimeTableParser 객체를 생성해줍니다.
	TimeTableParser myTimetable("TimeTable01.txt");
	
	// 2.자료를 저장할 2차원 배열을 동적할당으로 선언해 줍니다.
	int **arr = new int *[6];
	for(int i=0; i<6; i++)
		arr[i] = new int[6];

	// parseArray 함수를 사용하여 배열로 텍스트파일을 옮깁니다.
	myTimetable.parseArray(6,6,arr);


	// 4. 결과 확인
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}