#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;
#define getch() _getch()


struct woman
{
	string name;
	int age;
};











void gameOverManagement()
{
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t     Game Over!\n\n\n\n\n\n\n\n\n\n\n";
	system("pause");
	Sleep(1000);
	exit(0);
} void gameVictoryManagement()
{
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t     Victory!\n\n\n\n\n\n\n\n\n\n\n";
	system("pause");
} int dataManagement(int management, int stopGame)
{
	if (management == 1)
	{
		gameOverManagement();
		stopGame = 1;
	}
	if (management == 3)
	{
		gameVictoryManagement();
		stopGame = 1;
	}
	management = 2;
	return management, stopGame;
}
int main()
{
	// 1 - ������ ���������
	// 0 - ����
	// 3 - �����
	SetConsoleCP(251);
	SetConsoleOutputCP(251);
	int mas[23][24] =
	{
	{ 1,2,1,1,0,0,1,0,0,0,1,1,1,1,1,1,1,1,1,1, },
	{ 1,0,1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1, },
	{ 1,0,1,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1, },
	{ 1,0,1,0,1,1,1,0,1,0,0,0,0,4,0,0,0,0,0,3, },
	{ 1,0,1,0,1,1,1,0,1,0,1,1,0,1,1,1,1,1,1,1, },
	{ 1,0,1,0,1,1,1,0,1,0,1,1,0,1,1,1,1,1,1,1, },
	{ 1,0,1,4,1,1,1,0,0,0,1,1,0,1,1,1,1,1,1,1, },
	{ 1,0,0,0,1,1,1,1,4,1,1,1,4,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, },
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, },
	
	};
	int cur_i = 0;
	int cur_j = 1;
	int score = 0;
	while (true)
	{
		system("cls");
		//���������
		for (int i = 0; i < 23; i++) //������������ �� �������
		{
			for (int j = 0; j < 24; j++)// ������������ �� ��������
			{
				if (mas[i][j] == 1)
				{
					// ������� ��� ���� ������ (����� �������� 176 � ������� ����) � �������
					cout << static_cast<char>(177);
					cout << static_cast<char>(177);
				}
				if (mas[i][j] == 4)
				{
					// ������� ��� ���� ������ (����� �������� 176 � ������� ����) � �������
					
					//cout << " $";
					cout << static_cast<char>(190);
					cout << static_cast<char>(190);
				}
				if (mas[i][j] == 0)
				{
					cout << "  ";
				}
				if (mas[i][j] == 3)
				{
					cout << " ?";
				}
				if (mas[i][j] == 2)
				{
					cout << static_cast<char>(178);
					cout << static_cast<char>(178);
				}
			}
			cout <<endl;
		}
		cout << score << endl;
		int keysArrow = _getch(); //#include <conio.h>
		mas[cur_i][cur_j] = 0;
		//����������
		if (keysArrow == 72 || keysArrow == 150 || keysArrow == 230)
		{
			// �����
			cur_i = cur_i - 1;
			if (mas[cur_i][cur_j] == 1)
			{
				cur_i = cur_i + 1;
			}
		}
		if (keysArrow == 80 || keysArrow == 155 || keysArrow == 235)
		{
			// ����
			cur_i = cur_i + 1;
			if (mas[cur_i][cur_j] == 1)
			{
				cur_i = cur_i - 1;
			}
			
		}
		if (keysArrow == 77 || keysArrow == 130 || keysArrow == 262)
		{
			// ������
			cur_j = cur_j + 1;
			if (mas[cur_i][cur_j] == 1)
			{
				cur_j = cur_j - 1;
			}
		}
		if (keysArrow == 75 || keysArrow == 148 || keysArrow == 235)
		{
			// �����
			cur_j = cur_j - 1;
			
			if (mas[cur_i][cur_j] == 1)
			{
				cur_j = cur_j + 1;
			}
		}
		if (mas[cur_i][cur_j] == 4)
		{
			score++;
		}
		if (mas[cur_i][cur_j] == 3)
		{
			break;
		}
		mas[cur_i][cur_j] = 2;

	}
	






	return 0;
}