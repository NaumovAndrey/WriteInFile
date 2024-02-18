#include <iostream>
#include <fstream>
#include <string>
#include "vector"

void wallet()
{
    std::ifstream bank;
    bank.open("bankInt.txt");
    int money;
    bank >> money;
    bank >> money;
    std::cout << money << std::endl;
    bank.close();
}

void wallet2()
{
    std::ifstream bank;
    bank.open("bankDouble.txt");
    double money;
    bank >> money;
    std::cout << money << std::endl;
    bank.close();
}

void wallet3()
{
    std::ifstream bank;
    bank.open("bank2.txt");
    int money;
    std::string currency;
    bank >> money >> currency;
    std::cout << money << " " << currency << std::endl;
    bank.close();
}

void walletBinary()
{
    char buffer[20];
    std::ifstream bank;
    bank.open("bank2.txt", std::ios::binary);
    bank.read(buffer, sizeof(buffer));
    for (size_t i = 0; i < 20; i++)
    {
        std::cout << buffer[i];
    }
    bank.close();
}

void walletBinary2()
{
    char buffer[20];
    std::ifstream bank;
    bank.open("bank2.txt", std::ios::binary);
    bank.read(buffer, sizeof(buffer));
    buffer[19] = 0;
    std::cout << buffer << std::endl;
    bank.close();
}

void walletBinary3()
{
    char buffer[20];
    std::ifstream bank;
    bank.open("bank2.txt", std::ios::binary);
    int value;
    bank.read((char*)&value, sizeof(int));
    std::cout << value << std::endl;
    bank.close();
}

void walletBinary4()
{
    double purse[4];
    std::ifstream bank;
    bank.open("bankDouble.txt");
    //bank.read((char*)purse, sizeof(purse));
   
    for (size_t i = 0; i < 4; ++i)
    {
        bank >> purse[i];
        std::cout << purse[i] << " ";
    }

    bank.close();
}

void walletBinary5()
{
    double purse[50];
    std::ifstream bank;
    bank.open("bankDouble.txt");
    int count = 0; //���������� ��������� � �����
    while (!bank.eof()) // ��������� ���� �� �������� ����� �����
    {
        bank >> purse[count];
        count += 1;
    }
    for (size_t i = 0; i < count; i++)
    {
        std::cout << purse[i] << " ";
    }
    bank.close();
}

void vec()
{
    std::vector<double> vec;
    std::ifstream bank;
    bank.open("bankDouble.txt");
    double sum = 0;
    while (!bank.eof()) // ��������� ���� �� �������� ����� �����
    {
        double money;
        bank >> money;
        vec.push_back(money);
    }
    
    /*������ ����� �����*/
    for (size_t i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }
    std::cout << sum << std::endl;

    bank.close();
}

void lesson() {
    //wallet(); //������ �� ����� int
    //wallet2(); //������ �� ����� double
    //wallet3(); //������ �� ����� int, string
    //walletBinary(); //�������� 20 ���� �����
    //walletBinary2(); // ���� �����, �������� 20 ���� ����� 
    //walletBinary3(); //����
    //walletBinary4();
    //walletBinary5();
    //vec();


     


    /*std::ifstream bank;
    bank.open("bank.txt", std::ios::in);

    int money;
    std::string currency;

    if (!bank.is_open()) {
        std::cerr << "The file cannot be opened" << std::endl;
        return 1;
    }

    bank.setf(std::ios::skipws);

    while (bank >> money >> currency) {
        std::cout << money << " " << currency << std::endl;
    }

    bank.close();*/
}
