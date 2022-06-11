
/*
   컴퓨터프로그래밍 평과과제 (배점 25점)
   학과 : 컴퓨터공학부
   학번 : 202200623
   이름 : 김민형 

   과제 주제 : 우리나라의 지역별 인구수, 코로나 확진자 수를 보여주고, 사용자로부터 숫자를 입력받아 그에 따른
   코로나 국가별 현황이나 우리나라지역의 백신 접종 현황을 알려준다*/

#define _CRT_SECURE_NO_WARNINGS_
#include<stdio.h>
#include<stdlib.h>


struct locals {
	char name[20];
	char population[20];
    char covid[20];
    

	
};// 배열, 구조체 사용
struct locals local[100] = {
	{"Seoul", "약 950만명","약 360만명",},
	{"Busan", "약 330만명","약 100만명",},
	{"Daegu", "약 230만명","약 76만명",}

};
void file()
{
	FILE* flocal;
	int c = fopen_s(&flocal, "C:\\Users\\82107\\Desktop\\visual studio\\hello\\locals.txt", "a+");

	if (c != 0)
	{
		printf("파일 에러\n");
		exit(1);
	}
	//파일 입출력 및 포인터 사용과 활용
	for (int i = 0; i < 3; i++)
	{
		fprintf(flocal,"도시 이름 = %s,", local[i].name);
		fprintf(flocal,"인구 수 = %s,", local[i].population);
		fprintf(flocal,"확진자 수 = %s,", local[i].covid);
		
	}

	
	fclose(flocal);



}
void display_locals()
{
	for (int i = 0; i < 3; i++)
	{
		printf("도시 이름 = %s\n" ,local[i].name);
		printf("인구 수 = %s\n", local[i].population);
		printf("확진자 수 = %s\n", local[i].covid);
		
	}

}

void country_covid() {

	printf("국가별 확진자 현황\n");
	printf("한국의 코로나 현황은 누적 확진자 약 18,000,000명이고, 사망률은 0.1%입니다.\n");
	printf("일본의 코로나 현황은 누적 확진자 약 9,000,000명이고, 사망률은 0.3%입니다. \n");
	printf("미국의 코로나 현황은 누적 확진자 약 85,000,000명이고, 사망률은 1.2%입니다. \n");




}
void rrr() 
{	
	printf("\n나라별 백신 접종 현황\n");

	

	
	printf("한국의 백신 접종 현황은 86.87%으로 약 45,000,000명이 접종 완료했습니다.");
	printf("미국의 백신 접종 현황은 66.76%으로 약 222,000,000명이 접종 완료했습니다.");
	printf("일본의 백신 접종 현황은 81.05%으로 약 100,000,000명이 접종 완료했습니다.");

}


//함수 사용
int main(void)
{
	int x = 1;
	int number;
	void file();
	display_locals();
	
	while (x)
	{
		
		printf("\n================================\n");
		printf("1. 나라별 확진자 현황\n");
		printf("2. 나라별 백신 접종 현황\n");
		printf("3. EXIT");
		printf("\n=================================\n");
		printf("원하는 번호를 입력하세요: ");
		scanf_s("%d", &number);
		switch (number)
		{
		case 1:
		    country_covid();
			break;
		case 2:
			rrr();
			break; 
		case 3:
			x = 0;
			break;
		
		default:
			printf("잘못된 번호입니다.");
			break;

			
		}
	}




	return 0;
}
