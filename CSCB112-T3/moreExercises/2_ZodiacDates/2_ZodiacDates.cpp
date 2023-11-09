#include <iostream>
#include <string>

int main()
{
    int day, month;
    std::string zodiac = "";

    std::cin >> day;
    std::cin >> month;

    if (day > 0 && day <= 31) {
        if (month > 0 && month <= 12) {
            

            /*
            
                Козирог (22.12-19.01),
                водолей (20.01-18.02),
                Риби (19.02-20.03),
                Овен (21.03-19.04), 
                Телец (20.04-20.05),
                Близнаци (21.05-21.06),
                Рак (22.06-22.07),
                Лъв (23.07-22.08),
                Дева (23.08-22.09),
                Везни (23.09-22.10),
                Скорпион (23.10-22.11),
                Стрелец (23.11-21.12),
                
            */

            switch (month) {

            case 1:
                if (day <= 19) {
                    zodiac = "Capricorn";
                }
                else {
                    zodiac = "Aquarius";
                }
                break;
            case 2:
                if (day <= 18) {
                    zodiac = "Aquarius";
                }
                else {
                    zodiac = "Pisces";
                }
                break;
            case 3:
                if (day <= 20) {
                    zodiac = "Pisces";
                }
                else {
                    zodiac = "Aries";
                }
                break;
            case 4:
                if (day <= 19) {
                    zodiac = "Aries";
                }
                else {
                    zodiac = "Taurus";
                }
                break;
            case 5:
                if (day <= 20) {
                    zodiac = "Taurus";
                }
                else {
                    zodiac = "Gemini";
                }
                break;
            case 6:
                if (day <= 21) {
                    zodiac = "Gemini";
                }
                else {
                    zodiac = "Cancer";
                }
                break;
            case 7:
                if (day <= 22) {
                    zodiac = "Cancer";
                }
                else {
                    zodiac = "Leo";
                }
                break;
            case 8:
                if (day <= 22) {
                    zodiac = "Leo";
                }
                else {
                    zodiac = "Virgo";
                }
                break;
            case 9:
                if (day <= 22) {
                    zodiac = "Virgo";
                }
                else {
                    zodiac = "Libra";
                }
                break;
            case 10:
                if (day <= 22) {
                    zodiac = "Libra";
                }
                else {
                    zodiac = "Scorpio";
                }
                break;
            case 11:
                if (day <= 22) {
                    zodiac = "Scorpio";
                }
                else {
                    zodiac = "Saggitarius";
                }
                break;
            case 12:
                if (day <= 21) {
                    zodiac = "Saggitarius";
                }
                else {
                    zodiac = "Capricorn";
                }
                break;
            }
        }
    }

    std::cout << zodiac << std::endl;
    return 0;
}
