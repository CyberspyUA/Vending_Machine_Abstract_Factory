#include <iostream>
#include "Cacao_Vending_Machine.h"
#include "Coffee_Vending_Machine.h"
#include "Tea_Vending_Machine.h"
//Функцiї виводу
void drink_options_show();
void cacao_options_show();
void tea_options_show();
void coffee_options_show();
void manual_show();
//Функцiї пропозицiї
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
                std::cout << "Чудово! Який напiй ви бажаєте спробувати?\n";
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
                            std::string name{ "Есспрессо" };
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
                            std::string name{ "Американо" };
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
                            std::string name{ "Каппучiно" };
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
                            std::cout << "Введено не корректне значення. Спробуйте ще раз.\n";
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
                            std::string name{ "Чорний чай" };
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
                            std::string name{ "Зелений чай" };
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
                            std::string name{ "Червоний чай" };
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
                            std::cout << "Введено не корректне значення. Спробуйте ще раз.\n";
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

                            std::string name{ "Оригiнальне какао" };
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
                            std::string name{ "Пряне какао" };
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
                            std::string name{ "Гарячий шоколад" };
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
                            std::cout << "Введено не корректне значення. Спробуйте ще раз.\n";
                            break;
                        }
                        }
                        break;
                        break;
                    }
                    default:
                    {
                        std::cout << "Введено не корректне значення. Спробуйте ще раз.\n";
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
                std::cout << "Введено не корректне значення. Спробуйте ще раз.\n";
                break;
            }  
        }
        terminate_program = true;
	}
}
void drink_options_show()
{
    std::cout << "1)Кава:\t 2)Чай\t 3)Какао"
        << "  *Есспрессо\t  *Чорний\t  *Оригiнальне\n"
        << "  *Американо\t  *Зелений\t  *Пряне\n"
        << "  *Каппучiно\t  *Червоний\t  *Гарячий шоколад\n";
}
void cacao_options_show()
{
    std::cout 
            << "  1)Оригiнальне\n"
            << "  2)Пряне\n"
            << "  3)Гарячий шоколад\n";
        
}
void tea_options_show()
{
    std::cout
        << "  1)Чорний\n"
        << "  2)Зелений\n"
        << "  3)Червоний\n";
}
void coffee_options_show()
{
    std::cout
        << "  1)Есспрессо\n"
        << "  2)Американо\n"
        << "  3)Каппучiно\n";
}
bool sugar_suggestion()
{
    bool is_sugar_needed{};
        std::cout << "Цукор потрiбен?\n";
        std::cout << "1 - так, 0 - нi \n";
        std::cin >> is_sugar_needed;
        if (is_sugar_needed == 1 || is_sugar_needed == 0)
            return is_sugar_needed;
}
int cup_suggestion()
{
    
    while (true)
    {
        int cup_choice{};
        std::cout << "\tОберiть розмiр стакану серед запропонованих:\n"
            << "1) 100 мл\n"
            << "2) 200 мл\n"
            << "3) 300 мл\n"
            << "4) 400 мл\n"
            << "5) 500 мл\n";
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
                std::cout << "Введено не корректне значення. Спробуйте ще раз.\n";
                break;
            }       
        }
    }
    
}
void manual_show()
{
    std::cout << "\t\tВiтаю шановний клiєнте! \n"
        << "\t Це помiчник торгового автомата компанiї Struk.corp\n"
        << "\t Я надам вам меню напоїв. Ви можете вибрати один з них або вiдмовитися та полишити додаток.\n"
        << "\t Коли напiй буде обрано, я одразу приготую його.\n"
        << "\t Додатково можу подати цукор до напою.\n"
        << "\t Якщо у вас залишилися питання, ви можете вiдтворити це повiдомлення, набравши цифру 3\n";



    std::cout << "\t Будь ласка, введiть з клавiатури число вiд 1 до 4.\n"
        << "\t Доступнi варiанти:\n"
        << "1) Обрати напiй\n"
        << "2) Показати всi напої\n"
        << "3) Показати меню довiдки\n"
        << "4) Вийти з торгового автомата.\n";
}