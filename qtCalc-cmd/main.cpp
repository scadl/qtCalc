#include <QCoreApplication>
#include <iostream> // std::cin, std::cout
#include <conio.h> // clrscr()

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    char tch;
    int a1,b,c,d;
    std::string qbs;

    do{

    printf("Hi, i'm qmake calculator v.%s!\n----------------\n","1.0");

    printf("Insert 1st digit\n","");
    scanf("%i", &b);
    printf("Insert 2nd digit\n","");
    scanf("%i", &c);
    printf("Insert operand\n 1 -- Adding,\n 2 -- Substraction,\n"
           " 3 -- Multiplication,\n 4 -- Division(Regular),\n 5 -- Divison(Module)\n"
           " You desigion: ","");
    scanf("%i", &d);

    switch (d){
        case 1:
            a1 = b + c;
            qbs = "+";
        break;
        case 2:
            a1 = b - c;
            qbs = "-";
            break;
        case 3:
            a1 = b * c;
            qbs = "*";
            break;
        case 4:
            a1 = b / c;
            qbs = "/";
            break;
        case 5:
            a1 = b % c;
            qbs = "%";
            break;
         defualt:
            printf("Unknown operand!", "");
            return 0;

    }

    printf("\n----------------\n"
           "Result of %i %s %i is: %i"
           "\n----------------\n", b, qbs.c_str(), c, a1);

    printf("Are your done? (y/n) ");
    scanf("%s",tch);

    //std::system("cls");
    //clrscr();

    } while(tch == 'n');

    return a.exec();
}
