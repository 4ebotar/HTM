#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <windows.h>
#include <fstream>

using namespace std;

int main()
{
    setlocale(0, "");
    int x=0,play,vsyaigra;//Системные
    int yhp,avhp,ydm,avdm,ywin=0,avwin=0,ch,battend=0,avn=0;//Механика боя
    int money=0,it;//Магазин
    int wood=0,stone=0,iron=0,diamond=0,zar=0;//Мечи
    int txsh=0,fursh=0,bnsh=0;//Щит
    int zarbel=0,zarwrea=0;//Особые предметы, акссесуары
    int tx=0,fur=0,claw=0;//Трофеи
    int prfur=0,supst=0;//Предметы
    int hb=0;//Баго-фикс
    int ban=0,die=0,mnhk=0,inflv=0,sooit=0;//Читы
    int smith=0,gvfr=0,bsgv=0,bsw=0;//Разблокировка частей
    int tox=0,toxdo=0,bld=0,blddo=0;//Эфекты
            ifstream trd("save.trd");
            trd>>money;
            trd.close();
            ifstream sh("save.sh");
            sh>>txsh>>fursh>>bnsh;
            sh.close();
            ifstream lu("save.lu");
            lu>>prfur>>supst;
            lu.close();
            ifstream prg("save.prg");
            prg>>smith>>bsw;
            prg.close();
            ifstream srd("save.srd");
            srd>>wood>>stone>>iron>>diamond>>zar;
            srd.close();
            ifstream trf("save.trf");
            trf>>tx>>fur>>claw;
            trf.close();
            ifstream acs("save.acs");
            acs>>zarbel>>zarwrea;
            acs.close();
    cout<<endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
    FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"         MRK corporation present"<<endl;
    cout<<"        _           _           _"<<endl;
    cout<<"       | |         | |         | |"<<endl;
    cout<<"       | |         | |         | |"<<endl;
    cout<<"       \\ \\         | |         / /"<<endl;
    cout<<"        \\ \\        | |        / /"<<endl;
    cout<<"         \\ \\       | |       / /"<<endl;
    cout<<"       ___\\ \\______| |______/ /___"<<endl;
    cout<<"      |___________________________|"<<endl;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
    FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
    cout<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"БОЙ: 1-Удар 2-Блок 4-Покинуть"<<endl;
    cout<<"УЛИЦА: 3-Арена 5-Магазин 6-Кузня 7-Алтарь 8-Инвертарь 9-Выход(SAVE)"<<endl;
    cout<<"МАГАЗИН/КУЗНЯ: Выбрать товар 1-7"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Начать-3"<<endl;
    cin>>x;
    vsyaigra=1;
    while(vsyaigra==1)
    {
    if (x==3)
    {
        if(mnhk>0&&ban>0&&die>0&&inflv>0&&sooit>0)
        {
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_GREEN|FOREGROUND_INTENSITY);
        }
        cout<<"Ты зашёл на арену. Тут есть два ринга: Ринг 1 (Бомж-ассасин); Ринг 2 (Чувырла); Ринг 3 (Токсик)"<< endl;
        cin>>avn;
        if(avn==1)
        {
            cout<<"На тебя напал бомж-ассассин! Атакуй!"<< endl;
            cout<<"             ______"<<endl;
            cout<<"            /      \\"<<endl;
            cout<<"           | _----_ |"<<endl;
            cout<<"           |/-- ==  |"<<endl;
            cout<<"           |   /    |"<<endl;
            cout<<"           |  __/   |"<<endl;
            cout<<"            \\__  __/"<<endl;
            cout<<"           ___\\  /___"<<endl;
            cout<<"          /    __    \\"<<endl;
            cout<<"        /|    /  \\    |\\"<<endl;
            cout<<"       | |    |  |    | |"<<endl;
            cout<<"       | |    /  \\    | |"<<endl;
            cout<<"       | |   |    |   | |"<<endl;
            cout<<"        \\|   /     \\  |/"<<endl;
            cout<<"         |  |      |  |"<<endl;
            yhp=50;
            if(zarbel>0)
            {
                yhp=yhp+100;
            }
            if(zarwrea>0)
            {
                yhp=yhp+30;
            }
            avhp=85;
            ch=3;
            if(txsh==1&&fursh!=1&&bnsh!=1)//txsh
            {
                ch=ch+2;
            }
            if(fursh==1&&bnsh!=1)//fursh
            {
                ch=ch+4;
            }
            if(bnsh==1)//bnsh
            {
                ch=ch+7;
            }
            ywin=0;
            avwin=0;
            battend=0;
            hb=0;
            cin>>play;
            while (play!=4)
            {
                if (play==1&&yhp>=0&&avhp>=0)//Удар
                {
                    srand(time(NULL));
                    ydm = 3 + rand() % 6;//Наша атака
                    if(wood==1&&stone!=1&&iron!=1&&diamond!=1&&zar!=1)//wood
                    {
                        ydm=ydm+3;
                    }
                    if(stone==1&&iron!=1&&diamond!=1&&zar!=1)//stone
                    {
                        ydm=ydm+5;
                    }
                    if(iron==1&&diamond!=1&&zar!=1)//iron
                    {
                        ydm=ydm+7;
                    }
                    if(diamond==1&&zar!=1)//diamond
                    {
                        ydm=ydm+17;
                    }
                    if(zar==1)//zarya
                    {
                        ydm=ydm+27;
                    }
                    if(zarwrea>0)//zarya wreath
                    {
                        ydm=ydm+5;
                    }
                    if(ban>0)//BAN
                    {
                        ydm=ydm+1337228666;
                    }
                    if(die>0)//666
                    {
                        avhp=avhp+666777;
                    }
                    if(inflv>0)//777
                    {
                        yhp=yhp+777777;
                    }
                    avhp=avhp-ydm;
                    if(avhp<=0)
                    {
                        ywin=ywin+1;
                        avwin=avwin-1;
                        avhp=0;
                    }
                    else
                    {
                        avdm = 2 + rand() % 4;//Атака врага
                        yhp=yhp-avdm;
                        if(yhp<=0)
                        {
                            avwin=avwin+1;
                            ywin=ywin-1;
                            yhp=0;
                            avhp=avhp+ydm;
                            if(ywin==1)
                            {
                                ywin=ywin+1;
                                yhp=yhp+avdm;
                            }
                        }

                    }
                    cout << "Вы ударили его и нанесли " <<ydm<< " урона" << endl;
                    cout << "Он ударил вас и нанёс " <<avdm<< " урона" << endl;
                    cout << "Его здоровье: " <<avhp<< " Ваше здоровье: " <<yhp<< endl;
                }
                    if(ywin==1)
                    {
                        cout<<"Молодец, ты побеил бомжа-ассасина!"<<endl;
                        cout<<"             ______"<<endl;
                        cout<<"            /      \\"<<endl;
                        cout<<"           | _----_ |"<<endl;
                        cout<<"           |/ X  X  |"<<endl;
                        cout<<"           |   /    |"<<endl;
                        cout<<"           |  ___   |"<<endl;
                        cout<<"            \\__  __/"<<endl;
                        cout<<"               ++"<<endl;
                        money=money+20;
                        hb=hb+1;
                        tx++;
                        if(hb>1)
                        {
                            money=money-20;
                            tx--;
                        }
                        cout<<"Вы собрали 20 рублей с бомжа-ассасина и забрали его капюшон себе"<<endl;
                        cout<<"Если вы хотите выйти с арены введите 4 Перезайди на арену чтоб сразится ещё раз"<<endl;
                        if(ban>0)
                        {
                            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
                            FOREGROUND_RED| FOREGROUND_INTENSITY);
                            cout<<"Забанен, чекай"<<endl;
                            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
                            FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
                        }
                        if(mnhk>0&&ban>0&&die>0&&inflv>0&&sooit>0)
                        {
                            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
                            FOREGROUND_GREEN|FOREGROUND_INTENSITY);
                        }
                        battend++;
                    }
                    if(avwin==1)
                    {
                        cout<<"             ______"<<endl;
                        cout<<"            /      \\"<<endl;
                        cout<<"           | _----_ |"<<endl;
                        cout<<"           |/>< ><  |"<<endl;
                        cout<<"           |   /    |"<<endl;
                        cout<<"           |  ___   |   ЧЕЛ ТЫ БОТ, ТЫ CLOWN! ПОПУУУУУСК!!!"<<endl;
                        cout<<"            \\_\\M/__/"<<endl;
                        cout<<"           ___\\  /___"<<endl;
                        cout<<"          /    __    \\"<<endl;
                        cout<<"        /|    /  \\    |\\"<<endl;
                        cout<<"       | |    |  |    | |"<<endl;
                        cout<<"       | |    /  \\    | |"<<endl;
                        cout<<"       | |   |    |   | |"<<endl;
                        cout<<"        \\|   /     \\  |/"<<endl;
                        cout<<"         |  |      |  |"<<endl;
                        cout<<"Если вы хотите выйти с арены введите 4 Перезайди на арену чтоб сразится ещё раз"<<endl;
                        battend++;
                    }
                    ywin=0;
                    avwin=0;
                    if(play==2&&yhp>=0&&avhp>=0&&ch>0)//Блок
                    {
                        yhp=yhp+1;
                        if(txsh==1&&fursh!=1&&bnsh!=1)//txsh
                        {
                            yhp=yhp+1;
                        }
                        if(fursh==1&&bnsh!=1)//fursh
                        {
                            yhp=yhp+2;
                        }
                        if(bnsh==1)//bnsh
                        {
                            yhp=yhp+4;
                        }
                        ch--;
                        avdm = 3 + rand() % 6;//Атака врага
                        cout<<"Вы заблокировали "<<avdm<<" урона и восстановили здоровье"<<endl;
                        cout << "Его здоровье: " <<avhp<< " Ваше здоровье: " <<yhp<< endl;
                    }
                    if (play==2&&ch==0)//Щит сломан
                    {
                        cout<<"Ваш щит сломан!"<<endl;
                    }
                    cin>>play;
            }
        }
        if(avn==2)
        {
            cout<<"На тебя напал чувырла! Атакуй!"<< endl;
            cout<<"          _________"<<endl;
            cout<<"         //     \\  \\"<<endl;
            cout<<"        |/ O   -= \\\\\\"<<endl;
            cout<<"       / // |    \\    \\"<<endl;
            cout<<"      |                |"<<endl;
            cout<<"     |       ___    \\  |"<<endl;
            cout<<"     |                  |"<<endl;
            cout<<"    / ///          |    |"<<endl;
            cout<<"   |                     \\"<<endl;
            cout<<"   MMMMMMMMMMMMMMMMMMMMMMMM"<<endl;
            yhp=50;
            if(zarbel>0)
            {
                yhp=yhp+100;
            }
            if(zarwrea>0)
            {
                yhp=yhp+30;
            }
            avhp=100;
            ch=3;
            if(txsh==1&&fursh!=1&&bnsh!=1)//txsh
            {
                ch=ch+2;
            }
            if(fursh==1&&bnsh!=1)//fursh
            {
                ch=ch+4;
            }
            if(bnsh==1)//bnsh
            {
                ch=ch+7;
            }
            ywin=0;
            avwin=0;
            battend=0;
            hb=0;
            cin>>play;
            while (play!=4)
            {
                if (play==1&&yhp>=0&&avhp>=0)
                {
                    //Удар
                    srand(time(NULL));
                    ydm = 3 + rand() % 6;//Наша атака
                    if(wood==1&&stone!=1&&iron!=1&&diamond!=1&&zar!=1)//wood
                    {
                        ydm=ydm+3;
                    }
                    if(stone==1&&iron!=1&&diamond!=1&&zar!=1)//stone
                    {
                        ydm=ydm+5;
                    }
                    if(iron==1&&diamond!=1&&zar!=1)//iron
                    {
                        ydm=ydm+7;
                    }
                    if(diamond==1&&zar!=1)//diamond
                    {
                        ydm=ydm+17;
                    }
                    if(zar==1)//zarya
                    {
                        ydm=ydm+27;
                    }
                    if(zarwrea>0)//zarya wreath
                    {
                        ydm=ydm+5;
                    }
                    if(ban>0)//BAN
                    {
                        ydm=ydm+1337228666;
                    }
                    if(die>0)//666
                    {
                        avhp=avhp+666777;
                    }
                    if(inflv>0)//777
                    {
                        yhp=yhp+777777;
                    }
                    avhp=avhp-ydm;
                    if(avhp<=0)
                    {
                        ywin=ywin+1;
                        avwin=avwin-1;
                        avhp=0;
                    }
                    else
                    {
                        avdm = 2 + rand() % 4;//Атака врага
                        avdm=avdm+2;
                        yhp=yhp-avdm;
                        if(yhp<=0)
                        {
                            avwin=avwin+1;
                            ywin=ywin-1;
                            yhp=0;
                            avhp=avhp+ydm;
                            if(ywin==1)
                            {
                                ywin=ywin+1;
                                yhp=yhp+avdm;
                            }
                        }

                    }
                    cout << "Вы ударили его и нанесли " <<ydm<< " урона" << endl;
                    cout << "Он ударил вас и нанёс " <<avdm<< " урона" << endl;
                    cout << "Его здоровье: " <<avhp<< " Ваше здоровье: " <<yhp<< endl;
                }
                if(ywin==1)
                {
                    cout<<"Молодец, ты побеил чувырлу!"<<endl;
                    cout<<"          ____________"<<endl;
                    cout<<"         / /      \\   \\"<<endl;
                    cout<<"        |/ }X{   }x{ \\\\\\"<<endl;
                    cout<<"       /  // |      \\    \\"<<endl;
                    cout<<"      |                   |"<<endl;
                    cout<<"     |        ___     \\   |"<<endl;
                    cout<<"     |                     |"<<endl;
                    cout<<"    /  ///           |     |"<<endl;
                    cout<<"   |                        \\"<<endl;
                    cout<<"   MMMMMMMMMMMMMMMMMMMMMMMMMMM"<<endl;
                    money=money+100;
                    fur++;
                    hb=hb+1;
                    if(hb>1)
                    {
                        money=money-100;
                        fur--;
                    }
                    cout<<"Вы собрали 100 рублей с чувырлы и забрали его мех"<<endl;
                    cout<<"Если вы хотите выйти с арены введите 4 Перезайди на арену чтоб сразится ещё раз"<<endl;
                    if(ban>0)
                    {
                        SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
                        FOREGROUND_RED| FOREGROUND_INTENSITY);
                        cout<<"Забанен, чекай"<<endl;
                        SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
                        FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
                    }
                    if(mnhk>0&&ban>0&&die>0&&inflv>0&&sooit>0)
                    {
                        SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
                        FOREGROUND_GREEN|FOREGROUND_INTENSITY);
                    }
                    battend++;
                }
                if(avwin==1)
                {
                    cout<<"Вас победил чувырла"<<endl;
                    cout<<"          _________"<<endl;
                    cout<<"         //     \\  \\"<<endl;
                    cout<<"        |/ =-  -= \\\\\\"<<endl;
                    cout<<"       / // |    \\    \\"<<endl;
                    cout<<"      |                |"<<endl;
                    cout<<"     |      -___-   \\  |"<<endl;
                    cout<<"     |                  |"<<endl;
                    cout<<"    / ///          |    |"<<endl;
                    cout<<"   |                     \\"<<endl;
                    cout<<"   MMMMMMMMMMMMMMMMMMMMMMMM"<<endl;
                    cout<<"Если вы хотите выйти с арены введите 4 Перезайди на арену чтоб сразится ещё раз"<<endl;
                    battend++;
                }
                ywin=0;
                avwin=0;
                if(play==2&&yhp>=0&&avhp>=0&&ch>0)//Блок
                {
                yhp=yhp+1;
                if(txsh==1&&fursh!=1&&bnsh!=1)//txsh
                    {
                    yhp=yhp+1;
                    }
                if(fursh==1&&bnsh!=1)//fursh
                    {
                        yhp=yhp+2;
                    }
                if(bnsh==1)//bnsh
                    {
                        yhp=yhp+4;
                    }
                ch=ch-1;
                avdm = 3 + rand() % 6;//Атака врага
                avdm=avdm+4;
                cout<<"Вы заблокировали "<<avdm<<" урона и восстановили здоровье"<<endl;
                cout << "Его здоровье: " <<avhp<< " Ваше здоровье: " <<yhp<< endl;
                }
                if (play==2&&ch==0)//Щит сломан
                {
                    cout<<"Ваш щит сломан!"<<endl;
                }
                cin>>play;
            }
        }
        if(avn==3)
        {
            cout<<"На тебя напал токсичный бомж! Атакуй!"<< endl;
            cout<<"             _____"<<endl;
            cout<<"           \\/     \\/"<<endl;
            cout<<"            |O   O|"<<endl;
            cout<<"            |_____|"<<endl;
            cout<<"            _|WWW|_"<<endl;
            cout<<"           -       -"<<endl;
            cout<<"          / /| | |\\ \\"<<endl;
            cout<<"         | | |/ \\| | |"<<endl;
            cout<<"         {{{ |   | }}}"<<endl;
            cout<<"             / | \\"<<endl;
            cout<<"            / / \\ \\"<<endl;
            cout<<"            MM   MM"<<endl;
            yhp=50;
            if(zarbel>0)
            {
                yhp=yhp+100;
            }
            if(zarwrea>0)
            {
                yhp=yhp+30;
            }
            avhp=150;
            ch=3;
            if(txsh==1&&fursh!=1&&bnsh!=1)//txsh
            {
                ch=ch+2;
            }
            if(fursh==1&&bnsh!=1)//fursh
            {
                ch=ch+4;
            }
            if(bnsh==1)//bnsh
            {
                ch=ch+7;
            }
            ywin=0;
            avwin=0;
            battend=0;
            hb=0;
            cin>>play;
            while (play!=4)
            {
                if(play==1&&yhp>=0&&avhp>=0)
                {
                    //Удар
                    srand(time(NULL));
                    ydm = 3 + rand() % 6;//Наша атака
                    //cout<<"wood="<<wood<<" stone="<<stone<<" iron="<<iron<<" dm="<<ydm<<endl;
                    if(wood==1&&stone!=1&&iron!=1&&diamond!=1&&zar!=1)//wood
                    {
                        ydm=ydm+3;
                    }
                    if(stone==1&&iron!=1&&diamond!=1&&zar!=1)//stone
                    {
                        ydm=ydm+5;
                    }
                    if(iron==1&&diamond!=1&&zar!=1)//iron
                    {
                        ydm=ydm+7;
                    }
                    if(diamond==1&&zar!=1)//diamond
                    {
                        ydm=ydm+17;
                    }
                    if(zar==1)//zarya
                    {
                        ydm=ydm+27;
                    }
                    if(zarwrea>0)//zarya wreath
                    {
                        ydm=ydm+5;
                    }
                    if(ban>0)//BAN
                    {
                        ydm=ydm+1337228666;
                    }
                    if(die>0)//666
                    {
                        avhp=avhp+666777;
                    }
                    if(inflv>0)//777
                    {
                        yhp=yhp+777777;
                    }
                    avhp=avhp-ydm;
                    if(avhp<=0)
                    {
                        ywin=ywin+1;
                        avwin=avwin-1;
                        avhp=0;
                    }
                    else
                    {
                        avdm = 2 + rand() % 4;//Атака врага
                        if(toxdo<1)
                        {
                            tox = 1 + rand() % 5;
                            if(tox==1)
                            {
                                toxdo=toxdo+3;
                                tox=0;
                            }
                        }
                        if(toxdo>0)
                        {
                            yhp--;
                            toxdo--;
                            cout << "Токсины больно но не сильно разьедают вашу плоть нанося 1 урон" << endl;
                        }
                        avdm=avdm+12;
                        yhp=yhp-avdm;
                        if(yhp<=0)
                        {
                            avwin=avwin+1;
                            ywin=ywin-1;
                            yhp=0;
                            avhp=avhp+ydm;
                            if(ywin==1)
                            {
                                ywin=ywin+1;
                                yhp=yhp+avdm;
                            }
                        }
                    }
                    cout << "Вы ударили его и нанесли " <<ydm<< " урона" << endl;
                    cout << "Он ударил вас и нанёс " <<avdm<< " урона" << endl;
                    cout << "Его здоровье: " <<avhp<< " Ваше здоровье: " <<yhp<< endl;
                }
                if(ywin==1)
                {
                    cout<<"Молодец, ты побеил токсичного бомжа"<<endl;
                    cout<<"              ________"<<endl;
                    cout<<"         ____/ -    = \\"<<endl;
                    cout<<"       //#}  =   _____/"<<endl;
                    cout<<"        //#}____/"<<endl;
                    cout<<"         //"<<endl;
                    money=money+200;
                    claw++;
                    hb=hb+1;
                    if(hb>1)
                    {
                        money=money-200;
                        claw--;
                    }
                    cout<<"Вы собрали 200 рублей с токсичного бомжа и забрали его когти"<<endl;
                    cout<<"Если вы хотите выйти с арены введите 4 Перезайди на арену чтоб сразится ещё раз"<<endl;
                    if(ban>0)
                    {
                        SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
                        FOREGROUND_RED| FOREGROUND_INTENSITY);
                        cout<<"Забанен, чекай"<<endl;
                        SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
                        FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
                    }
                    if(mnhk>0&&ban>0&&die>0&&inflv>0&&sooit>0)
                    {
                        SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
                        FOREGROUND_GREEN|FOREGROUND_INTENSITY);
                    }
                    battend++;
        }
        if(avwin==1)
        {
            cout<<"Вас победил токсик"<<endl;
            cout<<"             _____"<<endl;
            cout<<"       {{{ \\/     \\/ }}}"<<endl;
            cout<<"       | |  |@   @|  | |"<<endl;
            cout<<"        \\ \\ |_____| / /"<<endl;
            cout<<"         \\ \\_|WMW|_/ /"<<endl;
            cout<<"          \\__     __/"<<endl;
            cout<<"             | | |"<<endl;
            cout<<"             |/ \\|"<<endl;
            cout<<"             |   |"<<endl;
            cout<<"             / | \\"<<endl;
            cout<<"            / / \\ \\"<<endl;
            cout<<"            MM   MM"<<endl;
            cout<<"Если вы хотите выйти с арены введите 4 Перезайди на арену чтоб сразится ещё раз"<<endl;
            battend++;
        }

        ywin=0;
        avwin=0;
        if  (play==2&&yhp>=0&&avhp>=0&&ch>0)//Блок
    {
    yhp=yhp+1;
    if(txsh==1&&fursh!=1&&bnsh!=1)//txsh
        {
        yhp=yhp+1;
        }
    if(fursh==1&&bnsh!=1)//fursh
        {
            yhp=yhp+2;
        }
    if(bnsh==1)//bnsh
        {
            yhp=yhp+4;
        }
    ch=ch-1;
    avdm = 3 + rand() % 6;//Атака врага
    avdm=avdm+12;
        if(toxdo>0)
        {
            avdm++;
            toxdo--;
            cout << "Токсины больно но не сильно разьедают вашу плоть нанося 1 урон" << endl;
        }
    cout<<"Вы заблокировали "<<avdm<<" урона и восстановили здоровье"<<endl;
    cout << "Его здоровье: " <<avhp<< " Ваше здоровье: " <<yhp<< endl;
    }
     if (play==2&&ch==0)//Щит сломан
    {
        cout<<"Ваш щит сломан!"<<endl;

    }
     cin>>play;
    }
    }
    }
    if(battend>0&&bsw<1)
    {
        cout<<"Ты на улице"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"НАСТРОЙКИ/УПРАВЛЕНИЕ-11   ВЫХОД-9"<<endl;
        cout<<"    ________________"<<endl;
        cout<<"   |\\_____ARENA_____\\              ____________"<<endl;
        cout<<"   | |               |            |____________|"<<endl;
        cout<<"   | |   -|>>>>>>>   |            |  $ SHOP $  |       _SMITH_                                              (@=@=@=@=@)"<<endl;
        cout<<"   | |      ___      |            |     __     |      /   _   \\                                             \\\\#-----#//"<<endl;
        cout<<"   |_|_____|___|_____|            |____|__|____|      |__|_|__|                                              |MMMMMMM|"<<endl;
    }
    if(battend>0&&bsw>0)
    {
        cout<<"Ты на улице"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"НАСТРОЙКИ/УПРАВЛЕНИЕ-11   ВЫХОД-9"<<endl;
        cout<<"Подойти к рыцарю на коне (Ввести 10)"<<endl;
        cout<<"    ________________"<<endl;
        cout<<"   |\\_____ARENA_____\\              ____________"<<endl;
        cout<<"   | |               |            |____________|"<<endl;
        cout<<"   | |   -|>>>>>>>   |      @     |  $ SHOP $  |       _SMITH_                                              (@=@=@=@=@)"<<endl;
        cout<<"   | |      ___      |   -\\_|__   |     __     |      /   _   \\                                             \\\\#-----#//"<<endl;
        cout<<"   |_|_____|___|_____|    || ||\\  |____|__|____|      |__|_|__|                                              |MMMMMMM|"<<endl;
    }
    cin>>x;
    if(x==10)
    {
        cout<<"https://clck.ru/YPSMx"<<endl;
    }
    if(x==11)
    {
        cout<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"БОЙ: 1-Удар 2-Блок 4-Покинуть"<<endl;
        cout<<"УЛИЦА: 3-Арена 5-Магазин 6-Кузня 7-Алтарь 8-Инвертарь 9-Выход(SAVE)"<<endl;
        cout<<"МАГАЗИН/КУЗНЯ: Выбрать товар 1-7"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"Смена цвета не доступна"<<endl;
        cout<<endl;
    }
    if(x==9)
    {
        cout<<"Выход..."<<endl;
                ofstream trd("save.trd");
                trd<<money;
                trd.close();
                ofstream sh("save.sh");
                sh<<txsh<<endl<<fursh<<endl<<bnsh<<endl;
                sh.close();
                ofstream lu("save.lu");
                lu<<prfur<<endl<<supst<<endl;
                lu.close();
                ofstream prg("save.prg");
                prg<<smith<<endl<<bsw<<endl;
                prg.close();
                ofstream srd("save.srd");
                srd<<wood<<endl<<stone<<endl<<iron<<endl<<diamond<<endl<<zar<<endl;
                srd.close();
                ofstream trf("save.trf");
                trf<<tx<<endl<<fur<<endl<<claw<<endl;
                trf.close();
                ofstream acs("save.acs");
                acs<<zarbel<<endl<<zarwrea<<endl;
                acs.close();
        return 0;
    }
    if(x==8)
    {
        cout<<endl;
        cout<<"                     ___________"<<endl;
        cout<<"   *================| ИНВЕРТАРЬ |================*"<<endl;
        cout<<"                                                  "<<endl;
        cout<<"                              БАЛАНС-"<<money<<endl;
        cout<<"     Капюшон ассасина-"<<tx<<endl;
        cout<<"     Мех чувырлы-"<<fur<<endl;
        cout<<"     Коготь токсика-"<<claw<<endl;
        cout<<"     Роскошный мех-"<<prfur<<endl;
        cout<<"     Прекрасная рукоять-"<<supst<<endl;
        cout<<"                                                  "<<endl;
        if(wood!=1&&stone!=1&&iron!=1&&diamond!=1&&zar!=1)//no
            {
        cout<<"     Вы дерётесь кулаками"<<endl;
            }
        if(wood==1&&stone!=1&&iron!=1&&diamond!=1&&zar!=1)//wood
            {
        cout<<"     Вы дерётесь деревянным мечём"<<endl;
            }
        if(stone==1&&iron!=1&&diamond!=1&&zar!=1)//stone
            {
        cout<<"     Вы дерётесь каменным мечём"<<endl;
            }
        if(iron==1&&diamond!=1&&zar!=1)//iron
            {
        cout<<"     Вы дерётесь железным мечём"<<endl;
            }
        if(diamond==1&&zar!=1)//diamond
            {
        cout<<"     Вы дерётесь алмазным мечём"<<endl;
            }
        if(zar==1)//zarya
            {
        cout<<"     Вы сражаетесь объятием зари"<<endl;
            }
        cout<<"                                                  "<<endl;
        if(txsh!=1&&fursh!=1&&bnsh!=1)//no
        {
        cout<<"     Вы защищаетесь руками"<<endl;
        }
        if(txsh==1&&fursh!=1&&bnsh!=1)//txsh
        {
        cout<<"     Вы защищаетесь тканным щитом"<<endl;
        }
        if(fursh==1&&bnsh!=1)//fursh
        {
        cout<<"     Вы защищаетесь меховым щитом"<<endl;
        }
        if(bnsh==1)//bnsh
        {
        cout<<"     Вы защищаетесь костяным щитом"<<endl;
        }
        if(zarbel==1)//zarya belt
        {
        cout<<endl;
        cout<<"     Вас окутывает пояс зари (Здоровье +100)"<<endl;
        }
        if(zarwrea==1)//zarya wreath
        {
        cout<<endl;
        cout<<"     На вашей голове сияет венок зари (Здоровье +30 Урон +5)"<<endl;
        }
        cout<<"                                    v1.0.0        "<<endl;
        cout<<"   *=============================================*"<<endl;
        cout<<endl;
    }
    while (x==5)
    {
        battend=0;
        hb=0;
        cout<<"Добро пожаловать в магазин"<<endl;
        cout<<"  _____________________________________________"<<endl;
        cout<<" |      ___      ____                          |"<<endl;
        cout<<" |   ._/   {   _/____\\_                        |"<<endl;
        cout<<" |  >=_    {    |=__=|         \\________       |"<<endl;
        cout<<" |   ||\\___{    |\\__/|       ==|________>      |"<<endl;
        cout<<" |   ||        _/    \\_        /               |"<<endl;
        cout<<" |   ||       /        \\                       |"<<endl;
        cout<<" |   ||       |        |                       |"<<endl;
        cout<<" |___||_______|________|____________           |"<<endl;
        cout<<" |      ____  _   _  ____  ___      |>-======-<|"<<endl;
        cout<<" |     | ___|| |_| ||    ||   |     |>-======-<|"<<endl;
        cout<<" |     |___ ||  _  ||    ||  _|     |>-======-<|"<<endl;
        cout<<" |     |____||_| |_||____||_|       |>-======-<|"<<endl;
        cout<<" |__________________________________|__________|"<<endl;
            if(wood==0)
            {
                            cout<<"Деревянный меч, 100р (Ввести 1)"<<endl;
            }
            if(stone==0)
            {
                            cout<<"Каменный меч, 200р (Ввести 2)"<<endl;
            }
            if(iron==0)
            {
                            cout<<"Железный меч, 300р (Ввести 3)"<<endl;
            }
            if(diamond==0)
            {
                            cout<<"Азмазный меч, 1500р и 4 шикарных меха (Ввести 4)"<<endl;
            }
            if(wood>0&&stone>0&&iron>0&&diamond>0)
            {
                cout<<"Ты уже всё купил";
                if(mnhk>0&&ban>0&&die>0&&inflv>0&&sooit>0)
                {
                    cout<<", чёртов читер)";
                }
            cout<<endl;
            }
            if(zar>0&&zarbel>0&&zarwrea<1)
            {
                            cout<<"Что! Откуда у тебя меч и пояс зари?"<<endl;
                            cout<<"Хотя это не так важно, у меня есть точто тебе понравится"<<endl;
                            cout<<"Хоть я и продал тебе всё другое, но венок зари я оставил на всякий случай"<<endl;
                            cout<<"10000 и он твой (Ввести 5)"<<endl;
            }
            cout << "Балланс: "<<money<<endl;
        cin>>it;
        if(it==1337228)
        {
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_GREEN|FOREGROUND_INTENSITY);
            money=money+666777666;
            cout<<"HACK $-$ MONEY+666777666"<<endl;
            mnhk++;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
        }
        if(it==2281337&&ban==0)
        {
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_GREEN|FOREGROUND_INTENSITY);
            ban++;
            cout<<"HACK D-D BAN_MACHINE+"<<endl;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
        }
        if(it==666666&&die==0)
        {
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_GREEN|FOREGROUND_INTENSITY);
            die++;
            cout<<"HACK X-X DIE!!!"<<endl;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
        }
        if(it==777777&&inflv==0)
        {
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_GREEN|FOREGROUND_INTENSITY);
            inflv++;
            cout<<"HACK 7-7 INFINITY!!!"<<endl;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
        }
        if(it==228228)
        {
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_GREEN|FOREGROUND_INTENSITY);
            sooit++;
            tx=tx+999;
            fur=fur+999;
            claw=claw+999;
            cout<<"HACK E-E SOO ITEMS!!!"<<endl;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
        }
        switch(it)
   {
            case 1:
                if(wood<1)
                    {
           if(money<0)
            {
                cout<<"Денег не хватает"<<endl;
                cout << "Ваш баланс: "<<money<< endl;
                cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
            }
            else
            {
                if(money>=100 )
                {
                    money=money-100;
                    cout<<"Вы купили деревянный меч за 100 рублей"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    wood++;
                    cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
                }
               else
                {
                    cout<<"Денег не хватает"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
                }
            }
            }
            break;

        case 2:
            if(stone<1)
                {
             if(money<0)
            {
                cout<<"Денег не хватает"<<endl;
                cout << "Ваш баланс: "<<money<< endl;
                cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
            }
            else
            {
                if(money>=200 )
                {
                    money=money-200;
                    cout<<"Вы купили каменный меч за 200 рублей"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    stone++;
            cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
                }
                else
                {
                     cout<<"Денег не хватает"<<endl;
                     cout << "Ваш баланс: "<<money<< endl;
                     cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
                }
            }
            }
            break;
        case 3:
            if(iron<1)
            {
             if(money<0)
            {
                cout<<"Денег не хватает"<<endl;
                cout << "Ваш баланс: "<<money<< endl;
                cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
            }
            else
            {
                if(money>=300 )
                {
                    money=money-300;
                    cout<<"Вы купили железный меч за 300 рублей"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    iron++;
            cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
                }
                else
                {
                   cout<<"Денег не хватает"<<endl;
                   cout << "Ваш баланс: "<<money<< endl;
                   cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
                }
            }
            }
        break;
        case 4:
            if(diamond<1)
            {
             if(money<0)
            {
                cout<<"Денег не хватает"<<endl;
                cout << "Ваш баланс: "<<money<< endl;
                cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
            }
            else
            {
                if(money>=1500&&prfur>=4)
                {
                    money=money-1500;
                    prfur=prfur-4;
                    cout<<"Вы купили алмазный меч за 1500 рублей и 4 роскошных меха"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    diamond++;
            cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
                }
                else
                {
                   cout<<"Ресурсов не хватает"<<endl;
                   cout << "Ваш баланс: "<<money<< endl;
                   cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
                }
            }
            }
        break;
        case 5:
                if(zar>0&&zarbel>0&&zarwrea<1)
                    {
           if(money<0)
            {
                cout<<"Денег не хватает"<<endl;
                cout << "Ваш баланс: "<<money<< endl;
                cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
            }
            else
            {
                if(money>=10000)
                {
                    money=money-10000;
                    cout<<"Вы купили венок зари"<<endl;
                    cout<<"Вы чувствуете себя хорошо (Здоровье +30)"<<endl;
                    cout<<"Ваши руки наполняет сила (Урон +5)"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    zar++;
                    cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
               else
                {
                    cout<<"Денег не хватает"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
            }
            }
            break;
    }
        if(money<=0)
        {
            cout<<"Увы, но у вас закончились деньги..."<<endl;
        }
        cin>>x;
        if(x!=5)
        {
            battend++;
        }
    }
    while (x==6&&smith<1)
    {
        cout<<"  Кузнец: Здраствуй воин, я ничего не могу тебе предложить, так-как у меня нету денег"<<endl;
        cout<<"  Может если ты принесёшь мне мех чувырлы, всё изменится..."<<endl;
        cout<<"  _____________________________________________"<<endl;
        cout<<" |               ____                          |"<<endl;
        cout<<" |             _|____|_                        |"<<endl;
        cout<<" |              |=__=|                         |"<<endl;
        cout<<" |              | == |                         |"<<endl;
        cout<<" |             _/    \\_                        |"<<endl;
        cout<<" |            /        \\                       |"<<endl;
        cout<<" |            |        |                       |"<<endl;
        cout<<" |____________|________|____________           |"<<endl;
        cout<<" |  ____  _   _  _  ______  _   _   |>-======-<|"<<endl;
        cout<<" | | ___|| \\_/ || ||__  __|| |_| |  |>-======-<|"<<endl;
        cout<<" | |___ ||  _  || |   ||   |  _  |  |>-======-<|"<<endl;
        cout<<" | |____||_| |_||_|   ||   |_| |_|  |>-======-<|"<<endl;
        cout<<" |__________________________________|__________|"<<endl;
        cout<<"Дать кузнецу мех (Ввести 1) Кол-во вашего меха-"<<fur<<" Выйти - ввести любое другое число"<<endl;
        cin>>gvfr;
        if(gvfr==1&&fur<1)
        {
            cout<<"Но у тебя же нет меха..."<<endl;
            gvfr=0;
        }
        if(gvfr==1&&fur>0)
        {
            cout<<"Спасибо друг! К следующему твоему приходу всё будет готово!"<<endl;
            gvfr=0;
            fur--;
            smith++;
        }
        x=99;
    }
    while(x==6&&smith>0)
    {
        battend=0;
        hb=0;
        cout<<"Добро пожаловать в кузню, друг"<<endl;
        cout<<"  _____________________________________________"<<endl;
        cout<<" |  _____        ____                          |"<<endl;
        cout<<" | |-----|     _|____|_           ====[]       |"<<endl;
        cout<<" | |__ __|      |=__=|                         |"<<endl;
        cout<<" |   | |        |\\__/|              {__}       |"<<endl;
        cout<<" |   | |       _/    \\_              ||        |"<<endl;
        cout<<" |   | |      /        \\             ||        |"<<endl;
        cout<<" |   |_|      |        |                       |"<<endl;
        cout<<" |____________|________|____________           |"<<endl;
        cout<<" |  ____  _   _  _  ______  _   _   |>-======-<|"<<endl;
        cout<<" | | ___|| \\_/ || ||__  __|| |_| |  |>-======-<|"<<endl;
        cout<<" | |___ ||  _  || |   ||   |  _  |  |>-======-<|"<<endl;
        cout<<" | |____||_| |_||_|   ||   |_| |_|  |>-======-<|"<<endl;
        cout<<" |__________________________________|__________|"<<endl;
            if(txsh==0)
            {
                            cout << "Тканяной щит, 25 капюшонов ассасина и 100р (Ввести 1)"<<endl;
            }
            if(fursh==0)
            {
                            cout << "Меховой щит, 20 меха чувырлвы и 1000р (Ввести 2)"<<endl;
            }
            if(bnsh==0)
            {
                            cout << "Костяной щит, 15 когтей токсика и 2500р (Ввести 3)"<<endl;
            }
            cout<<"Я могу изготовить тебе:"<<endl;
            cout<<"Роскошный мех из 20 капюшонов и 5 меха чувырлы + 500р (Ввести 4)"<<endl;
            cout<<"Прекрасную рукоять из 2 когтей токсика и 4 роскошных меха + 1000р (Ввести 5)"<<endl;
            cout<<"Балланс: "<<money<<" Капюшон ассасина-"<<tx<<" Мех чувырлы-"<<fur<<" Коготь токсика-"<<claw<<" Роскошный мех-"<<prfur<<" Прекрасная рукоять-"<<supst<<endl;
            if(zar==0&&wood!=0&&stone!=0&&iron!=0&&diamond!=0)
            {
                cout<<endl;
                cout<<"Я обучён кувать прекрасные мечи"<<endl;
                cout<<"Один из них это объятие зари"<<endl;
                cout<<"Для его изготовления мне нужна прекрасная рукоять и 3000 рублей (Ввести 6)"<<endl;
            }
            if(zar>0&&zarbel<1)
            {
                cout<<endl;
                cout<<"Кстати к твоему мечу прекрасно подойдёт пояс зари"<<endl;
                cout<<"Для его изготовления требуестся особый материал"<<endl;
                cout<<"В наших краях его фактически невозможно добыть"<<endl;
                cout<<"У меня есть один, но цена будет велика"<<endl;
                cout<<"Для того чтобы сделать этот пояс мне надо 10 роскошного меха и 5000 рублей (Ввести 7)"<<endl;
            }
        cin>>it;
        if(it==1337228)
        {
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_GREEN|FOREGROUND_INTENSITY);
            money=money+666777666;
            cout<<"HACK $-$ MONEY+666777666"<<endl;
            mnhk++;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
        }
        if(it==2281337&&ban==0)
        {
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_GREEN|FOREGROUND_INTENSITY);
            ban++;
            cout<<"HACK D-D BAN_MACHINE+"<<endl;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
        }
        if(it==666666&&die==0)
        {
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_GREEN|FOREGROUND_INTENSITY);
            die++;
            cout<<"HACK X-X DIE!!!"<<endl;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
        }
        if(it==777777&&inflv==0)
        {
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_GREEN|FOREGROUND_INTENSITY);
            inflv++;
            cout<<"HACK 7-7 INFINITY!!!"<<endl;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
        }
        if(it==228228)
        {
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_GREEN|FOREGROUND_INTENSITY);
            sooit++;
            tx=tx+999;
            fur=fur+999;
            claw=claw+999;
            cout<<"HACK E-E SOO ITEMS!!!"<<endl;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
        }
        switch(it)
        {
            case 1:
                if(txsh<1)
                    {
           if(money<0)
            {
                cout<<"Денег не хватает"<<endl;
                cout << "Ваш баланс: "<<money<< endl;
                cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
            }
            else
            {
                if(money>=100&&tx>=25)
                {
                    money=money-100;
                    tx=tx-25;
                    cout<<"Вам изготовили тканяной щит"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    txsh++;
                    cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
               else
                {
                    cout<<"Ресурсов не хватает"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
            }
            }
            break;

        case 2:
            if(fursh<1)
                {
             if(money<0)
            {
                cout<<"Денег не хватает"<<endl;
                cout << "Ваш баланс: "<<money<< endl;
                cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
            }
            else
            {
                if(money>=1000&&fur>=20)
                {
                    money=money-1000;
                    fur=fur-20;
                    cout<<"Вам изготовили меховой щит"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    fursh++;
            cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
                else
                {
                     cout<<"Ресурсов не хватает"<<endl;
                     cout << "Ваш баланс: "<<money<< endl;
                     cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
            }
            }
            break;
        case 3:
            if(bnsh<1)
            {
             if(money<0)
            {
                cout<<"Денег не хватает"<<endl;
                cout << "Ваш баланс: "<<money<< endl;
                cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
            }
            else
            {
                if(money>=2500&&claw>=15)
                {
                    money=money-2500;
                    claw=claw-15;
                    cout<<"Вам изготовили костяной щит"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    bnsh++;
            cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
                else
                {
                   cout<<"Ресурсов не хватает"<<endl;
                   cout << "Ваш баланс: "<<money<< endl;
                   cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
            }
            }
        break;
        case 4:
             if(money<0)
            {
                cout<<"Денег не хватает"<<endl;
                cout << "Ваш баланс: "<<money<< endl;
                cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
            }
            else
            {
                if(money>=500&&tx>=20&&fur>=5)
                {
                    money=money-500;
                    tx=tx-20;
                    fur=fur-5;
                    cout<<"Вам изготовили роскошный мех"<<endl;
                    prfur++;
            cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
                else
                {
                     cout<<"Ингридиентов не хватает"<<endl;
                     cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
            }
            break;
        case 5:
             if(money<0)
            {
                cout<<"Денег не хватает"<<endl;
                cout << "Ваш баланс: "<<money<< endl;
                cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
            }
            else
            {
                if(money>=1000&&prfur>=4&&claw>=2)
                {
                    money=money-1000;
                    prfur=prfur-4;
                    claw=claw-2;
                    cout<<"Вам изготовили прекрасную рукоять"<<endl;
                    supst++;
            cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
                else
                {
                     cout<<"Ингридиентов не хватает"<<endl;
                     cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
            }
            break;
        case 6:
                if(zar<1&&wood>=1&&stone>=1&&iron>=1&&diamond>=1)
                    {
           if(money<0)
            {
                cout<<"Денег не хватает"<<endl;
                cout << "Ваш баланс: "<<money<< endl;
                cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
            }
            else
            {
                if(money>=3000&&supst>=1)
                {
                    money=money-3000;
                    supst--;
                    cout<<"Вам изготовили объятие зари"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    zar++;
                    cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
               else
                {
                    cout<<"Ресурсов не хватает"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
            }
            }
            break;
            case 7:
                if(zarbel<1&&zar>0)
                    {
           if(money<0)
            {
                cout<<"Денег не хватает"<<endl;
                cout << "Ваш баланс: "<<money<< endl;
                cout<<"Чтобы продолжить торговлю введите 5, чтобы завершить введите любую другую цифру"<<endl;
            }
            else
            {
                if(money>=5000&&prfur>=10)
                {
                    money=money-5000;
                    prfur=prfur-10;
                    cout<<"Вам изготовили пояс зари"<<endl;
                    cout<<"Когда вы приложили его к себе, вам стало невероятно хорошо"<<endl;
                    cout<<"Количество вашего здоровья увеличилось на 100"<<endl;
                    cout<<endl;
                    zarbel++;
                    cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
               else
                {
                    cout<<"Ресурсов не хватает"<<endl;
                    cout << "Ваш баланс: "<<money<< endl;
                    cout<<"Чтобы продолжить торговлю введите 6, чтобы завершить введите любую другую цифру"<<endl;
                }
            }
            }
            break;
    }
        if(money<=0)
        {
            cout<<"Увы, но у не хватает ресурсов"<<endl;
        }
        cin>>x;
        if(x!=5)
        {
            battend++;
        }
    }
    while(x==7)
    {
        cout<<"Вы подошли к алтарю"<<endl;
        if(bsw<1)
        {
            cout<<"Для вызова могущественного существа нужно принести 50 капюшонов, 30 меха чувырлы, 15 когтей токсика"<<endl;
            cout<<"Капюшон ассасина-"<<tx<<" Мех чувырлы-"<<fur<<" Коготь токсика-"<<claw<<endl;
            cout<<"Для проведения обряда введите 1"<<endl;
            cout<<"Для выхода введите любое другое число"<<endl;
        }
        if(bsw>0)
        {
            cout<<"Для выхода введите любое число"<<endl;
        }
        cin>>bsgv;
        if(bsgv==1&&tx>=50&&fur>=30&&claw>=15&&bsw<1)
        {
        tx=tx-50;
        fur=fur-30;
        claw=claw-15;
    cout<<"Вы призвали минотавра! Сражайтесь!"<< endl;
    cout<<"            ___      ___"<<endl;
    cout<<"           /  /      \\  \\"<<endl;
    cout<<"          /  / ______ \\  \\"<<endl;
    cout<<"          \\  \\/      \\/  /"<<endl;
    cout<<"          /\\  <> __ <>  /\\"<<endl;
    cout<<"          \\_|   /UU\\   |_/____"<<endl;
    cout<<"            |    __    | /    \\"<<endl;
    cout<<"             \\  /__\\  / /  O  /"<<endl;
    cout<<"              \\_    _/  \\   _/"<<endl;
    cout<<"            ___|____|___ //-"<<endl;
    cout<<"        __--     ||     //__"<<endl;
    cout<<"       /   \\  .  ||  . // / \\"<<endl;
    cout<<"       \\ \\  \\____/\\___//    /"<<endl;
    cout<<"        \\  \\ \\      _//  / /"<<endl;
    cout<<"         \\    -__  /    __/"<<endl;
    cout<<"          \\__    --|__--  "<<endl;
    cout<<"              --__   |"<<endl;
    cout<<"                 /---"<<endl;
    cout<<"                //"<<endl;
    cout<<"               @"<<endl;
    yhp=50;
    if(zarbel>0)
    {
        yhp=yhp+100;
    }
    if(zarwrea>0)
    {
        yhp=yhp+30;
    }
    avhp=400;
    ch=3;
    if(txsh==1&&fursh!=1&&bnsh!=1)//txsh
        {
        ch=ch+2;
        }
    if(fursh==1&&bnsh!=1)//fursh
        {
            ch=ch+4;
        }
    if(bnsh==1)//bnsh
        {
            ch=ch+7;
        }
    ywin=0;
    avwin=0;
    battend=0;
    hb=0;
    blddo=0;
    cin>>play;
    while (play!=4)
    {
    if(play==1&&yhp>=0&&avhp>=0)
    {
        //Удар
        srand(time(NULL));
        ydm = 3 + rand() % 6;//Наша атака
        //cout<<"wood="<<wood<<" stone="<<stone<<" iron="<<iron<<" dm="<<ydm<<endl;
        if(wood==1&&stone!=1&&iron!=1&&diamond!=1&&zar!=1)//wood
            {
                ydm=ydm+3;
            }
        if(stone==1&&iron!=1&&diamond!=1&&zar!=1)//stone
            {
                ydm=ydm+5;
            }
        if(iron==1&&diamond!=1&&zar!=1)//iron
            {
                ydm=ydm+7;
            }
        if(diamond==1&&zar!=1)//diamond
            {
                ydm=ydm+17;
            }
        if(zar==1)//zarya
            {
                ydm=ydm+27;
            }
        if(zarwrea>0)//zarya wreath
        {
            ydm=ydm+5;
        }
        if(ban>0)//BAN
            {
                ydm=ydm+1337228666;
            }
        if(die>0)//666
        {
            avhp=avhp+666777;
        }
        if(inflv>0)//777
        {
            yhp=yhp+777777;
        }
        avhp=avhp-ydm;
        if(avhp<=0)
        {
            ywin=ywin+1;
            avwin=avwin-1;
            avhp=0;
        }
        else
        {
        avdm = 3 + rand() % 6;//Атака врага
        if(blddo<1)
        {
            bld = 1 + rand() % 5;
            if(bld==1)
            {
                blddo=blddo+3;
                bld=0;
            }
        }
        if(blddo>0)
        {
            avdm=avdm+3;
            blddo--;
            cout << "Ранение сильно истекает кровью нанося 3 урона" << endl;
        }
        avdm=avdm+17;
        yhp=yhp-avdm;
        if(yhp<=0)
        {
            avwin=avwin+1;
            ywin=ywin-1;
            yhp=0;
            avhp=avhp+ydm;
            if(ywin==1)
            {
                ywin=ywin+1;
                yhp=yhp+avdm;
            }
        }

        }
        cout << "Вы ударили его и нанесли " <<ydm<< " урона" << endl;
        cout << "Он ударил вас и нанёс " <<avdm<< " урона" << endl;
        cout << "Его здоровье: " <<avhp<< " Ваше здоровье: " <<yhp<< endl;
        }
        if(ywin==1)
        {
            cout<<"Ты... Пожа... Кхе..."<<endl;
            cout<<"            ___      ___"<<endl;
            cout<<"           /  /      \\  \\"<<endl;
            cout<<"          /  / ______ \\  \\"<<endl;
            cout<<"          \\  \\/      \\/  /"<<endl;
            cout<<"          /\\  >< __ ><  /\\"<<endl;
            cout<<"          \\_|   /UU\\   |_/"<<endl;
            cout<<"            |    __    |"<<endl;
            cout<<"             \\  /__\\  /"<<endl;
            cout<<"              \\_    _/"<<endl;
            cout<<"                |++| "<<endl;
            cout<<"Для выхода введите 4"<<endl;
            money=money+5000;
            bsw++;
            hb=hb+1;
            if(hb>1)
            {
                money=money-5000;
                bsw--;
            }
            cout<<"Вы собрали 5000 рублей с минотавра и забрали его голову. От её веет магией"<<endl;
            if(ban>0)
            {
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_RED| FOREGROUND_INTENSITY);
                cout<<"Забанен, чекай"<<endl;
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED| FOREGROUND_INTENSITY);
            }
            if(mnhk>0&&ban>0&&die>0)
            {
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
                FOREGROUND_GREEN|FOREGROUND_INTENSITY);
            }
            battend++;
        }
        if(avwin==1)
        {
            cout<<"Я не дам тебе разрушить мир!"<< endl;
            cout<<"            ___      ___"<<endl;
            cout<<"   [       /  /      \\  \\"<<endl;
            cout<<"          /  / ______ \\  \\"<<endl;
            cout<<"          \\  \\/      \\/  /  ["<<endl;
            cout<<"          /\\  [] __ []  /\\"<<endl;
            cout<<"          \\_|   /UU\\   |_/____"<<endl;
            cout<<"            |    __    | / H  \\"<<endl;
            cout<<"          ]  \\  /__\\  / / HHH /"<<endl;
            cout<<"              \\_    _/  \\  H_/"<<endl;
            cout<<"            ___|____|___ //-"<<endl;
            cout<<"        __--     ||     //__"<<endl;
            cout<<"       /   \\  .  ||  . // / \\"<<endl;
            cout<<"       \\ \\  \\____/\\___//    /    ]"<<endl;
            cout<<"        \\  \\ \\      _//  / /"<<endl;
            cout<<"         \\    -__  /    __/"<<endl;
            cout<<"          \\__    --|__--  "<<endl;
            cout<<"   [          --__   |"<<endl;
            cout<<"                 /---     ]"<<endl;
            cout<<"                //"<<endl;
            cout<<"               @"<<endl;
            cout<<"Для выхода введите 4"<<endl;
        }

        ywin=0;
        avwin=0;
        if  (play==2&&yhp>=0&&avhp>=0&&ch>0)//Блок
    {
    yhp=yhp+1;
    if(txsh==1&&fursh!=1&&bnsh!=1)//txsh
        {
        yhp=yhp+1;
        }
    if(fursh==1&&bnsh!=1)//fursh
        {
            yhp=yhp+2;
        }
    if(bnsh==1)//bnsh
        {
            yhp=yhp+4;
        }
    ch=ch-1;
    avdm = 3 + rand() % 6;//Атака врага
    avdm=avdm+12;
        if(blddo>0)
        {
            yhp=yhp-3;
            blddo--;
            cout << "Ранение сильно истекает кровью нанося 3 урона" << endl;
        }
    cout<<"Вы заблокировали "<<avdm<<" урона и восстановили здоровье"<<endl;
    cout << "Его здоровье: " <<avhp<< " Ваше здоровье: " <<yhp<< endl;
    if(yhp<=0)
        {
            avwin=avwin+1;
            ywin=ywin-1;
            yhp=0;
            avhp=avhp+ydm;
            if(ywin==1)
            {
                ywin=ywin+1;
                yhp=yhp+avdm;
            }
        }
    if(avwin==1)
        {
            cout<<"Я не дам тебе разрушить мир!"<< endl;
            cout<<"            ___      ___"<<endl;
            cout<<"   [       /  /      \\  \\"<<endl;
            cout<<"          /  / ______ \\  \\"<<endl;
            cout<<"          \\  \\/      \\/  /  ["<<endl;
            cout<<"          /\\  [] __ []  /\\"<<endl;
            cout<<"          \\_|   /UU\\   |_/____"<<endl;
            cout<<"            |    __    | / H  \\"<<endl;
            cout<<"          ]  \\  /__\\  / / HHH /"<<endl;
            cout<<"              \\_    _/  \\  H_/"<<endl;
            cout<<"            ___|____|___ //-"<<endl;
            cout<<"        __--     ||     //__"<<endl;
            cout<<"       /   \\  .  ||  . // / \\"<<endl;
            cout<<"       \\ \\  \\____/\\___//    /    ]"<<endl;
            cout<<"        \\  \\ \\      _//  / /"<<endl;
            cout<<"         \\    -__  /    __/"<<endl;
            cout<<"          \\__    --|__--  "<<endl;
            cout<<"   [          --__   |"<<endl;
            cout<<"                 /---     ]"<<endl;
            cout<<"                //"<<endl;
            cout<<"               @"<<endl;
            cout<<"Для выхода введите 4"<<endl;
            battend++;
        }
    }
     if (play==2&&ch==0)//Щит сломан
    {
        cout<<"Ваш щит сломан!"<<endl;

    }
     cin>>play;
    }
        }
        if(bsgv==1&&bsw<1&&tx<50||fur<30||claw<15)
        {
            cout<<"Обряд не удался"<<endl;
        }
        x=99;
        battend++;
    }
}
return 0;
}
