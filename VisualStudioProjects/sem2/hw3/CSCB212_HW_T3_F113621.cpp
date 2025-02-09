// �������
/*
	1.
		��, ���� � �������� � �� �������� ���� ��������� ���� "friend"

        ������:
            class myClass
            {
                private:
                    int a;
                    int b;
                public:
                    myClass (int la = 0, int lb = 0)
                    {
                        a = la;
                        b = lb;
                    }
                    friend ostream& operator << (ostream& outObj, myClass& mcObj);
            };

            // � ���� ���� �� ���������� ����� �����:

            ostream& operator << (ostream & outObj, myClass & mcObj)
            {
                outObj << mcObj.a << ", " << mcObj.b;
                return outObj;
            }

    2. 
        ������� �� ������������� � �������� ������� �� �������� �� ��������� � �������� ��������.
        ���� ���, ����������� ���� �����, ���� �� ���� ������������ �� ������������ �� �������� �� ���������, ����� � �������� � ����.

        ����� ��������� ��:
            |
            &
            =
            <
            >
            :

            �� ���� �������� �������������� �� �������� ������������� ��� ���������,
            ���� �������������� �� � �������� ������ ���������, � ����� �� ����������.�

        3.
            ������ ���� ����������� �������� ��� ��������� ���������� � �������, � ����� ��� � ���������, �����
            �� ��������� �� ���������� �� �������� �� ����������, ����� ��������������, ����������� �� ������ �������� � �������� �� ��-���������.

        4.
            i = 7;
            j = 8 + 7;
            k = 15 + 16

            ���: � = 31;

        5.
            ��� ����� �������� (��������� ��� ����������) +,
            ��� �������� �������� + ��������� �� ������� ���� �����

        6.
            ���� �� ����� ������ �� ���� ����� ������ �� �����.
            �� �� �������� ������������.

        7.
            ��������������� �� ��������� �� ����������� � ���� �� "�������� ������" � ���.
            �� �� �������� ������ ������������ ���� �� ������� ���� ����� �� ����.

        8.
            �������� ������������� �� �������� �� �����������, ������ �������� �� ������� ������� � ���� �� ����������.

        9.
            ���-����� �� ���� ����� �� �� ���������� ���� ���� � ���� ���� �� �������� �������, �� ���� ����� �� ������� �� ��������� �� ����������, ����� ����� � ���. �����.

        10.
            ��������� ���� "explicit" ����� �� ����������� ������� �� �� ������� ���� �� ��������� �� ������������ ��� ����� � ��������.
            ���� �� ���������� ���������� (����������� �� �����������) �������������� �� ������

        11.
            + � -

        12. 
            ���������� �� ��������� �� ������� ��������� ������ �� �� ��������� ���� ������� � ���� ��������.

        13.
            ������ � ���� ��� ������������ �������� '()' �� �������� �� ���� ���� �� ������� ������������ ������.
            ���� ���������� �� ������ �� ���� ����� ���� ������� � ���� ��������.

            ��������� ���� �� ���� �� � ����������� � ���������, ����� ��������� ���������� ��������.
            ������ �����-��������� ��� ������ ����� ��������������� �� �����, �� ����� ��������� � ���� �� �� ��������� ���� ���� ��.
*/

// ������ 1

#include <iostream>
#include <string>

class Building {
private:
    std::string building_address;
    int building_planned_floorCount;
    int building_planned_entranceCount;

    int building_built_floorCount;
    int building_built_entranceCount;

public:

    /*
        �� ����� �� �� ��������� ��������� �� �������� �������.
        + ������ Set 
        + ������ Get ����-�������. 
        + �������� � ������� ����� �� ���������� ���������� �� ������, 
        + ����� � �������������� �� ����� �� ������ �� ������ �����.
    
    */

    Building() {
        building_address = "";
        building_planned_floorCount = 0;
        building_planned_entranceCount = 0;
        building_built_floorCount = 0;
        building_built_entranceCount = 0;
    }

    Building(Building& cpObj) {
        building_address = cpObj.building_address;
        building_planned_floorCount = cpObj.building_planned_floorCount;
        building_planned_entranceCount = cpObj.building_planned_entranceCount;
        building_built_floorCount = cpObj.building_built_floorCount;
        building_built_entranceCount = cpObj.building_built_entranceCount;
    }
    ~Building() {

        std::cout << "~Building [" << this << "] exploded!" << std::endl << std::endl;
    }
// type getters return w/ const
    std::string getAddress() const {
        return this->building_address;
    }
    int getPlannedFloorCount() const {
        return this->building_planned_floorCount;
    }
    int getPlannedEntranceCount() const {
        return this->building_planned_entranceCount;
    }
    int getBuiltFloorCount() const {
        return this->building_built_floorCount;
    }
    int getBuiltEntranceCount() const {
        return this->building_built_entranceCount;
    }


// void setters
    void setAddress(std::string localAddress) {
        this->building_address = localAddress;
    }
    void setPlannedFloorCount(int pFC) {
        this->building_planned_floorCount = pFC;
    }
    void setPlannedEntranceCount(int pEC) {
        this->building_planned_entranceCount = pEC;
    }
    void setBuiltFloorCount(int bFC) {
        this->building_built_floorCount = bFC;
    }
    void setBuiltEntranceCount(int bEC) {
        this->building_built_entranceCount = bEC;
    }



// cout
    friend std::ostream& operator <<(std::ostream& outObj, Building& bObj) {

        outObj <<
             "BUILDING: [" << &bObj << ']' << '\n' <<
             " address: \"" << bObj.getAddress() << '\"' << '\n' <<
             " planned floors: " << bObj.getPlannedFloorCount() << '\n' <<
             " planned entrances: " << bObj.getPlannedEntranceCount() << '\n' <<
             " built floors: " << bObj.getBuiltFloorCount() << '\n' <<
             " built entrances " << bObj.getBuiltEntranceCount();

        return outObj;
    }

// cin
    friend std::istream& operator >>(std::istream& inObj, Building& bObj) {

        std::string adr = "";
        int pFC = 0;
        int pEC = 0;
        int bFC = 0;
        int bEC = 0;

        std::getline(inObj, adr);
       
        inObj >> pFC >> pEC >> bFC >> bEC;
        bObj.setAddress(adr);
        bObj.setPlannedFloorCount(pFC);
        bObj.setPlannedEntranceCount(pEC);
        bObj.setBuiltFloorCount(bFC);
        bObj.setBuiltEntranceCount(bEC);

        return inObj;
    }


/*
    �� ��� �� �� ��������� �������� ���� ����� - ����� ��
    ����������, ���� ��������� �����, ���� ��������� �������, ����
    ��������� �����, ���� ��������� �������. �� �������� �� ��
    ������������ ����������� + � +=, ���� �� �� ������� ���� ���
    �������� ������, � ���� ����� ���� �����.

    ���� ��������� ���� ����� ��� ��������
    ��������, �� ����� �������� ��� ���� �� ��� �
    ������ �� �� ������� ���������� �� ���� ��������� �����.

*/
    friend Building operator+(Building& buildingObj, int n) {
        /*
            Building b;
            b+n => building_built_floorCount += n;
        */
        int floors = buildingObj.getBuiltFloorCount();
        floors += n;
        buildingObj.setBuiltFloorCount(floors);

        return buildingObj;
    }
    friend Building operator+=(Building& buildingObj, int n) {
        /*
            Building b;
            b+=n => building_built_floorCount += n;
        */
        int floors = buildingObj.getBuiltFloorCount();
        floors += n;
        buildingObj.setBuiltFloorCount(floors);

        return buildingObj;
    }


/*
    ������ �������� �� �� ������������,
    ���� �� �� ������� ��� ��������
    ���� ����� � ����� ������

    ������ ���������� �� ��������, �� ��
    �������� �� �� ��������� ���� ������� � �� ������ �� �� ��������
    ���������� �� ����-������� ���� ��������� �������.


*/

    friend Building operator+(int n, Building& buildingObj) {
        /*
            Building b;
            n + b => building_built_entranceCount += n;
        */
        int entrances = buildingObj.getBuiltEntranceCount();
        entrances += n;
        buildingObj.setBuiltEntranceCount(entrances);
        return buildingObj;
       
    }
    friend Building operator+=(int n, Building& buildingObj) {
        /*
            ������ ���������� �� ��������, �� ��
            �������� �� �� ��������� ���� ������� � �� ������ �� �� ��������
            ���������� �� ����-������� ���� ��������� �������.


            Building b;
            n += b => building_built_entranceCount += n;
        */
        int entrances = buildingObj.getBuiltEntranceCount();
        entrances += n;
        buildingObj.setBuiltEntranceCount(entrances);
        return buildingObj;
    }
};


int main() {
    Building b;

    std::cout << b << std::endl;
    std::cin >> b;

    Building b2(b);
    std::cout << b << std::endl;
    std::cout << b2 << std::endl;

    b + 1;
    b += 1;
    std::cout << b << std::endl;

    1 + b2;
    1 += b2;
    std::cout << b2 << std::endl;

    return 0;
}