#include <stdio.h>
#include "ShogiPiece.h"

int main(void)
{
	char* piano1 = "もしもピアノが弾けたなら\n";
	char* piano2 = "思いのすべてを歌にして\n";
	char* piano3 = "君に伝えることだろう\n";
	char* title = "将棋project\n";

	/* 試し
	char* shogiban1 = "香桂銀金玉金銀桂香\n";
	char* shogiban2 = "　飛　　　　　角　\n";
	char* shogiban3 = "歩歩歩歩歩歩歩歩歩\n";
	char* shogiban4 = "　　　　　　　　　\n";
	char* shogiban5 = "　　　　　　　　　\n";
	char* shogiban6 = "　　　　　　　　　\n";
	char* shogiban7 = "歩歩歩歩歩歩歩歩歩\n";
	char* shogiban8 = "　角　　　　　飛　\n";
	char* shogiban9 = "香桂銀金玉金銀桂香\n";
	
	printf("%s\n", piano1);
	printf("%d\n", *piano1);
	printf("%c\n", piano1[0]);
	printf("hello\n");
	*/
	/*
	printf("%s\n", piano1);
	printf("%s\n", piano2);
	printf("%s\n", piano3);
	
	printf("%s\n", title);
	printf("%s\n", shogiban1);
	printf("%s\n", shogiban2);
	printf("%s\n", shogiban3);

	printf("%s\n", shogiban4);

	printf("%s\n", shogiban5);

	printf("%s\n", shogiban6);

	printf("%s\n", shogiban7);

	printf("%s\n", shogiban8);
	printf("%s\n", shogiban9);

	printf("\x1b[45m");
	printf("%s",HU);
	printf("\x1b[49m");
	*/

	/*駒の初期位置(9×9：改行×9：合計90)*/
	for (int i = 1; 90 >= i; i++)
	{
		/*歩*/
		if ((i >= 21 && i <= 29) || (i >= 61 && i <= 69))
		{
			printf("%s", HU);
		}
		/*改行コード*/
		else if ((i % 10) == 0)
		{
			printf("%s", "\n");
		}
		/*香車*/
		else if (i == 1 || i == 9 || i == 81 || i == 89)
		{
			printf("%s", KYOUSYA);
		}
		/*桂馬*/
		else if (i == 2 || i == 8 || i == 82 || i == 88)
		{
			printf("%s", KEIMA);
		}
		/*銀*/
		else if (i == 3 || i == 7 || i == 83 || i == 87)
		{
			printf("%s", GIN);
		}
		/*金*/
		else if (i == 4 || i == 6 || i == 84 || i == 86)
		{
			printf("%s", KIN);
		}
		/*玉*/
		else if (i == 5 || i == 85)
		{
			printf("%s", GYOKU);
		}
		/*飛車*/
		else if (i == 12 || i == 78)
		{
			printf("%s", HISYA);
		}
		/*角*/
		else if (i == 18 || i == 72)
		{
			printf("%s", KAKU);
		}
		/*空白*/
		else
		{
			printf("%s", SPACE);
		}
	}
	char aaa[512];
	scanf_s("%s", aaa, 10);
	printf("%s\n", aaa);
	
	/*文字列を先頭２文字と３文字目以降で区切る*/
	/*文字列を先頭２文字を*/
	/*numberConversion();*/
	/*で変換する*/
	
	/*
	printf("%s", KYOUSYA);
	printf("%s", KEIMA);
	printf("%s", GIN);
	printf("%s", KIN);
	printf("%s", GYOKU);
	printf("%s", KIN);
	printf("%s", GIN);
	printf("%s", KEIMA);
	printf("%s", KYOUSYA);
	printf("%s", "\n");

	printf("%s", SPACE);
	printf("%s", HISYA);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", KAKU);
	printf("%s", SPACE);
	
	printf("%s", "\n");
	printf("%s", HU);//kakeru9

	printf("%s", "\n");
	printf("%s", SPACE);//27

	printf("%s", "\n");
	printf("%s", HU);//kakeru9

	printf("%s", "\n");
	printf("%s", SPACE);
	printf("%s", KAKU);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", HISYA);
	printf("%s", SPACE);
	printf("%s", "\n");

	printf("%s", KYOUSYA);
	printf("%s", KEIMA);
	printf("%s", GIN);
	printf("%s", KIN);
	printf("%s", GYOKU);
	printf("%s", KIN);
	printf("%s", GIN);
	printf("%s", KEIMA);
	printf("%s", KYOUSYA);
	printf("%s", "\n");
	*/

	return 0;
}