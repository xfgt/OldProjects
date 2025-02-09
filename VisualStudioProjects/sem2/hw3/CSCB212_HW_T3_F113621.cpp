// Въпроси
/*
	1.
		Да, това е възможно и се получава чрез ключовата дума "friend"

        Пример:
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

            // и след това го дефинираме извън класа:

            ostream& operator << (ostream & outObj, myClass & mcObj)
            {
                outObj << mcObj.a << ", " << mcObj.b;
                return outObj;
            }

    2. 
        Нуждата от предварителна и нормална промяна на стойност се упражнява в различни ситуации.
        Като цел, посредством този метод, може да бъде изпълнението на инструкциите по указание на алгоритъм, който е приложен в сила.

        Други оператори са:
            |
            &
            =
            <
            >
            :

            Те имат различни предназначения за употреба самостоятелно или двукратно,
            като функциалността им е различна спрямо контекста, в който са използвани.ь

        3.
            Защото чрез префиксната операция ние променяме стойността в момента, в който сме я достъпили, което
            би послужило за намаляване на работата на алгоритъма, който имплементираме, спестявайки му повече проверки и правейки го по-ефективен.

        4.
            i = 7;
            j = 8 + 7;
            k = 15 + 16

            Отг: к = 31;

        5.
            Или двоен оператор (префиксен или постфиксен) +,
            или единичен оператор + последван от операнд цяло число

        6.
            Няма да имаме достъп до него извън обсега на класа.
            Ще го направим неизползваем.

        7.
            Предефинирането на оператора за присвояване е част от "Голямата тройка" в ООП.
            То се използва когато програмистът иска да присвои един обект на друг.

        8.
            Неявното преобразуване се извършва от компилатора, докато неявното се записва изрично в кода на програмата.

        9.
            Най-лесно ще бъде първо да го представим като дроб и след това да изпълним деление, но така можем да изгубим от точността на стойността, която имаме в рац. число.

        10.
            Ключовата дума "explicit" казва на компилатора изрично да не променя типа на аргумента на конструктора към който е зададена.
            Така се забраняват имплицитни (автоматични от компилатора) преобразувания на типове

        11.
            + и -

        12. 
            Операторът за извикване на функция позволява обекти да се използват като функции с един аргумент.

        13.
            Когато в клас има предефиниран оператор '()' то обектите от този клас се наричат функционални обекти.
            Това ползволява на обекта да бъде викан като фукнция с един аргумент.

            Фукнцията сама по себе си е конструкция с аргументи, която изпълнява определено действие.
            Докато обект-фукнцията има всички други ФУНКЦИОНАЛНОСТИ на класа, от който произлиза и може да ги реализира чрез себе си.
*/

// Задача 1

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
        За класа да се реализира правилото на голямата петорка.
        + Всички Set 
        + Всички Get член-функции. 
        + Вмъкване в изходен поток на текстовото съдържание на сграда, 
        + както и екстрактването на данни за сграда от входен поток.
    
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
    За нея да се дефинират следните член данни - адрес на
    сградадата, брой планирани етажи, борй планирани входове, брой
    застроени етажи, брой застроени входове. За сградата да се
    предефинират операторите + и +=, така че да приемат като ляв
    аргумент сграда, а като десен цяло число.

    Като прибавяме цяло число към сградата
    означава, че имаме застроен нов етаж от нея и
    трябва да се увеличи стойността на брой застроени етажи.

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
    Същите операции да се предефинират,
    така че да приемат ляв аргумент
    цяло число и десен сграда

    Тогава операцията ще означава, че за
    сградата са се застроили нови входове и ще трябва да се учвеличи
    стойността на член-данната брой застроени входове.


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
            Тогава операцията ще означава, че за
            сградата са се застроили нови входове и ще трябва да се учвеличи
            стойността на член-данната брой застроени входове.


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