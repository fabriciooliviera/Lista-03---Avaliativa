#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

  int main() {

    setlocale(LC_ALL, "");
    int i, j, k = 1, num, m, n, colorIndex = 0;
    CONSOLE_SCREEN_BUFFER_INFO *ConsoleInfo = new CONSOLE_SCREEN_BUFFER_INFO();
    WORD OriginalColors = ConsoleInfo->wAttributes;
   
    printf("Insira um número:\n");
    scanf("%d", & num);

    for (int aux = 1; aux > 0; aux++) {
      //system(stringColor[colorIndex]);
      HANDLE hConsole;
      hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
      Sleep(1000);
      system("cls");

      for (i = 1; i <= num; i++) {
        for (j = num; j >= i; j--) {
          printf(" ");
        }

        for (k = 1; k <= i * 2 - 1; k++) {
          colorIndex++;
          colorIndex = colorIndex > 15 ? 0 : colorIndex;
          SetConsoleTextAttribute(hConsole, colorIndex);
          printf("*");
          SetConsoleTextAttribute(hConsole, OriginalColors);
        }
        printf("\n");
      }
      for (m = num / 2; m < num; m++) {
        for (n = 2; n <= k / 2; n++) {
          printf(" ");
        }
        SetConsoleTextAttribute(hConsole, 6);
        printf("***\n");
      }
    }
    getchar();
    return 0;
  }
