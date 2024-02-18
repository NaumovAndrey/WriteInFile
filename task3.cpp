#include "iostream"
#include <clocale>
#include "vector"
#include "fstream"
#include "string"


/*Реализация программы чтения ведомости*/

std::vector<std::string> findMaxSalaryLines()
{
    std::ifstream file;
    file.open("statement.txt");

    std::string name;
    std::string surname;
    int salary;
    std::string date;

    int maxSalary = 0;
    std::vector<std::string> maxSalaryLines;

    while (file >> name >> surname >> salary >> date)
    {
        if (salary > maxSalary)
        {
            maxSalary = salary;
            maxSalaryLines.clear();
            maxSalaryLines.push_back(name + " " + surname + " " + std::to_string(salary) + " " + date);
        } else if (salary == maxSalary)
        {
            maxSalaryLines.push_back(name + " " + surname + " " + std::to_string(salary) + " " + date);
        }
    }

    file.close();

    return maxSalaryLines;
}

double totalSum()
{
    std::ifstream file;
    file.open("statement.txt");

    std::string name;
    std::string surname;
    double salary;
    std::string data;
    double t_sum = 0;

    while (file >> name >> surname >> salary >> data)
    {
        //std::cout << name << " " << surname << " " << salary << " " << data << std::endl;
        t_sum += salary;
    }
    
    std::cout << std::endl;
    file.close();

    return t_sum;
}

void task3()
{
    setlocale(LC_ALL, "RUS");

    std::vector<std::string> maxSalaryLines = findMaxSalaryLines();
    for (const std::string& line : maxSalaryLines)
    {
        std::cout << line << std::endl;
    }
    
    std::cout << "Выплачено всего: " << totalSum() << " руб." << std::endl;

}