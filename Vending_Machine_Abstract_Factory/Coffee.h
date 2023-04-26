#pragma once
#include <string>
class Coffee
{
private:
	std::string coffee_name{};
	int cup_size{};
	int sugar_spoons_count{};
public:
	//Конструктор за замовчуванням
	Coffee() = default;
	//Конструктор із повним набором вхідних даних
	Coffee(std::string name, int size, int count)
	{
		coffee_name = name;
		size = cup_size;
		count = sugar_spoons_count;
	}
	//Деструктор за замовчуванням
	~Coffee() = default;
	//Функція отримання назви напою
	std::string get_coffee_name()
	{
		std::string copy_coffee_name{ coffee_name };
		return copy_coffee_name;
	}
	//Функція отримання розміру стакану
	int get_cup_size()
	{
		int copy_cup_size{ cup_size };
		return copy_cup_size;
	}
	//Функція отримання кількості ложок цукру, які необхідно додати у напій
	int get_sugar_spoons_count()
	{
		int copy_sugar_spoons_count{ sugar_spoons_count };
		return copy_sugar_spoons_count;
	}
	//Функція задання нового імені напою
	void set_coffee_name(std::string new_coffee_name)
	{
		coffee_name = new_coffee_name;
	}
	//Функція задання нового розміру стакану
	void set_cup_size(int new_cup_size)
	{
		cup_size = new_cup_size;
	}
	//Функція задання нової кількості ложок цукру
	void set_sugar_spoons_count(int new_sugar_spoons_count)
	{
		sugar_spoons_count = new_sugar_spoons_count;
	}
};