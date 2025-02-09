// ������

// 1.

#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::ifstream f("Hello.txt", std::ios::out);

	std::string w;
	f >> w;
	std::cout << w;
	std::getline(f, w);
	std::cout << w;


	f.close();
	return 0;
}





/*

	2.	ifstream - ������ ����� �����
		ofstream - ������ ��������� �����

		fstream -  ������ ������ �� ����� � ��������� ����� ��/��� �������

	3.	�������� � ����, ������� �� �� ��������.
	4.	����� �������� FALSE, ��� ������������� �� � ������� ����� �� ������ � ����� (std::ios_base::out) � ������������, ����� �� ������� �����.
	5.	�������� � ���� � �� ����� �������� "false" �� ������, � ����� ������ �� �����/�����.
	6.	���� "��������� �������"; �.� \<������>, ���� � ������ � '\', ����������� �� '\\'
	
	7.	
			#include <iostream>

			int main () {
			  // ����� � �����
			  std::string txt = "3.14";
			  std::cout << txt << std::endl;

			  float num = stof(txt, 0);
			  // ��������
			  std::cout << num+1 << std::endl;


			  // ����� � �����
			  std::string tr = std::to_string(num);
			  // ��������
			  std::cout << tr + 's' << std::endl;



			  return 0;
			}
	
	8.	�������������� ������ ��� ������� ��������� �� ����� ������ �� ����� ������ �� �� ������ ��������� ��������.
		���� ��� �.���. �������� ������ ����� ����������� �� ������� (����� ������) � ��� ����������� ����� �� ������� �� �������
	
	9.	���������� ������� �� ������ ������� �� ����� � �������� �� �� ������� ������� encoding, ����� �� �� ������� �� ����� ����� �� ����
		��������� ������� �� ������� �������, ����� �������� �� ������� ���� �� ���������. ����������� �� ���������, ����� �� �� �������� ���, � ��������� ���������� � ���� �� �� "��������" ���� ��� �� � ��������.
	
	10.	- get ����� ������������ ������ �� �������� �����
		- put ������ ������ ��� �������� �����
		- ������ �� � SEEKG, SEEKP ���� ��������� �� �����
		- ���������� ������� ������� ���� TELLG, TELLP ���� ��������� �� �����
		- ����� ����� � long int ������ � ���� �� ����� STREAMPOS, � ������ � ����� �� �� ������������ ��������� �� ������� ��� ������� �� �����
	
	11. �� ������� �� ����� ����������� ��������� �� ����� � ������e � ������������� PUT ��� GET ��������� ������ ����������� ��������� �������� ������ �� ��������
		������ - file.seekg(pos, std::ios_base::beg);
		���� - file.seekg(pos, std::ios_base::end);
		
	12.		#include <iostream>
			#include <fstream>



			int main()
			{
				std::fstream f;
				f.open("nz.txt");
				f.seekg(NULL, std::ios_base::end);
				std::cout << f.tellg();

    
				return 0;
			}


			����� �����, ����� ������������ ����� ��������� ������� �� ���� �� �����.

			������ ������� (������ ��� ��������� �����)


			{
				
				liahsdvgopahiuvgphiagpihva iphbj aipv hbfa ipvua iuphba iphbga

			}

			����� �� ���� �� 66 �������, ���. � �������� �����


*/


/*

	������ 1* :

	#include <iostream>
	#include <fstream>
	#include <string>



	int main()
	{
		std::fstream f;
		std::string name;
		std::cout << "Enter file name: ";
		std::getline(std::cin, name);

		f.open(name);

		if(!f){
			std::cerr << "File cannot be opened!";
			return 1;
		}
		f.seekg(NULL, std::ios_base::end);
		long symbs = f.tellg();
		std::cout << "symbols = " << symbs << std::endl;

		// ������ ��������� �� ���� ���� � ������



		f.close();
		return 0;
	}

	
*/