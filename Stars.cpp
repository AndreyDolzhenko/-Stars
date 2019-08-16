/*
Игра-рисовалка "Звёздочки" (Stars)

VERSION: 0.2
AUTHOR: Dolzhenko Andrey
COPYRIGHT: © Dolzhenko Andrey, 2019
LICENSE: MIT License
DESCRIPTION:
Игра позволяет выводить 10 различных фигур заданного размера. 
Размер задает игрок, указывая количество звездочек в основании фигуры.
Нравится детям дошкольного возраста. Им интересно наблюдать, как одна и таже фигура рисуется разными размерами.

MIT License
Copyright (c) 2019 Dolzhenko Andrey

*/

#include<iostream>
using namespace std;

int a;

void Break()
{
	cout << "\nВведенный номер некорректен. Попробуйте запустить программу еще раз!\n";
	cout << "\n\t\t\tП О К А ! ! !\n\n";

}
void Form_1() // Функция для 1-й фигуры
{

	cout << "\nФигура №1.\n\n";
	cout << "\nВведите количество элементов в основании фигуры: \t";

	cin >> a; // Вводимая переменная определяет размер квадрата


	cout << endl << endl;

	for (int i = 0; i < a + 2; i++) // Данный цикл рисует верхнюю границу квадрата
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

	for (int i = 0; i < a; i++) // Данный ЦИКЛ рисует ОСНОВНУЮ ФИГУРУ
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

	
	for (int i = 0; i < a + 2; i++) // Данный цикл рисует нижнюю границу квадрата
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
void Form_2 () // Функция для 2-й фигуры
{
	
	cout << "\nФигура №2.\n\n";
	cout << "\nВведите количество элементов в основании фигуры: \t";

	cin >> a; // Вводимая переменная определяет размер квадрата


	cout << endl << endl;

	for (int i = 0; i < a + 2; i++) // Данный цикл рисует верхнюю границу квадрата
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

	for (int i = 0; i < a; i++) // Данный ЦИКЛ рисует ОСНОВНУЮ ФИГУРУ
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



	for (int i = 0; i < a + 2; i++) // Данный цикл рисует нижнюю границу квадрата
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
void Form_3() // Функция для 3-й фигуры
{

	cout << "\nФигура №3.\n\n";
	cout << "\nВведите количество элементов в основании фигуры: \t";

	cin >> a; // Вводимая переменная определяет размер квадрата


	cout << endl << endl;

	for (int i = 0; i < a + 2; i++) // Данный цикл рисует верхнюю границу квадрата
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

	for (int i = 0; i < a; i++) // Данный ЦИКЛ рисует ОСНОВНУЮ ФИГУРУ
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


	for (int i = 0; i < a + 2; i++) // Данный цикл рисует нижнюю границу квадрата
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
void Form_4() // Функция для 4-й фигуры
{

	cout << "\nФигура №4.\n\n";
	cout << "\nВведите количество элементов в основании фигуры: \t";

	cin >> a; // Вводимая переменная определяет размер квадрата


	cout << endl << endl;

	for (int i = 0; i < a + 2; i++) // Данный цикл рисует верхнюю границу квадрата
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

	for (int i = 0; i < a; i++) // Данный ЦИКЛ рисует ОСНОВНУЮ ФИГУРУ
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


	for (int i = 0; i < a + 2; i++) // Данный цикл рисует нижнюю границу квадрата
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
void Form_5() // Функция для 5-й фигуры
{

	cout << "\nФигура №5.\n\n";
	cout << "\nВведите количество элементов в основании фигуры: \t";

	cin >> a; // Вводимая переменная определяет размер квадрата


	cout << endl << endl;

	for (int i = 0; i < a + 1; i++) // Данный цикл рисует верхнюю границу квадрата
	{
		
		cout << "-";
		
				
	}

	cout << endl;

	for (int i = 0; i < a/2; i++) // Данный ЦИКЛ рисует верхнюю часть ОСНОВНОЙ ФИГУРЫ
	{

		cout << "|";

		
		for (int j = 0; j < a/2; j++) // Левый треугольник
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

		for (int j = 0; j < a / 2; j++) // Правый треугольник
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


	
	for (int i = 0; i < a / 2; i++) // Данный ЦИКЛ рисует нижнюю часть ОСНОВНОЙ ФИГУРЫ
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


	for (int i = 0; i < a + 1; i++) // Данный цикл рисует нижнюю границу квадрата
	{
		cout << "-";
	}


	cout << endl;
	

}
void Form_6() // Функция для 6-й фигуры
{

	cout << "\nФигура №6.\n\n";
	cout << "\nВведите количество элементов в основании фигуры: \t";

	cin >> a; // Вводимая переменная определяет размер квадрата


	cout << endl << endl;

	for (int i = 0; i < a + 1; i++) // Данный цикл рисует верхнюю границу квадрата
	{

		cout << "-";


	}

	cout << endl;

	for (int i = 0; i < a / 2; i++) // Данный ЦИКЛ рисует верхнюю часть ОСНОВНОЙ ФИГУРЫ
	{

		cout << "|";


		for (int j = 0; j < a / 2; j++) // Левый треугольник
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

		for (int j = 0; j < a / 2; j++) // Правый треугольник
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

	
	for (int i = 0; i < a / 2; i++) // Данный ЦИКЛ рисует нижнюю часть ОСНОВНОЙ ФИГУРЫ
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


	for (int i = 0; i < a + 1; i++) // Данный цикл рисует нижнюю границу квадрата
	{
		cout << "-";
	}
	
	cout << endl;
	
}
void Form_7() // Функция для 7-й фигуры
{

	cout << "\nФигура №7.\n\n";
	cout << "\nВведите количество элементов в основании фигуры: \t";

	cin >> a; // Вводимая переменная определяет размер квадрата


	cout << endl << endl;

	for (int i = 0; i < a + 1; i++) // Данный цикл рисует верхнюю границу квадрата
	{

		cout << "-";


	}

	cout << endl;

	for (int i = 0; i < a / 2; i++) // Данный ЦИКЛ рисует верхнюю часть ОСНОВНОЙ ФИГУРЫ
	{

		cout << "|";


		for (int j = 0; j < a / 2; j++) // Левый треугольник
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

		for (int j = 0; j < a / 2; j++) // Правый треугольник
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


	for (int i = 0; i < a / 2; i++) // Данный ЦИКЛ рисует нижнюю часть ОСНОВНОЙ ФИГУРЫ
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


	for (int i = 0; i < a + 1; i++) // Данный цикл рисует нижнюю границу квадрата
	{
		cout << "-";
	}

	cout << endl;

}
void Form_8() // Функция для 8-й фигуры
{

	cout << "\nФигура №8.\n\n";
	cout << "\nВведите количество элементов в основании фигуры: \t";

	cin >> a; // Вводимая переменная определяет размер квадрата


	cout << endl << endl;

	for (int i = 0; i < a + 1; i++) // Данный цикл рисует верхнюю границу квадрата
	{

		cout << "-";


	}

	cout << endl;

	for (int i = 0; i < a / 2; i++) // Данный ЦИКЛ рисует верхнюю часть ОСНОВНОЙ ФИГУРЫ
	{

		cout << "|";


		for (int j = 0; j < a / 2; j++) // Левый треугольник
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

		for (int j = 0; j < a / 2; j++) // Правый треугольник
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


	for (int i = 0; i < a / 2; i++) // Данный ЦИКЛ рисует нижнюю часть ОСНОВНОЙ ФИГУРЫ
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


	for (int i = 0; i < a + 1; i++) // Данный цикл рисует нижнюю границу квадрата
	{
		cout << "-";
	}

	cout << endl;

}
void Form_9() // Функция для 9-й фигуры
{

	cout << "\nФигура №9.\n\n";
	cout << "\nВведите количество элементов в основании фигуры: \t";

	cin >> a; // Вводимая переменная определяет размер квадрата


	cout << endl << endl;

	for (int i = 0; i < a + 2; i++) // Данный цикл рисует верхнюю границу квадрата
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

	for (int i = 0; i < a; i++) // Данный ЦИКЛ рисует ОСНОВНУЮ ФИГУРУ
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


	for (int i = 0; i < a + 2; i++) // Данный цикл рисует нижнюю границу квадрата
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
void Form_10() // Функция для 10-й фигуры
{

	cout << "\nФигура №10.\n\n";
	cout << "\nВведите количество элементов в основании фигуры: \t";

	cin >> a; // Вводимая переменная определяет размер квадрата


	cout << endl << endl;

	for (int i = 0; i < a + 2; i++) // Данный цикл рисует верхнюю границу квадрата
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

	for (int i = 0; i < a; i++) // Данный ЦИКЛ рисует ОСНОВНУЮ ФИГУРУ
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


	for (int i = 0; i < a + 2; i++) // Данный цикл рисует нижнюю границу квадрата
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

	int choice; // переменная для выбора варианта фигуры
		
	cout << "Эта программа позволяет рисовать различные фигуры из любого количества звездочек!\n\n";

	for (int i = 0; ; i++)
	{
		
	

	cout << "\n\nНиже представлены варианты фигур, которые Вы можете нарисовать:\n\n";
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

	cout << "\nВведите номер фигуры, которую хотите нарисовать:\t";

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

	cout << "\n\t\tВЫ ОТЛИЧНЫЙ ХУДОЖНИК ! ! !\n\n";

	cout << "\t\t\t*|*\n";
	cout << "\t\t\t,_,\n";

	int cont;

	cout << "\n\n\tХотите продолжить? Если ДА, введите 1, если НЕТ, введите 2 - "; cin >> cont;

	switch (cont)
	{
	case 1:

		system("cls");
		

		break;

	case 2:

		return 0;

		break;

	default:

		cout << "\n\n\t!!!Введенное число некорректно!!! ";
		cout << "\n\n\tХотите продолжить??? ";
		cout << "\n\n\tЕсли ДА, введите 1, если НЕТ, введите 2 - "; cin >> cont;

		break;

	}
	system("cls");
	}
}