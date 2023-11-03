// най - голямото римско число(3999)
#include <iostream>
#include <string>

int main()
{
    
    char charNumberInputArr[4];
    std::cin >> charNumberInputArr;
    int charToIntArr[4];
    
    // 3888 - MMMDCCCLXXXVIII

    std::string output = "";
    
    
    for (int i = 0; i < 4; i++) {
        charToIntArr[i] = charNumberInputArr[i] - '0';
    }

    switch (charToIntArr[0]) { // thousands
    case 1:
        output += "M";
        break;
    case 2:
        output += "MM";
        break;
    case 3:
        output += "MMM";
        break;
    }

    switch (charToIntArr[1]) { // hundreds
    case 1:
        output += "C";
        break;
    case 2:
        output += "CC";
        break;
    case 3:
        output += "CCC";
        break;
    case 4:
        output += "CD";
        break;
    case 5:
        output += "D";
        break;
    case 6:
        output += "DC";
        break;
    case 7:
        output += "DCC";
        break;
    case 8:
        output += "DCCC";
        break;
    case 9:
        output += "CM";
        break;

    }


    switch (charToIntArr[2]) { // tens
    case 1:
        output += "X";
        break;
    case 2:
        output += "XX";
        break;
    case 3:
        output += "XXX";
        break;
    case 4:
        output += "XL";
        break;
    case 5:
        output += "L";
        break;
    case 6:
        output += "LX";
        break;
    case 7:
        output += "LXX";
        break;
    case 8:
        output += "LXXX";
        break;
    case 9:
        output += "XC";
        break;

    }

    switch (charToIntArr[3]) { // digits (ones)
    case 1:
        output += "I";
        break;
    case 2:
        output += "II";
        break;
    case 3:
        output += "III";
        break;
    case 4:
        output += "IV";
        break;
    case 5:
        output += "V";
        break;
    case 6:
        output += "VI";
        break;
    case 7:
        output += "VII";
        break;
    case 8:
        output += "VIII";
        break;
    case 9:
        output += "IX";
        break;

    }
    std::cout << output;

    return 0;
}
