#include "iostream"
#include "string"
#include <clocale>
#include "fstream"

/*Разработка просмотрщика текстовых файлов*/

void readFile(const char* f)
{
    std::ifstream file(f);

    if (!file.is_open())
    {
        std::cerr << "Ошибка при открытии файла" << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line))
    {
        std::cout << line << std::endl;
    }

    file.close();
}

void task2()
{
    setlocale(LC_ALL, "RUS");

    const char* file = "words.txt";
    readFile(file);
}