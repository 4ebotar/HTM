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
    int x=0,play,vsyaigra;//���������
    int yhp,avhp,ydm,avdm,ywin=0,avwin=0,ch,battend=0,avn=0;//�������� ���
    int money=0,it;//�������
    int wood=0,stone=0,iron=0,diamond=0,zar=0;//����
    int txsh=0,fursh=0,bnsh=0;//���
    int zarbel=0,zarwrea=0;//������ ��������, ����������
    int tx=0,fur=0,claw=0;//������
    int prfur=0,supst=0;//��������
    int hb=0;//����-����
    int ban=0,die=0,mnhk=0,inflv=0,sooit=0;//����
    int smith=0,gvfr=0,bsgv=0,bsw=0;//������������� ������
    int tox=0,toxdo=0,bld=0,blddo=0;//������
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
    cout<<"���: 1-���� 2-���� 4-��������"<<endl;
    cout<<"�����: 3-����� 5-������� 6-����� 7-������ 8-��������� 9-�����(SAVE)"<<endl;
    cout<<"�������/�����: ������� ����� 1-7"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"������-3"<<endl;
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
        cout<<"�� ����� �� �����. ��� ���� ��� �����: ���� 1 (����-�������); ���� 2 (�������); ���� 3 (������)"<< endl;
        cin>>avn;
        if(avn==1)
        {
            cout<<"�� ���� ����� ����-��������! ������!"<< endl;
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
                if (play==1&&yhp>=0&&avhp>=0)//����
                {
                    srand(time(NULL));
                    ydm = 3 + rand() % 6;//���� �����
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
                        avdm = 2 + rand() % 4;//����� �����
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
                    cout << "�� ������� ��� � ������� " <<ydm<< " �����" << endl;
                    cout << "�� ������ ��� � ���� " <<avdm<< " �����" << endl;
                    cout << "��� ��������: " <<avhp<< " ���� ��������: " <<yhp<< endl;
                }
                    if(ywin==1)
                    {
                        cout<<"�������, �� ������ �����-��������!"<<endl;
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
                        cout<<"�� ������� 20 ������ � �����-�������� � ������� ��� ������� ����"<<endl;
                        cout<<"���� �� ������ ����� � ����� ������� 4 ��������� �� ����� ���� �������� ��� ���"<<endl;
                        if(ban>0)
                        {
                            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
                            FOREGROUND_RED| FOREGROUND_INTENSITY);
                            cout<<"�������, �����"<<endl;
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
                        cout<<"           |  ___   |   ��� �� ���, �� CLOWN! ����������!!!"<<endl;
                        cout<<"            \\_\\M/__/"<<endl;
                        cout<<"           ___\\  /___"<<endl;
                        cout<<"          /    __    \\"<<endl;
                        cout<<"        /|    /  \\    |\\"<<endl;
                        cout<<"       | |    |  |    | |"<<endl;
                        cout<<"       | |    /  \\    | |"<<endl;
                        cout<<"       | |   |    |   | |"<<endl;
                        cout<<"        \\|   /     \\  |/"<<endl;
                        cout<<"         |  |      |  |"<<endl;
                        cout<<"���� �� ������ ����� � ����� ������� 4 ��������� �� ����� ���� �������� ��� ���"<<endl;
                        battend++;
                    }
                    ywin=0;
                    avwin=0;
                    if(play==2&&yhp>=0&&avhp>=0&&ch>0)//����
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
                        avdm = 3 + rand() % 6;//����� �����
                        cout<<"�� ������������� "<<avdm<<" ����� � ������������ ��������"<<endl;
                        cout << "��� ��������: " <<avhp<< " ���� ��������: " <<yhp<< endl;
                    }
                    if (play==2&&ch==0)//��� ������
                    {
                        cout<<"��� ��� ������!"<<endl;
                    }
                    cin>>play;
            }
        }
        if(avn==2)
        {
            cout<<"�� ���� ����� �������! ������!"<< endl;
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
                    //����
                    srand(time(NULL));
                    ydm = 3 + rand() % 6;//���� �����
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
                        avdm = 2 + rand() % 4;//����� �����
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
                    cout << "�� ������� ��� � ������� " <<ydm<< " �����" << endl;
                    cout << "�� ������ ��� � ���� " <<avdm<< " �����" << endl;
                    cout << "��� ��������: " <<avhp<< " ���� ��������: " <<yhp<< endl;
                }
                if(ywin==1)
                {
                    cout<<"�������, �� ������ �������!"<<endl;
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
                    cout<<"�� ������� 100 ������ � ������� � ������� ��� ���"<<endl;
                    cout<<"���� �� ������ ����� � ����� ������� 4 ��������� �� ����� ���� �������� ��� ���"<<endl;
                    if(ban>0)
                    {
                        SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
                        FOREGROUND_RED| FOREGROUND_INTENSITY);
                        cout<<"�������, �����"<<endl;
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
                    cout<<"��� ������� �������"<<endl;
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
                    cout<<"���� �� ������ ����� � ����� ������� 4 ��������� �� ����� ���� �������� ��� ���"<<endl;
                    battend++;
                }
                ywin=0;
                avwin=0;
                if(play==2&&yhp>=0&&avhp>=0&&ch>0)//����
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
                avdm = 3 + rand() % 6;//����� �����
                avdm=avdm+4;
                cout<<"�� ������������� "<<avdm<<" ����� � ������������ ��������"<<endl;
                cout << "��� ��������: " <<avhp<< " ���� ��������: " <<yhp<< endl;
                }
                if (play==2&&ch==0)//��� ������
                {
                    cout<<"��� ��� ������!"<<endl;
                }
                cin>>play;
            }
        }
        if(avn==3)
        {
            cout<<"�� ���� ����� ��������� ����! ������!"<< endl;
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
                    //����
                    srand(time(NULL));
                    ydm = 3 + rand() % 6;//���� �����
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
                        avdm = 2 + rand() % 4;//����� �����
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
                            cout << "������� ������ �� �� ������ ��������� ���� ����� ������ 1 ����" << endl;
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
                    cout << "�� ������� ��� � ������� " <<ydm<< " �����" << endl;
                    cout << "�� ������ ��� � ���� " <<avdm<< " �����" << endl;
                    cout << "��� ��������: " <<avhp<< " ���� ��������: " <<yhp<< endl;
                }
                if(ywin==1)
                {
                    cout<<"�������, �� ������ ���������� �����"<<endl;
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
                    cout<<"�� ������� 200 ������ � ���������� ����� � ������� ��� �����"<<endl;
                    cout<<"���� �� ������ ����� � ����� ������� 4 ��������� �� ����� ���� �������� ��� ���"<<endl;
                    if(ban>0)
                    {
                        SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
                        FOREGROUND_RED| FOREGROUND_INTENSITY);
                        cout<<"�������, �����"<<endl;
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
            cout<<"��� ������� ������"<<endl;
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
            cout<<"���� �� ������ ����� � ����� ������� 4 ��������� �� ����� ���� �������� ��� ���"<<endl;
            battend++;
        }

        ywin=0;
        avwin=0;
        if  (play==2&&yhp>=0&&avhp>=0&&ch>0)//����
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
    avdm = 3 + rand() % 6;//����� �����
    avdm=avdm+12;
        if(toxdo>0)
        {
            avdm++;
            toxdo--;
            cout << "������� ������ �� �� ������ ��������� ���� ����� ������ 1 ����" << endl;
        }
    cout<<"�� ������������� "<<avdm<<" ����� � ������������ ��������"<<endl;
    cout << "��� ��������: " <<avhp<< " ���� ��������: " <<yhp<< endl;
    }
     if (play==2&&ch==0)//��� ������
    {
        cout<<"��� ��� ������!"<<endl;

    }
     cin>>play;
    }
    }
    }
    if(battend>0&&bsw<1)
    {
        cout<<"�� �� �����"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"���������/����������-11   �����-9"<<endl;
        cout<<"    ________________"<<endl;
        cout<<"   |\\_____ARENA_____\\              ____________"<<endl;
        cout<<"   | |               |            |____________|"<<endl;
        cout<<"   | |   -|>>>>>>>   |            |  $ SHOP $  |       _SMITH_                                              (@=@=@=@=@)"<<endl;
        cout<<"   | |      ___      |            |     __     |      /   _   \\                                             \\\\#-----#//"<<endl;
        cout<<"   |_|_____|___|_____|            |____|__|____|      |__|_|__|                                              |MMMMMMM|"<<endl;
    }
    if(battend>0&&bsw>0)
    {
        cout<<"�� �� �����"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"���������/����������-11   �����-9"<<endl;
        cout<<"������� � ������ �� ���� (������ 10)"<<endl;
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
        cout<<"���: 1-���� 2-���� 4-��������"<<endl;
        cout<<"�����: 3-����� 5-������� 6-����� 7-������ 8-��������� 9-�����(SAVE)"<<endl;
        cout<<"�������/�����: ������� ����� 1-7"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"����� ����� �� ��������"<<endl;
        cout<<endl;
    }
    if(x==9)
    {
        cout<<"�����..."<<endl;
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
        cout<<"   *================| ��������� |================*"<<endl;
        cout<<"                                                  "<<endl;
        cout<<"                              ������-"<<money<<endl;
        cout<<"     ������� ��������-"<<tx<<endl;
        cout<<"     ��� �������-"<<fur<<endl;
        cout<<"     ������ �������-"<<claw<<endl;
        cout<<"     ��������� ���-"<<prfur<<endl;
        cout<<"     ���������� �������-"<<supst<<endl;
        cout<<"                                                  "<<endl;
        if(wood!=1&&stone!=1&&iron!=1&&diamond!=1&&zar!=1)//no
            {
        cout<<"     �� ������� ��������"<<endl;
            }
        if(wood==1&&stone!=1&&iron!=1&&diamond!=1&&zar!=1)//wood
            {
        cout<<"     �� ������� ���������� �����"<<endl;
            }
        if(stone==1&&iron!=1&&diamond!=1&&zar!=1)//stone
            {
        cout<<"     �� ������� �������� �����"<<endl;
            }
        if(iron==1&&diamond!=1&&zar!=1)//iron
            {
        cout<<"     �� ������� �������� �����"<<endl;
            }
        if(diamond==1&&zar!=1)//diamond
            {
        cout<<"     �� ������� �������� �����"<<endl;
            }
        if(zar==1)//zarya
            {
        cout<<"     �� ���������� �������� ����"<<endl;
            }
        cout<<"                                                  "<<endl;
        if(txsh!=1&&fursh!=1&&bnsh!=1)//no
        {
        cout<<"     �� ����������� ������"<<endl;
        }
        if(txsh==1&&fursh!=1&&bnsh!=1)//txsh
        {
        cout<<"     �� ����������� ������� �����"<<endl;
        }
        if(fursh==1&&bnsh!=1)//fursh
        {
        cout<<"     �� ����������� ������� �����"<<endl;
        }
        if(bnsh==1)//bnsh
        {
        cout<<"     �� ����������� �������� �����"<<endl;
        }
        if(zarbel==1)//zarya belt
        {
        cout<<endl;
        cout<<"     ��� ��������� ���� ���� (�������� +100)"<<endl;
        }
        if(zarwrea==1)//zarya wreath
        {
        cout<<endl;
        cout<<"     �� ����� ������ ����� ����� ���� (�������� +30 ���� +5)"<<endl;
        }
        cout<<"                                    v1.0.0        "<<endl;
        cout<<"   *=============================================*"<<endl;
        cout<<endl;
    }
    while (x==5)
    {
        battend=0;
        hb=0;
        cout<<"����� ���������� � �������"<<endl;
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
                            cout<<"���������� ���, 100� (������ 1)"<<endl;
            }
            if(stone==0)
            {
                            cout<<"�������� ���, 200� (������ 2)"<<endl;
            }
            if(iron==0)
            {
                            cout<<"�������� ���, 300� (������ 3)"<<endl;
            }
            if(diamond==0)
            {
                            cout<<"�������� ���, 1500� � 4 �������� ���� (������ 4)"<<endl;
            }
            if(wood>0&&stone>0&&iron>0&&diamond>0)
            {
                cout<<"�� ��� �� �����";
                if(mnhk>0&&ban>0&&die>0&&inflv>0&&sooit>0)
                {
                    cout<<", ������ �����)";
                }
            cout<<endl;
            }
            if(zar>0&&zarbel>0&&zarwrea<1)
            {
                            cout<<"���! ������ � ���� ��� � ���� ����?"<<endl;
                            cout<<"���� ��� �� ��� �����, � ���� ���� ����� ���� ����������"<<endl;
                            cout<<"���� � � ������ ���� �� ������, �� ����� ���� � ������� �� ������ ������"<<endl;
                            cout<<"10000 � �� ���� (������ 5)"<<endl;
            }
            cout << "�������: "<<money<<endl;
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
                cout<<"����� �� �������"<<endl;
                cout << "��� ������: "<<money<< endl;
                cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
            }
            else
            {
                if(money>=100 )
                {
                    money=money-100;
                    cout<<"�� ������ ���������� ��� �� 100 ������"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    wood++;
                    cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
                }
               else
                {
                    cout<<"����� �� �������"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
                }
            }
            }
            break;

        case 2:
            if(stone<1)
                {
             if(money<0)
            {
                cout<<"����� �� �������"<<endl;
                cout << "��� ������: "<<money<< endl;
                cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
            }
            else
            {
                if(money>=200 )
                {
                    money=money-200;
                    cout<<"�� ������ �������� ��� �� 200 ������"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    stone++;
            cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
                }
                else
                {
                     cout<<"����� �� �������"<<endl;
                     cout << "��� ������: "<<money<< endl;
                     cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
                }
            }
            }
            break;
        case 3:
            if(iron<1)
            {
             if(money<0)
            {
                cout<<"����� �� �������"<<endl;
                cout << "��� ������: "<<money<< endl;
                cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
            }
            else
            {
                if(money>=300 )
                {
                    money=money-300;
                    cout<<"�� ������ �������� ��� �� 300 ������"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    iron++;
            cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
                }
                else
                {
                   cout<<"����� �� �������"<<endl;
                   cout << "��� ������: "<<money<< endl;
                   cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
                }
            }
            }
        break;
        case 4:
            if(diamond<1)
            {
             if(money<0)
            {
                cout<<"����� �� �������"<<endl;
                cout << "��� ������: "<<money<< endl;
                cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
            }
            else
            {
                if(money>=1500&&prfur>=4)
                {
                    money=money-1500;
                    prfur=prfur-4;
                    cout<<"�� ������ �������� ��� �� 1500 ������ � 4 ��������� ����"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    diamond++;
            cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
                }
                else
                {
                   cout<<"�������� �� �������"<<endl;
                   cout << "��� ������: "<<money<< endl;
                   cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
                }
            }
            }
        break;
        case 5:
                if(zar>0&&zarbel>0&&zarwrea<1)
                    {
           if(money<0)
            {
                cout<<"����� �� �������"<<endl;
                cout << "��� ������: "<<money<< endl;
                cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
            }
            else
            {
                if(money>=10000)
                {
                    money=money-10000;
                    cout<<"�� ������ ����� ����"<<endl;
                    cout<<"�� ���������� ���� ������ (�������� +30)"<<endl;
                    cout<<"���� ���� ��������� ���� (���� +5)"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    zar++;
                    cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
               else
                {
                    cout<<"����� �� �������"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
            }
            }
            break;
    }
        if(money<=0)
        {
            cout<<"���, �� � ��� ����������� ������..."<<endl;
        }
        cin>>x;
        if(x!=5)
        {
            battend++;
        }
    }
    while (x==6&&smith<1)
    {
        cout<<"  ������: ��������� ����, � ������ �� ���� ���� ����������, ���-��� � ���� ���� �����"<<endl;
        cout<<"  ����� ���� �� �������� ��� ��� �������, �� ���������..."<<endl;
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
        cout<<"���� ������� ��� (������ 1) ���-�� ������ ����-"<<fur<<" ����� - ������ ����� ������ �����"<<endl;
        cin>>gvfr;
        if(gvfr==1&&fur<1)
        {
            cout<<"�� � ���� �� ��� ����..."<<endl;
            gvfr=0;
        }
        if(gvfr==1&&fur>0)
        {
            cout<<"������� ����! � ���������� ������ ������� �� ����� ������!"<<endl;
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
        cout<<"����� ���������� � �����, ����"<<endl;
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
                            cout << "�������� ���, 25 ��������� �������� � 100� (������ 1)"<<endl;
            }
            if(fursh==0)
            {
                            cout << "������� ���, 20 ���� �������� � 1000� (������ 2)"<<endl;
            }
            if(bnsh==0)
            {
                            cout << "�������� ���, 15 ������ ������� � 2500� (������ 3)"<<endl;
            }
            cout<<"� ���� ���������� ����:"<<endl;
            cout<<"��������� ��� �� 20 ��������� � 5 ���� ������� + 500� (������ 4)"<<endl;
            cout<<"���������� ������� �� 2 ������ ������� � 4 ��������� ���� + 1000� (������ 5)"<<endl;
            cout<<"�������: "<<money<<" ������� ��������-"<<tx<<" ��� �������-"<<fur<<" ������ �������-"<<claw<<" ��������� ���-"<<prfur<<" ���������� �������-"<<supst<<endl;
            if(zar==0&&wood!=0&&stone!=0&&iron!=0&&diamond!=0)
            {
                cout<<endl;
                cout<<"� ������ ������ ���������� ����"<<endl;
                cout<<"���� �� ��� ��� ������� ����"<<endl;
                cout<<"��� ��� ������������ ��� ����� ���������� ������� � 3000 ������ (������ 6)"<<endl;
            }
            if(zar>0&&zarbel<1)
            {
                cout<<endl;
                cout<<"������ � ������ ���� ��������� ������� ���� ����"<<endl;
                cout<<"��� ��� ������������ ���������� ������ ��������"<<endl;
                cout<<"� ����� ����� ��� ���������� ���������� ������"<<endl;
                cout<<"� ���� ���� ����, �� ���� ����� ������"<<endl;
                cout<<"��� ���� ����� ������� ���� ���� ��� ���� 10 ���������� ���� � 5000 ������ (������ 7)"<<endl;
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
                cout<<"����� �� �������"<<endl;
                cout << "��� ������: "<<money<< endl;
                cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
            }
            else
            {
                if(money>=100&&tx>=25)
                {
                    money=money-100;
                    tx=tx-25;
                    cout<<"��� ���������� �������� ���"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    txsh++;
                    cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
               else
                {
                    cout<<"�������� �� �������"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
            }
            }
            break;

        case 2:
            if(fursh<1)
                {
             if(money<0)
            {
                cout<<"����� �� �������"<<endl;
                cout << "��� ������: "<<money<< endl;
                cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
            }
            else
            {
                if(money>=1000&&fur>=20)
                {
                    money=money-1000;
                    fur=fur-20;
                    cout<<"��� ���������� ������� ���"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    fursh++;
            cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
                else
                {
                     cout<<"�������� �� �������"<<endl;
                     cout << "��� ������: "<<money<< endl;
                     cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
            }
            }
            break;
        case 3:
            if(bnsh<1)
            {
             if(money<0)
            {
                cout<<"����� �� �������"<<endl;
                cout << "��� ������: "<<money<< endl;
                cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
            }
            else
            {
                if(money>=2500&&claw>=15)
                {
                    money=money-2500;
                    claw=claw-15;
                    cout<<"��� ���������� �������� ���"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    bnsh++;
            cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
                else
                {
                   cout<<"�������� �� �������"<<endl;
                   cout << "��� ������: "<<money<< endl;
                   cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
            }
            }
        break;
        case 4:
             if(money<0)
            {
                cout<<"����� �� �������"<<endl;
                cout << "��� ������: "<<money<< endl;
                cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
            }
            else
            {
                if(money>=500&&tx>=20&&fur>=5)
                {
                    money=money-500;
                    tx=tx-20;
                    fur=fur-5;
                    cout<<"��� ���������� ��������� ���"<<endl;
                    prfur++;
            cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
                else
                {
                     cout<<"������������ �� �������"<<endl;
                     cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
            }
            break;
        case 5:
             if(money<0)
            {
                cout<<"����� �� �������"<<endl;
                cout << "��� ������: "<<money<< endl;
                cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
            }
            else
            {
                if(money>=1000&&prfur>=4&&claw>=2)
                {
                    money=money-1000;
                    prfur=prfur-4;
                    claw=claw-2;
                    cout<<"��� ���������� ���������� �������"<<endl;
                    supst++;
            cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
                else
                {
                     cout<<"������������ �� �������"<<endl;
                     cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
            }
            break;
        case 6:
                if(zar<1&&wood>=1&&stone>=1&&iron>=1&&diamond>=1)
                    {
           if(money<0)
            {
                cout<<"����� �� �������"<<endl;
                cout << "��� ������: "<<money<< endl;
                cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
            }
            else
            {
                if(money>=3000&&supst>=1)
                {
                    money=money-3000;
                    supst--;
                    cout<<"��� ���������� ������� ����"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    zar++;
                    cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
               else
                {
                    cout<<"�������� �� �������"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
            }
            }
            break;
            case 7:
                if(zarbel<1&&zar>0)
                    {
           if(money<0)
            {
                cout<<"����� �� �������"<<endl;
                cout << "��� ������: "<<money<< endl;
                cout<<"����� ���������� �������� ������� 5, ����� ��������� ������� ����� ������ �����"<<endl;
            }
            else
            {
                if(money>=5000&&prfur>=10)
                {
                    money=money-5000;
                    prfur=prfur-10;
                    cout<<"��� ���������� ���� ����"<<endl;
                    cout<<"����� �� ��������� ��� � ����, ��� ����� ���������� ������"<<endl;
                    cout<<"���������� ������ �������� ����������� �� 100"<<endl;
                    cout<<endl;
                    zarbel++;
                    cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
               else
                {
                    cout<<"�������� �� �������"<<endl;
                    cout << "��� ������: "<<money<< endl;
                    cout<<"����� ���������� �������� ������� 6, ����� ��������� ������� ����� ������ �����"<<endl;
                }
            }
            }
            break;
    }
        if(money<=0)
        {
            cout<<"���, �� � �� ������� ��������"<<endl;
        }
        cin>>x;
        if(x!=5)
        {
            battend++;
        }
    }
    while(x==7)
    {
        cout<<"�� ������� � ������"<<endl;
        if(bsw<1)
        {
            cout<<"��� ������ ��������������� �������� ����� �������� 50 ���������, 30 ���� �������, 15 ������ �������"<<endl;
            cout<<"������� ��������-"<<tx<<" ��� �������-"<<fur<<" ������ �������-"<<claw<<endl;
            cout<<"��� ���������� ������ ������� 1"<<endl;
            cout<<"��� ������ ������� ����� ������ �����"<<endl;
        }
        if(bsw>0)
        {
            cout<<"��� ������ ������� ����� �����"<<endl;
        }
        cin>>bsgv;
        if(bsgv==1&&tx>=50&&fur>=30&&claw>=15&&bsw<1)
        {
        tx=tx-50;
        fur=fur-30;
        claw=claw-15;
    cout<<"�� �������� ���������! ����������!"<< endl;
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
        //����
        srand(time(NULL));
        ydm = 3 + rand() % 6;//���� �����
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
        avdm = 3 + rand() % 6;//����� �����
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
            cout << "������� ������ �������� ������ ������ 3 �����" << endl;
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
        cout << "�� ������� ��� � ������� " <<ydm<< " �����" << endl;
        cout << "�� ������ ��� � ���� " <<avdm<< " �����" << endl;
        cout << "��� ��������: " <<avhp<< " ���� ��������: " <<yhp<< endl;
        }
        if(ywin==1)
        {
            cout<<"��... ����... ���..."<<endl;
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
            cout<<"��� ������ ������� 4"<<endl;
            money=money+5000;
            bsw++;
            hb=hb+1;
            if(hb>1)
            {
                money=money-5000;
                bsw--;
            }
            cout<<"�� ������� 5000 ������ � ��������� � ������� ��� ������. �� � ���� ������"<<endl;
            if(ban>0)
            {
                SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),
            FOREGROUND_RED| FOREGROUND_INTENSITY);
                cout<<"�������, �����"<<endl;
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
            cout<<"� �� ��� ���� ��������� ���!"<< endl;
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
            cout<<"��� ������ ������� 4"<<endl;
        }

        ywin=0;
        avwin=0;
        if  (play==2&&yhp>=0&&avhp>=0&&ch>0)//����
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
    avdm = 3 + rand() % 6;//����� �����
    avdm=avdm+12;
        if(blddo>0)
        {
            yhp=yhp-3;
            blddo--;
            cout << "������� ������ �������� ������ ������ 3 �����" << endl;
        }
    cout<<"�� ������������� "<<avdm<<" ����� � ������������ ��������"<<endl;
    cout << "��� ��������: " <<avhp<< " ���� ��������: " <<yhp<< endl;
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
            cout<<"� �� ��� ���� ��������� ���!"<< endl;
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
            cout<<"��� ������ ������� 4"<<endl;
            battend++;
        }
    }
     if (play==2&&ch==0)//��� ������
    {
        cout<<"��� ��� ������!"<<endl;

    }
     cin>>play;
    }
        }
        if(bsgv==1&&bsw<1&&tx<50||fur<30||claw<15)
        {
            cout<<"����� �� ������"<<endl;
        }
        x=99;
        battend++;
    }
}
return 0;
}
