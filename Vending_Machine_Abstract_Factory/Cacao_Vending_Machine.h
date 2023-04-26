#pragma once
#include "./Vending_Machine.h"
#include "./Cacao.h"
class Cacao_Vending_Machine : public Abstract_Vending_Machine
{
public:

	int sugar_adding() const override
	{
		int new_sugar_spoons_count{ 1 };
		while (true)
		{
			std::cout << "����� ���������? " << "����� ����� - " << new_sugar_spoons_count << "\n";
			std::cout << "1 - ���, 0 - �i" << "\n";
			int choice{};
			std::cin >> choice;
			if (choice == 1)
			{
				return new_sugar_spoons_count;
				break;
			}
			else if (choice == 0)
			{
				new_sugar_spoons_count++;
				continue;
			}
			else
			{
				std::cout << "������� ���i��� ��������. ��������� �� ���.";
			}
		}
	}
	void brewing(std::string name, int cup_size, int sugar_spoons) const override
	{
		Cacao cacao;
		cacao.set_cacao_name(name);
		cacao.set_cup_size(cup_size);
		cacao.set_sugar_spoons_count(sugar_spoons);
		std::cout << "���������� ������ ������������." << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(5000));
		std::cout << "���'��� ���� �� ������." << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(30000));
		std::cout << "����� ����� �������" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(5000));
		std::cout << "����� �i�����i ������������." << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(20000));
		std::cout << "��� ���i� �������!" << std::endl;
		std::cout << "\t ���� ����������:" << std::endl;
		std::cout << "����� �����: " << cacao.get_cacao_name() << std::endl;
		std::cout << "��'�� �������: " << cacao.get_cup_size() << std::endl;
		std::cout << "����� ����� � ����: " << cacao.get_sugar_spoons_count() << std::endl;
	}
};