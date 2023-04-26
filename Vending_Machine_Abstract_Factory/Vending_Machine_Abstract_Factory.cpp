#include <iostream>
#include "Cacao_Vending_Machine.h"
#include "Coffee_Vending_Machine.h"
#include "Tea_Vending_Machine.h"
//�����i� ������
void drink_options_show();
void cacao_options_show();
void tea_options_show();
void coffee_options_show();
void manual_show();
//�����i� ��������i�
bool sugar_suggestion();
int cup_suggestion();

int main()
{
    setlocale(0, ".1251");
	bool terminate_program{};
    manual_show();
	while (!terminate_program)
	{
        //
        
        int menu_choice{};
        std::cin >> menu_choice;
        std::cout << "\n";
        switch (menu_choice)
        {
            case 1:
            {
                drink_options_show();
                std::cout << "������! ���� ���i� �� ������ ����������?\n";
                bool is_drink_chosen{false};
                int drink_choice{};
                while (!is_drink_chosen)
                {
                    std::cin >> drink_choice;
                    switch (drink_choice)
                    {
                    case 1:
                    {
                        coffee_options_show();
                        int coffee_choice{};
                        std::cin >> coffee_choice;
                        switch (coffee_choice)
                        {
                        case 1:
                        {
                            std::string name{ "���������" };
                            is_drink_chosen = true;
                            Coffee_Vending_Machine machine;
                            int sugar_spoons{};
                            bool sugar_choice{ sugar_suggestion() };
                            if (sugar_choice)
                            {
                                sugar_spoons = machine.sugar_adding();
                            }
                            int cup_size{ cup_suggestion() };
                            machine.brewing(name, cup_size, sugar_spoons);
                            break;
                        }
                        case 2:
                        {
                            std::string name{ "���������" };
                            is_drink_chosen = true;
                            Coffee_Vending_Machine machine;
                            int sugar_spoons{};
                            bool sugar_choice{ sugar_suggestion() };
                            if (sugar_choice)
                            {
                                sugar_spoons = machine.sugar_adding();
                            }
                            int cup_size{ cup_suggestion() };
                            machine.brewing(name, cup_size, sugar_spoons);
                            break;
                        }
                        case 3:
                        {
                            std::string name{ "������i��" };
                            is_drink_chosen = true;
                            Coffee_Vending_Machine machine;
                            int sugar_spoons{};
                            bool sugar_choice{ sugar_suggestion() };
                            if (sugar_choice)
                            {
                                sugar_spoons = machine.sugar_adding();
                            }
                            int cup_size{ cup_suggestion() };
                            machine.brewing(name, cup_size, sugar_spoons);
                            break;
                        }
                        default:
                        {
                            std::cout << "������� �� ��������� ��������. ��������� �� ���.\n";
                            break;
                        }
                        }
                        break;
                    }
                    case 2:
                    {
                        tea_options_show();
                        int tea_choice{};
                        std::cin >> tea_choice;
                        switch (tea_choice)
                        {
                        case 1:
                        {
                            std::string name{ "������ ���" };
                            is_drink_chosen = true;
                            Tea_Vending_Machine machine;
                            int sugar_spoons{};
                            bool sugar_choice{ sugar_suggestion() };
                            if (sugar_choice)
                            {
                                sugar_spoons = machine.sugar_adding();
                            }
                            int cup_size{ cup_suggestion() };
                            machine.brewing(name, cup_size, sugar_spoons);
                            break;
                        }
                        case 2:
                        {
                            std::string name{ "������� ���" };
                            is_drink_chosen = true;
                            Tea_Vending_Machine machine;
                            int sugar_spoons{};
                            bool sugar_choice{ sugar_suggestion() };
                            if (sugar_choice)
                            {
                                sugar_spoons = machine.sugar_adding();
                            }
                            int cup_size{ cup_suggestion() };
                            machine.brewing(name, cup_size, sugar_spoons);
                            break;
                        }
                        case 3:
                        {
                            std::string name{ "�������� ���" };
                            is_drink_chosen = true;
                            Tea_Vending_Machine machine;
                            int sugar_spoons{};
                            bool sugar_choice{ sugar_suggestion() };
                            if (sugar_choice)
                            {
                                sugar_spoons = machine.sugar_adding();
                            }
                            int cup_size{ cup_suggestion() };
                            machine.brewing(name, cup_size, sugar_spoons);
                            break;
                        }
                        default:
                        {
                            std::cout << "������� �� ��������� ��������. ��������� �� ���.\n";
                            break;
                        }
                        }
                        break;
                        break;
                    }
                    case 3:
                    {
                        cacao_options_show();
                        int cacao_choice{};
                        std::cin >> cacao_choice;
                        switch (cacao_choice)
                        {
                        case 1:
                        {

                            std::string name{ "����i������ �����" };
                            is_drink_chosen = true;
                            Cacao_Vending_Machine machine;
                            int sugar_spoons{};
                            bool sugar_choice{ sugar_suggestion() };
                            if (sugar_choice)
                            {
                                sugar_spoons = machine.sugar_adding();
                            }
                            int cup_size{ cup_suggestion() };
                            machine.brewing(name, cup_size, sugar_spoons);
                            break;
                        }
                        case 2:
                        {
                            std::string name{ "����� �����" };
                            is_drink_chosen = true;
                            Cacao_Vending_Machine machine;
                            int sugar_spoons{};
                            bool sugar_choice{ sugar_suggestion() };
                            if (sugar_choice)
                            {
                                sugar_spoons = machine.sugar_adding();
                            }
                            int cup_size{ cup_suggestion() };
                            machine.brewing(name, cup_size, sugar_spoons);
                            break;
                        }
                        case 3:
                        {
                            std::string name{ "������� �������" };
                            is_drink_chosen = true;
                            Cacao_Vending_Machine machine;
                            int sugar_spoons{};
                            bool sugar_choice{ sugar_suggestion() };
                            if (sugar_choice)
                            {
                                sugar_spoons = machine.sugar_adding();
                            }
                            int cup_size{ cup_suggestion() };
                            machine.brewing(name, cup_size, sugar_spoons);
                            break;
                        }
                        default:
                        {
                            std::cout << "������� �� ��������� ��������. ��������� �� ���.\n";
                            break;
                        }
                        }
                        break;
                        break;
                    }
                    default:
                    {
                        std::cout << "������� �� ��������� ��������. ��������� �� ���.\n";
                        break;
                    }
                    }
                }
                    
             break;
            }
            
            case 2:
            {
                drink_options_show();
                break;
            }
            
            case 3:
            {
                manual_show();
                break;
            }
           
            case 4:
            {
                terminate_program = false;
                break;
            }
            
            default:
            {
                std::cout << "������� �� ��������� ��������. ��������� �� ���.\n";
                break;
            }  
        }
        terminate_program = true;
	}
}
void drink_options_show()
{
    std::cout << "1)����:\t 2)���\t 3)�����"
        << "  *���������\t  *������\t  *����i������\n"
        << "  *���������\t  *�������\t  *�����\n"
        << "  *������i��\t  *��������\t  *������� �������\n";
}
void cacao_options_show()
{
    std::cout 
            << "  1)����i������\n"
            << "  2)�����\n"
            << "  3)������� �������\n";
        
}
void tea_options_show()
{
    std::cout
        << "  1)������\n"
        << "  2)�������\n"
        << "  3)��������\n";
}
void coffee_options_show()
{
    std::cout
        << "  1)���������\n"
        << "  2)���������\n"
        << "  3)������i��\n";
}
bool sugar_suggestion()
{
    bool is_sugar_needed{};
        std::cout << "����� ����i���?\n";
        std::cout << "1 - ���, 0 - �i \n";
        std::cin >> is_sugar_needed;
        if (is_sugar_needed == 1 || is_sugar_needed == 0)
            return is_sugar_needed;
}
int cup_suggestion()
{
    
    while (true)
    {
        int cup_choice{};
        std::cout << "\t����i�� ����i� ������� ����� ��������������:\n"
            << "1) 100 ��\n"
            << "2) 200 ��\n"
            << "3) 300 ��\n"
            << "4) 400 ��\n"
            << "5) 500 ��\n";
        std::cin >> cup_choice;
        switch (cup_choice)
        {
            case 1:
                return 100;
                break;
            case 2:
                return 200;
                break;
            case 3:
                return 300;
                break;
            case 4:
                return 400;
                break;
            case 5:
                return 500;
                break;
            default:
            {
                std::cout << "������� �� ��������� ��������. ��������� �� ���.\n";
                break;
            }       
        }
    }
    
}
void manual_show()
{
    std::cout << "\t\t�i��� �������� ��i����! \n"
        << "\t �� ���i���� ��������� �������� ������i� Struk.corp\n"
        << "\t � ����� ��� ���� �����. �� ������ ������� ���� � ��� ��� �i��������� �� �������� �������.\n"
        << "\t ���� ���i� ���� ������, � ������ �������� ����.\n"
        << "\t ��������� ���� ������ ����� �� �����.\n"
        << "\t ���� � ��� ���������� �������, �� ������ �i�������� �� ���i��������, �������� ����� 3\n";



    std::cout << "\t ���� �����, ����i�� � ����i����� ����� �i� 1 �� 4.\n"
        << "\t �������i ���i����:\n"
        << "1) ������ ���i�\n"
        << "2) �������� ��i ����\n"
        << "3) �������� ���� ���i���\n"
        << "4) ����� � ��������� ��������.\n";
}