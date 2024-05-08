// homework3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Counter
{
private:
    int FirstNumber;

public:
    int GetterForNumber()
    {
        return FirstNumber;
    }

    void SetterForFirstNumber(int FirstNumber)
    {
        this->FirstNumber = FirstNumber;
    }

    Counter(int Input_From_Main) : FirstNumber(Input_From_Main)
    {
    }

    void IncFirstNumber();
    void DecFirstNumber();
    void ShowFirstNumber();

};



void Counter::IncFirstNumber()
{
    SetterForFirstNumber(GetterForNumber() + 1);
}

void Counter::DecFirstNumber() 
{
    SetterForFirstNumber(GetterForNumber() - 1);
}

void Counter::ShowFirstNumber()
{
    std::cout << GetterForNumber() << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian"); // задать русский текст
    std::system("chcp 1251"); // настроить кодировку консоли
    std::system("cls"); // очистить экран
    
    std::string YesNoAction;
    int FirstNumber;
    Counter UnbelievableCode{1};

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> YesNoAction;
    if (YesNoAction == "да")
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> FirstNumber;
        UnbelievableCode.SetterForFirstNumber(FirstNumber);
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

    return 2;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
