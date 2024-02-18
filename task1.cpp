#include "iostream"
#include "vector"
#include "fstream"
#include <string>

/*Разработка программы поиска слов в файле*/

void wordSearch(std::vector<std::string>&vec)
{
    
    std::ifstream file;
    file.open("words.txt");
    
    while (!file.eof())
    {
        std::string text;
        std::getline(file, text);
        vec.push_back(text);
    }
    
    file.close();
}

int coincidences(const std::string& substring, const std::vector<std::string>&vec)
{
    int count = 0;
    for (const std::string& str : vec)
    {
        size_t pos = str.find(substring);
        while (pos != std::string::npos)
        {
            count++;
            pos = str.find(substring, pos + 1);
        }
    }

    return count;
}

void task1()
{
    std::vector<std::string> vec;
    wordSearch(vec);

    std::string substring = "Россия";
    std::cout << coincidences(substring, vec);
}