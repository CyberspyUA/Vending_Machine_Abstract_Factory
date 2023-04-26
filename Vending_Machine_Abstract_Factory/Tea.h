#pragma once
#include <string>
class Tea
{
	private:
		std::string tea_name{};
		int cup_size{};
		int sugar_spoons_count{};
	public:
		//����������� �� �������������
		Tea() = default;
		//����������� �� ������ ������� ������� �����
		Tea(std::string name, int size, int count)
		{
			tea_name = name;
			cup_size = size;
			sugar_spoons_count = count;
		}
		//���������� �� �������������
		~Tea() = default;
		//������� ��������� ����� �����
		std::string get_tea_name()
		{
			std::string copy_tea_name{ tea_name };
			return copy_tea_name;
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
		void set_tea_name(std::string new_tea_name)
		{
			tea_name = new_tea_name;
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