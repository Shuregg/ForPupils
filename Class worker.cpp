#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Worker
{

protected:
	float salary;
	float money;
	string name;
	string company;

public:
	Worker()
	{
		salary = 0;
		money = 0;
		name = "";
		company = "";
	}
	Worker(float s, float m, string n, string c)
	{
		salary = s;
		money = m;
		name = n;
		company = c;
	}
	void Show()
	{

	}
	int GetSalary()
	{
		return salary;
	}
	int GetMoney()
	{
		return money;
	}
	string GetName()
	{
		return name;
	}
	string GetCompany()
	{
		return company;
	}
	void SetSalary(float s)
	{
		if (s > 0)
		{
			salary = s;

		}
		else
		{
			cout << "������ ��������� ��������" << endl;
		}
	}
	void HereComesTheMoney()
	{
		money = money + salary;
	}
	void Work()
	{
		cout << "����� ���������" << endl;
	}

};
class Boss : public Worker
{
private:
	string secretary;
public:
	Boss(float s, float m, string n, string c, string sec)
	{
		salary = s;
		money = m;
		name = n;
		company = c;
		secretary = sec;
	}
	void Idle()
	{
		cout << "����� ������� �� ������" << endl;
	}
};
void main()
{
	//������������
	//������������
	//�����������
	setlocale(LC_ALL, "Rus");
	vector<Worker> wk;
	for (int i = 0; i < 10; i++)
	{
		int s;
		cin >> s;
		int m;
		cin >> m;
		string nam;
		cin >> nam;
		string com;
		cin >> com;
		Worker A = Worker(s, m, nam, com);
		wk.push_back(A);
	}

	
	
	
	system("pause");

}