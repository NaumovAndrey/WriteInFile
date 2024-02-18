#include "iostream"
#include <fstream>

bool isPNG(const std::string& filePath)
{
    std::ifstream file(filePath, std::ios::binary);
    if (!file)
    {
        std::cerr << "������ ��� �������� �����" << std::endl;
        return false;
    }

    char header[8];
    file.read(header, 8);

    if (header[0] == -119 && header[1] == 'P' && header[2] == 'N' && header[3] == 'G')
    {
        return true;
    }

    return false;
}

void task4()
{
    setlocale(LC_ALL, "RUS");


    std::string filePath = "i.png";
    if (isPNG(filePath))
    {
        std::cout << "���� PNG." << std::endl;
    } else
    {
        std::cout << "���� �� PNG." << std::endl;
    }

}