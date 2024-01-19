#include <iostream>
#include <string>

int main()
{
    int x;
    std::cin >> x;
    std::string output = "";
    if (x >= 1 && x <= 5) {
        switch (x)
        {
        case 1:
            output = "Bad";
            break;
        case 2:
            output = "Unsatisfactory";
            break;
        case 3:
            output = "Satisfactory";
            break;
        case 4:
            output = "Good";
            break;
        case 5:
            output = "Excellent";
            break;
        }
    }
    else {
        output = "Error!";
    }

    std::cout << output;
}
