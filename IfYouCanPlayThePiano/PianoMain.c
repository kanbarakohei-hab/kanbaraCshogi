#include <stdio.h>
#include "ShogiPiece.h"

int main(void)
{
	char* piano1 = "�������s�A�m���e�����Ȃ�\n";
	char* piano2 = "�v���̂��ׂĂ��̂ɂ���\n";
	char* piano3 = "�N�ɓ`���邱�Ƃ��낤\n";
	char* title = "����project\n";

	/* ����
	char* shogiban1 = "���j����ʋ���j��\n";
	char* shogiban2 = "�@��@�@�@�@�@�p�@\n";
	char* shogiban3 = "������������������\n";
	char* shogiban4 = "�@�@�@�@�@�@�@�@�@\n";
	char* shogiban5 = "�@�@�@�@�@�@�@�@�@\n";
	char* shogiban6 = "�@�@�@�@�@�@�@�@�@\n";
	char* shogiban7 = "������������������\n";
	char* shogiban8 = "�@�p�@�@�@�@�@��@\n";
	char* shogiban9 = "���j����ʋ���j��\n";
	
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

	/*��̏����ʒu(9�~9�F���s�~9�F���v90)*/
	for (int i = 1; 90 >= i; i++)
	{
		/*��*/
		if ((i >= 21 && i <= 29) || (i >= 61 && i <= 69))
		{
			printf("%s", HU);
		}
		/*���s�R�[�h*/
		else if ((i % 10) == 0)
		{
			printf("%s", "\n");
		}
		/*����*/
		else if (i == 1 || i == 9 || i == 81 || i == 89)
		{
			printf("%s", KYOUSYA);
		}
		/*�j�n*/
		else if (i == 2 || i == 8 || i == 82 || i == 88)
		{
			printf("%s", KEIMA);
		}
		/*��*/
		else if (i == 3 || i == 7 || i == 83 || i == 87)
		{
			printf("%s", GIN);
		}
		/*��*/
		else if (i == 4 || i == 6 || i == 84 || i == 86)
		{
			printf("%s", KIN);
		}
		/*��*/
		else if (i == 5 || i == 85)
		{
			printf("%s", GYOKU);
		}
		/*���*/
		else if (i == 12 || i == 78)
		{
			printf("%s", HISYA);
		}
		/*�p*/
		else if (i == 18 || i == 72)
		{
			printf("%s", KAKU);
		}
		/*��*/
		else
		{
			printf("%s", SPACE);
		}
	}
	char aaa[512];
	scanf_s("%s", aaa, 10);
	printf("%s\n", aaa);
	
	/*�������擪�Q�����ƂR�����ڈȍ~�ŋ�؂�*/
	/*�������擪�Q������*/
	/*numberConversion();*/
	/*�ŕϊ�����*/
	
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