#pragma once
#include <string>
class Tea
{
	private:
		std::string tea_name{};
		int cup_size{};
		int sugar_spoons_count{};
	public:
		//Конструктор за замовчуванням
		Tea() = default;
		//Конструктор із повним набором вхідних даних
		Tea(std::string name, int size, int count)
		{
			tea_name = name;
			cup_size = size;
			sugar_spoons_count = count;
		}
		//Деструктор за замовчуванням
		~Tea() = default;
		//Функція отримання назви напою
		std::string get_tea_name()
		{
			std::string copy_tea_name{ tea_name };
			return copy_tea_name;
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
		void set_tea_name(std::string new_tea_name)
		{
			tea_name = new_tea_name;
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