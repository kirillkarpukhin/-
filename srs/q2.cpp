#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // Добавляем заголовочный файл для функции sleep

#define MAX_LINE_LENGTH 100

void monitorSystem(FILE *logFile) {
    // ... (код функции monitorSystem остается без изменений)
}

int main() {
    FILE *logFile = fopen("files/log.txt", "w"); // Открытие файла для записи
    if (logFile == NULL) {
        perror("Ошибка открытия файла log.txt");
        return 1;
    }

    while (1) {
        monitorSystem(logFile);
        fprintf(logFile, "\n"); // Добавляем пустую строку для разделения результатов
        sleep(1); // Пауза в 1 секунду
    }

    fclose(logFile); // Закрытие файла

    return 0;
}
