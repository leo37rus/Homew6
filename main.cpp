#include "Robocleaner.h"
#include <iostream>;

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    IShop* shopList[5]{};

	shopList[0] = new SmartPhone(4000, 200);
	shopList[1] = new Console(400, 300);
	shopList[2] = new Fridge(20000,1500);
	shopList[3] = new Мicrowave(5000, 2000);
	shopList[4] = new roboCleaner(500, 2000);

	bool open = true;
    while (open)
    {
        cout << "Выберите продукт : 1 - Смартфон, 2 - Консоль, 3 - Холодильник, 4 - Микроволновка, 5 - Робот пылесос, 0 чтобы выйти" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            shopList[0]->ShowSpec();
            break;

        case 2:
            shopList[1]->ShowSpec();
            break;

        case 3:
            shopList[2]->ShowSpec();
            break;

        case 4:
            shopList[3]->ShowSpec();
            break;

        case 5:
            shopList[4]->ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Выберите продукт от 1 до 5 или 0, чтобы выйти" << endl;
            break;
        }
        delete shopList[0];
        delete shopList[1];
        delete shopList[2];
        delete shopList[3];
        delete shopList[4];

        return 0;
    }
}

