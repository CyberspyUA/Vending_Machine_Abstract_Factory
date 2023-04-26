#pragma once
#include <string>
class Coffee
{
private:
	std::string coffee_name{};
	int cup_size{};
	int sugar_spoons_count{};
public:
	//����������� �� �������������
	Coffee() = default;
	//����������� �� ������ ������� ������� �����
	Coffee(std::string name, int size, int count)
	{
		coffee_name = name;
		size = cup_size;
		count = sugar_spoons_count;
	}
	//���������� �� �������������
	~Coffee() = default;
	//������� ��������� ����� �����
	std::string get_coffee_name()
	{
		std::string copy_coffee_name{ coffee_name };
		return copy_coffee_name;
	}
	//������� ��������� ������ �������
	int get_cup_size()
	{
		int copy_cup_size{ cup_size };
		return copy_cup_size;
	}
	//������� ��������� ������� ����� �����, �� ��������� ������ � ����
	int get_sugar_spoons_count()
	{
		int copy_sugar_spoons_count{ sugar_spoons_count };
		return copy_sugar_spoons_count;
	}
	//������� ������� ������ ���� �����
	void set_coffee_name(std::string new_coffee_name)
	{
		coffee_name = new_coffee_name;
	}
	//������� ������� ������ ������ �������
	void set_cup_size(int new_cup_size)
	{
		cup_size = new_cup_size;
	}
	//������� ������� ���� ������� ����� �����
	void set_sugar_spoons_count(int new_sugar_spoons_count)
	{
		sugar_spoons_count = new_sugar_spoons_count;
	}
};