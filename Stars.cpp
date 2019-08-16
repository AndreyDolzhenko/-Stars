/*
����-��������� "��������" (Stars)

VERSION: 0.2
AUTHOR: Dolzhenko Andrey
COPYRIGHT: � Dolzhenko Andrey, 2019
LICENSE: MIT License
DESCRIPTION:
���� ��������� �������� 10 ��������� ����� ��������� �������. 
������ ������ �����, �������� ���������� ��������� � ��������� ������.
�������� ����� ����������� ��������. �� ��������� ���������, ��� ���� � ���� ������ �������� ������� ���������.

MIT License
Copyright (c) 2019 Dolzhenko Andrey

*/

#include<iostream>
using namespace std;

int a;

void Break()
{
	cout << "\n��������� ����� �����������. ���������� ��������� ��������� ��� ���!\n";
	cout << "\n\t\t\t� � � � ! ! !\n\n";

}
void Form_1() // ������� ��� 1-� ������
{

	cout << "\n������ �1.\n\n";
	cout << "\n������� ���������� ��������� � ��������� ������: \t";

	cin >> a; // �������� ���������� ���������� ������ ��������


	cout << endl << endl;

	for (int i = 0; i < a + 2; i++) // ������ ���� ������ ������� ������� ��������
	{
		if (i == 0 || i == a + 1)
		{
			cout << "|";
		}

		else
		{
			cout << "-";
		}
	}

	cout << endl;

	for (int i = 0; i < a; i++) // ������ ���� ������ �������� ������
	{
			   		 
		cout << "|";

		for (int j = 0; j < a; j++)
		{


			int b;

			b = j;


			if (i <= b && i < a)
			{
				cout << "*";
			}

			else if (i > b)
			{
				cout << " ";
			}

			
		}

		cout << "|";

		cout << endl;
	}

	
	for (int i = 0; i < a + 2; i++) // ������ ���� ������ ������ ������� ��������
	{
		if (i == 0 || i == a + 1)
		{
			cout << "|";
		}

		else
		{
			cout << "-";
		}
	}

	cout << endl;

	
}
void Form_2 () // ������� ��� 2-� ������
{
	
	cout << "\n������ �2.\n\n";
	cout << "\n������� ���������� ��������� � ��������� ������: \t";

	cin >> a; // �������� ���������� ���������� ������ ��������


	cout << endl << endl;

	for (int i = 0; i < a + 2; i++) // ������ ���� ������ ������� ������� ��������
	{
		if (i == 0 || i == a + 1)
		{
			cout << "|";
		}

		else
		{
			cout << "-";
		}
	}

	cout << endl;

	for (int i = 0; i < a; i++) // ������ ���� ������ �������� ������
	{
			   		 
		cout << "|";

		for (int j = 0; j < a; j++)
		{


			int b;

			b = j - 1;


			if (i > b && i < a)
			{
				cout << "*";
			}

			else if (i <= b)
			{
				cout << " ";
			}

			
		}

		cout << "|";

		cout << endl;
	}



	for (int i = 0; i < a + 2; i++) // ������ ���� ������ ������ ������� ��������
	{
		if (i == 0 || i == a + 1)
		{
			cout << "|";
		}

		else
		{
			cout << "-";
		}
	}

	cout << endl;

}
void Form_3() // ������� ��� 3-� ������
{

	cout << "\n������ �3.\n\n";
	cout << "\n������� ���������� ��������� � ��������� ������: \t";

	cin >> a; // �������� ���������� ���������� ������ ��������


	cout << endl << endl;

	for (int i = 0; i < a + 2; i++) // ������ ���� ������ ������� ������� ��������
	{
		if (i == 0 || i == a + 1)
		{
			cout << "|";
		}

		else
		{
			cout << "-";
		}
	}

	cout << endl;

	for (int i = 0; i < a; i++) // ������ ���� ������ �������� ������
	{

		cout << "|";

		for (int j = 0; j < a; j++)
		{


			int b, c;

			b = j;

			c = i + j;


			if (i >= b || c > a-1)
			{
				cout << " ";
			}

			else if (i < b || c < a-1)
			{
				cout << "*";
			}

			
			
		}

		cout << "|";

		cout << endl;
	}


	for (int i = 0; i < a + 2; i++) // ������ ���� ������ ������ ������� ��������
	{
		if (i == 0 || i == a + 1)
		{
			cout << "|";
		}

		else
		{
			cout << "-";
		}
	}

	cout << endl;


}
void Form_4() // ������� ��� 4-� ������
{

	cout << "\n������ �4.\n\n";
	cout << "\n������� ���������� ��������� � ��������� ������: \t";

	cin >> a; // �������� ���������� ���������� ������ ��������


	cout << endl << endl;

	for (int i = 0; i < a + 2; i++) // ������ ���� ������ ������� ������� ��������
	{
		if (i == 0 || i == a + 1)
		{
			cout << "|";
		}

		else
		{
			cout << "-";
		}
	}

	cout << endl;

	for (int i = 0; i < a; i++) // ������ ���� ������ �������� ������
	{

		cout << "|";

		for (int j = 0; j < a; j++)
		{


			int b, c;

			b = j;

			c = i + j;


			if (i <= b || c < a - 1)
			{
				cout << " ";
			}

			else if (i > b || c > a - 1)
			{
				cout << "*";
			}



		}

		cout << "|";

		cout << endl;
	}


	for (int i = 0; i < a + 2; i++) // ������ ���� ������ ������ ������� ��������
	{
		if (i == 0 || i == a + 1)
		{
			cout << "|";
		}

		else
		{
			cout << "-";
		}
	}

	cout << endl;


}
void Form_5() // ������� ��� 5-� ������
{

	cout << "\n������ �5.\n\n";
	cout << "\n������� ���������� ��������� � ��������� ������: \t";

	cin >> a; // �������� ���������� ���������� ������ ��������


	cout << endl << endl;

	for (int i = 0; i < a + 1; i++) // ������ ���� ������ ������� ������� ��������
	{
		
		cout << "-";
		
				
	}

	cout << endl;

	for (int i = 0; i < a/2; i++) // ������ ���� ������ ������� ����� �������� ������
	{

		cout << "|";

		
		for (int j = 0; j < a/2; j++) // ����� �����������
		{
			int b = j;
			int c = i + b;

			if (i <= j)
			{
				cout << "*";
			
			}

			else
			{
				cout << " ";
			}
		}

		for (int j = 0; j < a / 2; j++) // ������ �����������
		{
			int b = j;
			int c = i + b;
			if (c < a / 2 - 1)
			{
				cout << "*";

			}

			else
			{
				cout << " ";
			}
		}

		cout << "|";

		cout << endl;
	}


	
	for (int i = 0; i < a / 2; i++) // ������ ���� ������ ������ ����� �������� ������
	{

		cout << "|";

		for (int j = 0; j < a / 2; j++)
		{
			int b = j;
			int c = i + b;
			if (c >= a / 2 - 1)
			{
				cout << "*";

			}

			else
			{
				cout << " ";
			}
		}
		
		for (int j = 0; j < a / 2; j++)
		{
			int b = j;
			int c = i + b;
			if (i > j)
			{
				cout << "*";

			}

			else
			{
				cout << " ";
			}
		}

		
		
		cout << "|";

		cout << endl;
	}


	for (int i = 0; i < a + 1; i++) // ������ ���� ������ ������ ������� ��������
	{
		cout << "-";
	}


	cout << endl;
	

}
void Form_6() // ������� ��� 6-� ������
{

	cout << "\n������ �6.\n\n";
	cout << "\n������� ���������� ��������� � ��������� ������: \t";

	cin >> a; // �������� ���������� ���������� ������ ��������


	cout << endl << endl;

	for (int i = 0; i < a + 1; i++) // ������ ���� ������ ������� ������� ��������
	{

		cout << "-";


	}

	cout << endl;

	for (int i = 0; i < a / 2; i++) // ������ ���� ������ ������� ����� �������� ������
	{

		cout << "|";


		for (int j = 0; j < a / 2; j++) // ����� �����������
		{
			int b = j;
			int c = i + b;

			if (i <= j)
			{
				cout << " ";

			}

			else
			{
				cout << "*";
			}
		}

		for (int j = 0; j < a / 2; j++) // ������ �����������
		{
			int b = j;
			int c = i + b;
			if (c < a / 2 - 1)
			{
				cout << " ";

			}

			else
			{
				cout << "*";
			}
		}

		cout << "|";

		cout << endl;
	}

	
	for (int i = 0; i < a / 2; i++) // ������ ���� ������ ������ ����� �������� ������
	{

		cout << "|";

		for (int j = 0; j < a / 2; j++)
		{
			int b = j;
			int c = i + b;
			if (c >= a / 2 - 1)
			{
				cout << " ";

			}

			else
			{
				cout << "*";
			}
		}

		for (int j = 0; j < a / 2; j++)
		{
			int b = j;
			int c = i + b;
			if (i > j)
			{
				cout << " ";

			}

			else
			{
				cout << "*";
			}
		}

		
		cout << "|";

		cout << endl;
	}


	for (int i = 0; i < a + 1; i++) // ������ ���� ������ ������ ������� ��������
	{
		cout << "-";
	}
	
	cout << endl;
	
}
void Form_7() // ������� ��� 7-� ������
{

	cout << "\n������ �7.\n\n";
	cout << "\n������� ���������� ��������� � ��������� ������: \t";

	cin >> a; // �������� ���������� ���������� ������ ��������


	cout << endl << endl;

	for (int i = 0; i < a + 1; i++) // ������ ���� ������ ������� ������� ��������
	{

		cout << "-";


	}

	cout << endl;

	for (int i = 0; i < a / 2; i++) // ������ ���� ������ ������� ����� �������� ������
	{

		cout << "|";


		for (int j = 0; j < a / 2; j++) // ����� �����������
		{
			int b = j;
			int c = i + b;

			if (i <= j)
			{
				cout << " ";

			}

			else
			{
				cout << "*";
			}
		}

		for (int j = 0; j < a / 2; j++) // ������ �����������
		{
			int b = j;
			int c = i + b;
			if (c < a / 2 - 1)
			{
				cout << " ";

			}

			else
			{
				cout << " ";
			}
			
		}

		cout << "|";

		cout << endl;
	}


	for (int i = 0; i < a / 2; i++) // ������ ���� ������ ������ ����� �������� ������
	{

		cout << "|";

		for (int j = 0; j < a / 2; j++)
		{
			int b = j;
			int c = i + b;
			if (c >= a / 2 - 1)
			{
				cout << " ";

			}

			else
			{
				cout << "*";
			}
		}

		for (int j = 0; j < a / 2; j++)
		{
			int b = j;
			int c = i + b;
			if (i > j)
			{
				cout << " ";

			}

			else
			{
				cout << " ";
			}
		}


		cout << "|";

		cout << endl;
	}


	for (int i = 0; i < a + 1; i++) // ������ ���� ������ ������ ������� ��������
	{
		cout << "-";
	}

	cout << endl;

}
void Form_8() // ������� ��� 8-� ������
{

	cout << "\n������ �8.\n\n";
	cout << "\n������� ���������� ��������� � ��������� ������: \t";

	cin >> a; // �������� ���������� ���������� ������ ��������


	cout << endl << endl;

	for (int i = 0; i < a + 1; i++) // ������ ���� ������ ������� ������� ��������
	{

		cout << "-";


	}

	cout << endl;

	for (int i = 0; i < a / 2; i++) // ������ ���� ������ ������� ����� �������� ������
	{

		cout << "|";


		for (int j = 0; j < a / 2; j++) // ����� �����������
		{
			int b = j;
			int c = i + b;

			if (i <= j)
			{
				cout << " ";

			}

			else
			{
				cout << " ";
			}
		}

		for (int j = 0; j < a / 2; j++) // ������ �����������
		{
			int b = j;
			int c = i + b;
			if (c < a / 2 - 1)
			{
				cout << " ";

			}

			else
			{
				cout << "*";
			}
		}

		cout << "|";

		cout << endl;
	}


	for (int i = 0; i < a / 2; i++) // ������ ���� ������ ������ ����� �������� ������
	{

		cout << "|";

		for (int j = 0; j < a / 2; j++)
		{
			int b = j;
			int c = i + b;
			if (c >= a / 2 - 1)
			{
				cout << " ";

			}

			else
			{
				cout << " ";
			}
		}

		for (int j = 0; j < a / 2; j++)
		{
			int b = j;
			int c = i + b;
			if (i > j)
			{
				cout << " ";

			}

			else
			{
				cout << "*";
			}
		}


		cout << "|";

		cout << endl;
	}


	for (int i = 0; i < a + 1; i++) // ������ ���� ������ ������ ������� ��������
	{
		cout << "-";
	}

	cout << endl;

}
void Form_9() // ������� ��� 9-� ������
{

	cout << "\n������ �9.\n\n";
	cout << "\n������� ���������� ��������� � ��������� ������: \t";

	cin >> a; // �������� ���������� ���������� ������ ��������


	cout << endl << endl;

	for (int i = 0; i < a + 2; i++) // ������ ���� ������ ������� ������� ��������
	{
		if (i == 0 || i == a + 1)
		{
			cout << "|";
		}

		else
		{
			cout << "-";
		}
	}

	cout << endl;

	for (int i = 0; i < a; i++) // ������ ���� ������ �������� ������
	{

		cout << "|";

		for (int j = 0; j < a; j++)
		{
			
			int b;

			b = j;
			int c = i + j;

			if (c <= a-1)
			{
				cout << "*";
			}

			else
			{
				cout << " ";
			}


		}

		cout << "|";

		cout << endl;
	}


	for (int i = 0; i < a + 2; i++) // ������ ���� ������ ������ ������� ��������
	{
		if (i == 0 || i == a + 1)
		{
			cout << "|";
		}

		else
		{
			cout << "-";
		}
	}

	cout << endl;


}
void Form_10() // ������� ��� 10-� ������
{

	cout << "\n������ �10.\n\n";
	cout << "\n������� ���������� ��������� � ��������� ������: \t";

	cin >> a; // �������� ���������� ���������� ������ ��������


	cout << endl << endl;

	for (int i = 0; i < a + 2; i++) // ������ ���� ������ ������� ������� ��������
	{
		if (i == 0 || i == a + 1)
		{
			cout << "|";
		}

		else
		{
			cout << "-";
		}
	}

	cout << endl;

	for (int i = 0; i < a; i++) // ������ ���� ������ �������� ������
	{

		cout << "|";

		for (int j = 0; j < a; j++)
		{

			int b;

			b = j;
			int c = i + j;

			if (c >= a - 1)
			{
				cout << "*";
			}

			else
			{
				cout << " ";
			}


		}

		cout << "|";

		cout << endl;
	}


	for (int i = 0; i < a + 2; i++) // ������ ���� ������ ������ ������� ��������
	{
		if (i == 0 || i == a + 1)
		{
			cout << "|";
		}

		else
		{
			cout << "-";
		}
	}

	cout << endl;


}

int main()
{
	setlocale(LC_ALL, "ru");

	int choice; // ���������� ��� ������ �������� ������
		
	cout << "��� ��������� ��������� �������� ��������� ������ �� ������ ���������� ���������!\n\n";

	for (int i = 0; ; i++)
	{
		
	

	cout << "\n\n���� ������������ �������� �����, ������� �� ������ ����������:\n\n";
	cout << "1. |----|  2. |----|  3. |----|  4. |----|  5. |----| \n";
	cout << "   |****|     |*   |     |****|     |    |     |****| \n";
	cout << "   | ***|     |**  |     | ** |     |    |     | ** | \n";
	cout << "   |  **|     |*** |     |    |     | ** |     | ** | \n";
	cout << "   |   *|     |****|     |    |     |****|     |****| \n";
	cout << "   |----|     |----|     |----|     |----|     |----| \n";
	cout << endl;
	cout << "6. |----|  7. |----|  8. |----|  9. |----| 10. |----| \n";
	cout << "   |*  *|     |    |     |    |     |****|     |   *| \n";
	cout << "   |****|     |*   |     |   *|     |*** |     |  **| \n";
	cout << "   |****|     |**  |     |  **|     |**  |     | ***| \n";
	cout << "   |*  *|     |*   |     |   *|     |*   |     |****| \n";
	cout << "   |----|     |----|     |----|     |----|     |----| \n";

	cout << "\n������� ����� ������, ������� ������ ����������:\t";

	cin >> choice;		

	if (choice == 1)
	{		
		Form_1();		
	}

	else if (choice == 2)
	{		
		Form_2();
	}
	
	else if (choice == 3)
	{		
		Form_3();
	}
	else if (choice == 4)
	{		
		Form_4();
	}
	else if (choice == 5)
	{		
		Form_5();
	}
	else if (choice == 6)
	{		
		Form_6();
	}
	else if (choice == 7)
	{		
		Form_7();
	}
	else if (choice == 8)
	{		
		Form_8();
	}
	else if (choice == 9)
	{		
		Form_9();
	}
	else if (choice == 10)
	{		
		Form_10();
	}
	else
	{		
		Break();		
	}

	cout << "\n\t\t�� �������� �������� ! ! !\n\n";

	cout << "\t\t\t*|*\n";
	cout << "\t\t\t,_,\n";

	int cont;

	cout << "\n\n\t������ ����������? ���� ��, ������� 1, ���� ���, ������� 2 - "; cin >> cont;

	switch (cont)
	{
	case 1:

		system("cls");
		

		break;

	case 2:

		return 0;

		break;

	default:

		cout << "\n\n\t!!!��������� ����� �����������!!! ";
		cout << "\n\n\t������ ����������??? ";
		cout << "\n\n\t���� ��, ������� 1, ���� ���, ������� 2 - "; cin >> cont;

		break;

	}
	system("cls");
	}
}