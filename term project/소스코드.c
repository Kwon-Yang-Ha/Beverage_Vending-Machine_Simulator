#include <stdio.h>
#include <windows.h>  //system("cls")를 사용하기 위한 헤더파일
#pragma warning(disable : 4996)
#define TRUE 1
#define Cider 700
#define Cancoffee 700
#define Fanta 600
#define Blackcoffee 300
#define Milkcoffee 300

int MenuChoice;   //메뉴선택
int Money;   //투입할 금액
int Number;   //음료개수
int Hap;   //음료개수와 투입도니 돈의 합
int Nameozi;   //거스름 돈
int cider = 10;
int cancoffee = 10;
int fanta = 10;
int blackcoffee = 10;
int milkcoffee = 10;

int MainMenu()
{
    while (TRUE) {   //while문을 이용해 반복시킨다.
        printf(" ★음료수 자판기★ \n");
        printf(" 동전을 투입하세요. \n");
        printf(" ────────────────────────────\n");
        printf(" 투입액(천원에서 만원까지 투입)>> ");
        scanf_s("%d", &Money);   //사용자로부터 투입할 금액을 입력받는다.

        if ((Money < 1000) || (Money > 10000)) {  //조건문 if문을 이용해 조건에 해당되는 입력 값을 받는다.
            printf("잘못 투입되었습니다.\n");
            system("cls");   //화면 갱신 코드
            continue;
        }
        else {
            system("cls");
            printf("%d원 투입되었습니다.\n\n", Money);
            return 0;
        }
    }
}

int Menu()
{
    while (TRUE) {   //while문을 이용해 반복시킨다.
        printf("   ★음료수 자판기★ \n");
        printf("┌────────────────────┐\n");
        printf("│ 1. 사이다(700원)   │\n");
        printf("│ 2. 캔커피(700원)   │\n");
        printf("│ 3. 환 타(600원)    │\n");
        printf("│ 4. 블랙커피(300원) │\n");
        printf("│ 5. 밀크커피(300원) │\n");
        printf("└────────────────────┘\n\n");
        printf("품목선택>> ");
        scanf_s("%d", &MenuChoice);

        if ((MenuChoice < 0) || (MenuChoice > 5)) {
            //조건문 if문을 이용해 조건에 해당되는 입력 값을 받는다.
            printf("잘못 입력하셨습니다.\n");
            continue;
        }
        fflush(stdin);   //입력 버퍼를 지우는 함수
        printf("품목개수>> ");
        scanf_s("%d", &Number);
        printf("\n");
        //조건문 if문을 이용해 조건에 해당되는 입력 값을 받는다.
        if (Number < 0) {
            printf("잘못 개수 입력하셨습니다.\n");
            continue;
        }

        switch (MenuChoice) {

        case 1:
            if (cider == 0) {
                printf("사이다 재고가 부족합니다.\n");
                continue;
            }
            else if ((Cider * Number) > Money) {
                printf("돈이 부족합니다.\n");
                continue;
            }
            else {
                Hap = Cider * Number;
                Nameozi = Money - Hap;
                Money = Nameozi;
                cider -= Number;
                printf("돈 %d원을 쓰셨습니다.\n\n", Hap);
                printf("거스름돈 %d원 입니다.\n\n", Nameozi);
                printf("사이다를 맛있게 드십시오.\n\n");
                printf("사이다 재고가 %d개 남았습니다.\n\n", cider);
            }
            break;

        case 2:
            if (cancoffee == 0) {
                printf("캔커피 재고가 부족합니다.\n");
                continue;
            }
            else if ((Cancoffee * Number) > Money) {
                printf("돈이 부족합니다.\n");
                continue;
            }
            else {
                Hap = Cancoffee * Number;
                Nameozi = Money - Hap;
                Money = Nameozi;
                cancoffee -= Number;
                printf("돈 %d원을 쓰셨습니다.\n\n", Hap);
                printf("거스름돈 %d원 입니다.\n\n", Nameozi);
                printf("캔커피를 맛있게 드십시오.\n\n");
                printf("캔커피 재고가 %d개 남았습니다.\n\n", cancoffee);
            }
            break;

        case 3:
            if (fanta == 0) {
                printf("환타 재고가 부족합니다.\n");
                continue;
            }
            if ((Fanta * Number) > Money) {
                printf("돈이 부족합니다.\n");
                continue;
            }
            else {
                Hap = Fanta * Number;
                Nameozi = Money - Hap;
                Money = Nameozi;
                fanta -= Number;
                printf("돈 %d원을 쓰셨습니다.\n\n", Hap);
                printf("거스름돈 %d원 입니다.\n\n", Nameozi);
                printf("환타를 맛있게 드십시오.\n\n");
                printf("환타 재고가 %d개 남았습니다.\n\n", fanta);
            }
            break;

        case 4:
            if (blackcoffee == 0) {
                printf("블랙커피 재고가 부족합니다.\n");
                continue;
            }
            if ((Blackcoffee * Number) > Money) {

                printf("돈이 부족합니다.\n");

                continue;

            }

            else {
                Hap = Blackcoffee * Number;
                Nameozi = Money - Hap;
                Money = Nameozi;
                blackcoffee -= Number;
                printf("돈 %d원을 쓰셨습니다.\n\n", Hap);
                printf("거스름돈 %d원 입니다.\n\n", Nameozi);
                printf("블랙커피를 맛있게 드십시오.\n\n");
                printf("블랙커피 재고가 %d개 남았습니다.\n\n", blackcoffee);
            }
            break;

        case 5:
            if (milkcoffee == 0) {
                printf("밀크커피 재고가 부족합니다.\n");
                continue;
            }
            if ((Milkcoffee * Number) > Money) {
                printf("돈이 부족합니다.\n");
                continue;
            }
            else {
                Hap = Milkcoffee * Number;
                Nameozi = Money - Hap;
                Money = Nameozi;
                milkcoffee -= Number;
                printf("돈 %d원을 쓰셨습니다.\n\n", Hap);
                printf("거스름돈 %d원 입니다.\n\n", Nameozi);
                printf("밀크커피를 맛있게 드십시오.\n\n");
                printf("밀크커피 재고가 %d개 남았습니다.\n\n", milkcoffee);
            }
            break;
        }
    Jong:
        int yn;
        fflush(stdin);   //입력 버퍼를 지우는 함수
        printf("자판기를 종료하시겠습니까?\n");
        printf("(종료 하시려면 1 , 종료 하지 않으시려면 2를 입력하세요)>> ");
        scanf_s("%d", &yn);   //사용자로부터 y/n을 입력받는다.
        printf("\n");

        if (yn == 1) {
            printf("자판기 종료합니다.\n");
            break;
        }
        else if (yn == 2) {
            printf("자판기 계속 운영합니다.\n");
            continue;
        }
        else {
            printf("잘못 입력하셨습니다.\n");
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