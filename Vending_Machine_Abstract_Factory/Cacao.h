#pragma once
#include <string>
class Cacao
{
private:
	std::string cacao_name{};
	int cup_size{};
	int sugar_spoons_count{};
public:
	//����������� �� �������������
	Cacao() = default;
	//����������� �� ������ ������� ������� �����
	Cacao(std::string name, int size, int count)
	{
		cacao_name = name;
		cup_size = size;
		sugar_spoons_count = count;
	}
	//���������� �� �������������
	~Cacao() = default;
	//������� ��������� ����� �����
	std::string get_cacao_name()
	{
		std::string copy_cacao_name {cacao_name};
		return copy_cacao_name;
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
	void set_cacao_name(std::string new_cacao_name)
	{
		cacao_name = new_cacao_name;
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