

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


        // search for the lowest <<<
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

        /*  15, 16, 17
        * 
        * 
            XY = (15 * 16) / 1(GCD) = 240
            YZ = (16 * 17) / 1(GCD) = 272
            XZ = (15 * 17) / 1(GCD)  = 255
                                    find largest of results = answer    

                                    LCM = 4080 / 272 = 15
        */
        LCM_XY = (x * y) / GCD;
        LCM_YZ = (y * z) / GCD;
        LCM_XZ = (x * z) / GCD;

        //search for the greatest >>>
        if (LCM_XY > LCM_YZ) {
            if (LCM_XY > LCM_XZ) {
                LCM = LCM_XY;
            }
            else {
                LCM = LCM_XZ;
            }
        }
        else if (LCM_YZ > LCM_XY) {
            if (LCM_YZ > LCM_XZ) {
                LCM = LCM_YZ;
            }
            else {
                LCM = LCM_XZ;
            }
        }
        else if (LCM_XZ > LCM_XY) {
            if (LCM_XZ > LCM_YZ) {
                LCM = LCM_XZ;
            }
            else {
                LCM = LCM_YZ;
            }
        }
        else {
            LCM = LCM_XY;
        }

        std::cout << LCM << std::endl;


    }
    else {
        std::cout << "Invalid input data!" << std::endl;
    }
}
