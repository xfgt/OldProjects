// Задачи

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

	2.	ifstream - когато ЧЕТЕМ данни
		ofstream - когато ЗАПИСВАМЕ данни

		fstream -  когато искаме да четем и записваме данни от/във файлове

	3.	ПРОЦЕСЪТ Е ЗАЕТ, ДАННИТЕ НЕ СЕ ЗАПИСВАТ.
	4.	ВРЪЩА СТОЙНОСТ FALSE, АКО ПРЕДВАРИТЕЛНО НЕ Е ЗАДАДЕН НАЧИН ЗА РАБОТА С ФАЙЛА (std::ios_base::out) В КОНСТРУКТОРА, КОЙТО ДА СЪЗДАДЕ ФАЙЛА.
	5.	процесът е зает и се връща резултат "false" от обекта, в който искаме да четем/пишем.
	6.	чрез "избягващи символи"; т.е \<символ>, като в случая е '\', получавайки се '\\'
	
	7.	
			#include <iostream>

			int main () {
			  // текст в число
			  std::string txt = "3.14";
			  std::cout << txt << std::endl;

			  float num = stof(txt, 0);
			  // проверка
			  std::cout << num+1 << std::endl;


			  // число в текст
			  std::string tr = std::to_string(num);
			  // проверка
			  std::cout << tr + 's' << std::endl;



			  return 0;
			}
	
	8.	последователен достъп има предвид обхождане на ВСЕКИ СИМВОЛ ОТ ФАЙЛА докато не се стигне търсената стойност.
		пряк или т.нар. директен достъп взема кординатите на символа (ТОЕСТ АДРЕСА) и ако съществуват отива на точната му позиция
	
	9.	текстовите файлове са всички файлове на които е възможно да се приложи някакъв encoding, който да ни позволи да четем текст от него
		двоичните файлове са машинни файлове, чието значение се разбира само от компютъра. Поредността на символите, които са от всякакъв вид, е конкретно определена и може да се "декодира" само ако ни е известна.
	
	10.	- get взима НЕФОРМАТИРАН символ от файловия поток
		- put вмъква символ във файловия поток
		- МЕСТИМ ГИ С SEEKG, SEEKP ЧЛЕН ФУНКЦИИТЕ НА КЛАСА
		- ОПРЕДЕЛЯМЕ ТЕХНИТЕ ПОЗИЦИИ ЧРЕЗ TELLG, TELLP ЧЛЕН ФУНКЦИИТЕ НА КЛАСА
		- типът данни е long int ЗАЩОТО Е ЧАСТ ОТ КЛАСА STREAMPOS, И ЗАЩОТО Е НУЖНО ДА СЕ ИНТЕРПРЕТИРА ПОЗИЦИЯТА ОТ ПАМЕТТА ПОД ФОРМАТА НА ЧИСЛО
	
	11. за средата на файла преценяваме размерите на файла в байтовe И ПОЗИЦИОНИРАМЕ PUT ИЛИ GET УКАЗАТЕЛЯ СПРЯМО СЪОТВЕТНАТА ИЗЧИСЛЕНА СТОЙНОСТ ПРИЕТА ЗА ПОЛОВИНА
		начало - file.seekg(pos, std::ios_base::beg);
		край - file.seekg(pos, std::ios_base::end);
		
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


			Връща число, което представлява броят прочетени символи до края на файла.

			файлът съдържа (всичко без къдравите скоби)


			{
				
				liahsdvgopahiuvgphiagpihva iphbj aipv hbfa ipvua iuphba iphbga

			}

			което се брои за 66 символа, вкл. и празните места


*/


/*

	задача 1* :

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

		// липсва извеждане на брой думи и редове



		f.close();
		return 0;
	}

	
*/