#include "iostream"
#include <conio.h>
#include <clocale>
#include <cstdlib>

void lesson();
void task1();
void task2();
void task3();
void task4();
void task5();

int main()
{
    setlocale(LC_ALL, "rus");
    std::cout << "�������� ������ � ������ ������. ������ �� ������" << std::endl;

    while (true)
    {
        std::cout << "0: lesson" << std::endl;
        std::cout << "1: ���������� ��������� ������ ���� � �����" << std::endl;
        std::cout << "2: ���������� ������������ ��������� ������" << std::endl;
        std::cout << "3: ���������� ��������� ������ ���������" << std::endl;
        std::cout << "4: ���������� ��������� PNG-�����" << std::endl;
        std::cout << "5: ���������� ���� ����? ���? �����?" << std::endl;
        std::cout << "������� ����� �� 0 �� 5 ��� ���-�� ������ ��� ������: ";

        int task = 5;
        //std::cin >> task;

        if (task == 0)
        {
            system("cls");
            std::cout << "lesson" << std::endl;
            lesson();
            _getch();
            system("cls");
        }

        else if (task == 1)
        {
            system("cls");
            std::cout << "������ 1 ���������� ��������� ������ ���� � �����" << std::endl;
            task1();
            _getch();
            system("cls");;
        } 
        else if (task == 2)
        {
            system("cls");
            std::cout << "������ 2 ���������� ������������ ��������� ������" << std::endl;
            task2();
            _getch();
            system("cls");;
        } 
        else if (task == 3)
        {
            system("cls");
            std::cout << "������ 3 ���������� ��������� ������ ���������" << std::endl;
            task3();
            _getch();
            system("cls");;
        } 
        else if (task == 4)
        {
            system("cls");
            std::cout << "������ 4 ���������� ��������� PNG-�����" << std::endl;
            task4();
            _getch();
            system("cls");;
        }
        else if (task == 5)
        {
            system("cls");
            std::cout << "������ 5 ���������� ���� ����? ���? �����?" << std::endl;
            task5();
            _getch();
            system("cls");;
        }
        else
        {
            system("cls");
            std::cout << "������������ ����. ����� �� ���������";
            break;
        }
    }
}