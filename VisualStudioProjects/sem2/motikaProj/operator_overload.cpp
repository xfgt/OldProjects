#include "Motika.h"



Motika& Motika::operator++() { // ++obj
    //this->duljina++;
    this->setDuljina(this->getDuljina() + 1);

    return *this;
}
// this � �������� ��� ���������� ����� � ����� �������
// Motika& � �� ����������  � ������� ����� �� ���������� �����

// ������������ ����������� �� ���������� �����
// � ������� ���� �� ��������

Motika Motika::operator++(int) {  // obj++
    Motika m = *this;
    this->setDuljina(this->getDuljina() + 1);

    return m;
}

// ����� ���������� ����� ���� �� �������� � m
// ������������ ���������� �� ���������� �����
// �� ������� ���������� �� ��������.