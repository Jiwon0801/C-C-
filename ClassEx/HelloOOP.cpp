// ClassEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>



class USERDATA {
public:
//private: //초기화 인수 = 0
	// 멤버 변수 선언
	int nAge;
	char szName[32];

	//멤버 함수 선언 미 정의
	void Print(void) {
		printf("%d, %s\n", nAge, szName);
	}
};



int main() {
	USERDATA user = { 10, "철수" };
	user.Print();

	return 0;
}

