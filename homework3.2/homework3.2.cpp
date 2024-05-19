#include <iostream>
#include <string>

class Counter
{
private:
    int FirstNumber;
public:
    Counter() : FirstNumber(1) {}
    Counter(int Input_From_Main) : FirstNumber(Input_From_Main) {}
    void IncFirstNumber()
    {
        FirstNumber = FirstNumber + 1;
    }
    void DecFirstNumber()
    {
        FirstNumber = FirstNumber - 1;
    }
    void ShowFirstNumber()
    {
        std::cout << FirstNumber << std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian"); // задать русский текст
    std::system("chcp 1251"); // настроить кодировку консоли
    std::system("cls"); // очистить экран
    
    std::string YesNoAction;
    int First_Number_from_main;
    Counter UnbelievableCode{ };
    
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> YesNoAction;
    if (YesNoAction == "да")
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> First_Number_from_main;
        UnbelievableCode = Counter { First_Number_from_main };
    }
    
    for (int i=0; i!=1;)
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> YesNoAction;
        if (YesNoAction == "+")
        {
            UnbelievableCode.IncFirstNumber();
        }
        else if (YesNoAction == "-")
        {
            UnbelievableCode.DecFirstNumber();
        }
        else if (YesNoAction == "=")
        {
            UnbelievableCode.ShowFirstNumber();
        }
        else if (YesNoAction == "x" || YesNoAction == "х" || YesNoAction == "ч")
        {
            i = 1;
            std::cout << "До свидания!";
        }
        else
        {
            std::cout << "Ошибка ввода! Читай внимательно что вводить!";
        }
    }

    return 32;
}