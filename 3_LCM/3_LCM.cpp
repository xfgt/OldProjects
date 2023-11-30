

#include <iostream>



int main()
{
    //x, y ,z
    //xy, yz, xz

    int x, y, z, GCD_XY, GCD_YZ, GCD_XZ, GCD, LCM_XY, LCM_YZ, LCM_XZ, LCM;
    std::cin >> x >> y >> z;
    if (x >= 10 && x <= 100 && y >= 10 && y <= 100 && z >= 10 && z <= 100) {


        // XY
        for (int i = 1; i <= x && i <= y; i++)
        {
            if (x % i == 0 && y % i == 0) {
                GCD_XY = i;
            }
        }

        // YZ
        for (int i = 1; i <= y && i <= z; i++)
        {
            if (y % i == 0 && z % i == 0) {
                GCD_YZ = i;
            }
        }
        // XZ
        for (int i = 1; i <= x && i <= z; i++)
        {
            if (x % i == 0 && z % i == 0) {
                GCD_XZ = i;
            }
        }


        /*std::cout << "XY = "<< GCD_XY << std::endl;
        std::cout << "YZ = "<< GCD_YZ << std::endl;
        std::cout << "XZ = "<< GCD_XZ << std::endl;*/


        // search for the greatest


        if (GCD_XY < GCD_YZ) {
            if (GCD_XY < GCD_XZ) {
                GCD = GCD_XY;
            }
            else {
                GCD = GCD_XZ;
            }
        }
        else if (GCD_YZ < GCD_XY) {
            if (GCD_YZ < GCD_XZ) {
                GCD = GCD_YZ;
            }
            else {
                GCD = GCD_XZ;
            }
        }
        else if (GCD_XZ < GCD_XY) {
            if (GCD_XZ < GCD_YZ) {
                GCD = GCD_XZ;
            }
            else {
                GCD = GCD_YZ;
            }
        }
        else {
            GCD = GCD_XY;
        }

        LCM_XY = (GCD_XY * GCD_YZ) / GCD;
        LCM_YZ = (GCD_YZ * GCD_XZ) / GCD;
        LCM_XZ = (GCD_XY * GCD_XZ) / GCD;
        std::cout << "GCD = " << GCD << std::endl;
        std::cout << "LCM_XY = " << LCM_XY << std::endl;
        std::cout << "LCM_YZ = " << LCM_YZ << std::endl;
        std::cout << "LCM_XZ = " << LCM_XZ << std::endl;

    }
    else {
        std::cout << "Invalid input data!" << std::endl;
    }
}
