#include <stdio.h>
#include <windows.h>  //system("cls")�� ����ϱ� ���� �������
#pragma warning(disable : 4996)
#define TRUE 1
#define Cider 700
#define Cancoffee 700
#define Fanta 600
#define Blackcoffee 300
#define Milkcoffee 300

int MenuChoice;   //�޴�����
int Money;   //������ �ݾ�
int Number;   //���ᰳ��
int Hap;   //���ᰳ���� ���Ե��� ���� ��
int Nameozi;   //�Ž��� ��
int cider = 10;
int cancoffee = 10;
int fanta = 10;
int blackcoffee = 10;
int milkcoffee = 10;

int MainMenu()
{
    while (TRUE) {   //while���� �̿��� �ݺ���Ų��.
        printf(" ������� ���Ǳ�� \n");
        printf(" ������ �����ϼ���. \n");
        printf(" ��������������������������������������������������������\n");
        printf(" ���Ծ�(õ������ �������� ����)>> ");
        scanf_s("%d", &Money);   //����ڷκ��� ������ �ݾ��� �Է¹޴´�.

        if ((Money < 1000) || (Money > 10000)) {  //���ǹ� if���� �̿��� ���ǿ� �ش�Ǵ� �Է� ���� �޴´�.
            printf("�߸� ���ԵǾ����ϴ�.\n");
            system("cls");   //ȭ�� ���� �ڵ�
            continue;
        }
        else {
            system("cls");
            printf("%d�� ���ԵǾ����ϴ�.\n\n", Money);
            return 0;
        }
    }
}

int Menu()
{
    while (TRUE) {   //while���� �̿��� �ݺ���Ų��.
        printf("   ������� ���Ǳ�� \n");
        printf("��������������������������������������������\n");
        printf("�� 1. ���̴�(700��)   ��\n");
        printf("�� 2. ĵĿ��(700��)   ��\n");
        printf("�� 3. ȯ Ÿ(600��)    ��\n");
        printf("�� 4. ��Ŀ��(300��) ��\n");
        printf("�� 5. ��ũĿ��(300��) ��\n");
        printf("��������������������������������������������\n\n");
        printf("ǰ����>> ");
        scanf_s("%d", &MenuChoice);

        if ((MenuChoice < 0) || (MenuChoice > 5)) {
            //���ǹ� if���� �̿��� ���ǿ� �ش�Ǵ� �Է� ���� �޴´�.
            printf("�߸� �Է��ϼ̽��ϴ�.\n");
            continue;
        }
        fflush(stdin);   //�Է� ���۸� ����� �Լ�
        printf("ǰ�񰳼�>> ");
        scanf_s("%d", &Number);
        printf("\n");
        //���ǹ� if���� �̿��� ���ǿ� �ش�Ǵ� �Է� ���� �޴´�.
        if (Number < 0) {
            printf("�߸� ���� �Է��ϼ̽��ϴ�.\n");
            continue;
        }

        switch (MenuChoice) {

        case 1:
            if (cider == 0) {
                printf("���̴� ��� �����մϴ�.\n");
                continue;
            }
            else if ((Cider * Number) > Money) {
                printf("���� �����մϴ�.\n");
                continue;
            }
            else {
                Hap = Cider * Number;
                Nameozi = Money - Hap;
                Money = Nameozi;
                cider -= Number;
                printf("�� %d���� ���̽��ϴ�.\n\n", Hap);
                printf("�Ž����� %d�� �Դϴ�.\n\n", Nameozi);
                printf("���̴ٸ� ���ְ� ��ʽÿ�.\n\n");
                printf("���̴� ��� %d�� ���ҽ��ϴ�.\n\n", cider);
            }
            break;

        case 2:
            if (cancoffee == 0) {
                printf("ĵĿ�� ��� �����մϴ�.\n");
                continue;
            }
            else if ((Cancoffee * Number) > Money) {
                printf("���� �����մϴ�.\n");
                continue;
            }
            else {
                Hap = Cancoffee * Number;
                Nameozi = Money - Hap;
                Money = Nameozi;
                cancoffee -= Number;
                printf("�� %d���� ���̽��ϴ�.\n\n", Hap);
                printf("�Ž����� %d�� �Դϴ�.\n\n", Nameozi);
                printf("ĵĿ�Ǹ� ���ְ� ��ʽÿ�.\n\n");
                printf("ĵĿ�� ��� %d�� ���ҽ��ϴ�.\n\n", cancoffee);
            }
            break;

        case 3:
            if (fanta == 0) {
                printf("ȯŸ ��� �����մϴ�.\n");
                continue;
            }
            if ((Fanta * Number) > Money) {
                printf("���� �����մϴ�.\n");
                continue;
            }
            else {
                Hap = Fanta * Number;
                Nameozi = Money - Hap;
                Money = Nameozi;
                fanta -= Number;
                printf("�� %d���� ���̽��ϴ�.\n\n", Hap);
                printf("�Ž����� %d�� �Դϴ�.\n\n", Nameozi);
                printf("ȯŸ�� ���ְ� ��ʽÿ�.\n\n");
                printf("ȯŸ ��� %d�� ���ҽ��ϴ�.\n\n", fanta);
            }
            break;

        case 4:
            if (blackcoffee == 0) {
                printf("��Ŀ�� ��� �����մϴ�.\n");
                continue;
            }
            if ((Blackcoffee * Number) > Money) {

                printf("���� �����մϴ�.\n");

                continue;

            }

            else {
                Hap = Blackcoffee * Number;
                Nameozi = Money - Hap;
                Money = Nameozi;
                blackcoffee -= Number;
                printf("�� %d���� ���̽��ϴ�.\n\n", Hap);
                printf("�Ž����� %d�� �Դϴ�.\n\n", Nameozi);
                printf("��Ŀ�Ǹ� ���ְ� ��ʽÿ�.\n\n");
                printf("��Ŀ�� ��� %d�� ���ҽ��ϴ�.\n\n", blackcoffee);
            }
            break;

        case 5:
            if (milkcoffee == 0) {
                printf("��ũĿ�� ��� �����մϴ�.\n");
                continue;
            }
            if ((Milkcoffee * Number) > Money) {
                printf("���� �����մϴ�.\n");
                continue;
            }
            else {
                Hap = Milkcoffee * Number;
                Nameozi = Money - Hap;
                Money = Nameozi;
                milkcoffee -= Number;
                printf("�� %d���� ���̽��ϴ�.\n\n", Hap);
                printf("�Ž����� %d�� �Դϴ�.\n\n", Nameozi);
                printf("��ũĿ�Ǹ� ���ְ� ��ʽÿ�.\n\n");
                printf("��ũĿ�� ��� %d�� ���ҽ��ϴ�.\n\n", milkcoffee);
            }
            break;
        }
    Jong:
        int yn;
        fflush(stdin);   //�Է� ���۸� ����� �Լ�
        printf("���Ǳ⸦ �����Ͻðڽ��ϱ�?\n");
        printf("(���� �Ͻ÷��� 1 , ���� ���� �����÷��� 2�� �Է��ϼ���)>> ");
        scanf_s("%d", &yn);   //����ڷκ��� y/n�� �Է¹޴´�.
        printf("\n");

        if (yn == 1) {
            printf("���Ǳ� �����մϴ�.\n");
            break;
        }
        else if (yn == 2) {
            printf("���Ǳ� ��� ��մϴ�.\n");
            continue;
        }
        else {
            printf("�߸� �Է��ϼ̽��ϴ�.\n");
            goto Jong;
        }
    }
    return 0;
}

int main()
{
    MainMenu();
    Menu();
    return 0;
}