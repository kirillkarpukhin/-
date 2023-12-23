#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// Функция для вывода графа на экран
void printGraph(int **graph, int size) {
    printf("Граф:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

// Функция для освобождения памяти, выделенной под граф
void freeGraph(int **graph, int size) {
    for (int i = 0; i < size; i++) {
        free(graph[i]);
    }
    free(graph);
}

// Функция для поиска кратчайшего пути между двумя вершинами с помощью алгоритма Ли
void leeAlgorithm(int **graph, int size, int startX, int startY, int targetX, int targetY) {
    // ... (остальной код остается без изменений)
}

int main() {
    // Инициализация графа случайными значениями
    int **graph = (int **)malloc(SIZE * sizeof(int *));
    for (int i = 0; i < SIZE; i++) {
        graph[i] = (int *)malloc(SIZE * sizeof(int));
        for (int j = 0; j < SIZE; j++) {
            graph[i][j] = rand() % 2; // заполняем случайными значениями 0 или 1
        }
    }

    // Вывод графа на экран
    printGraph(graph, SIZE);

    // Поиск кратчайшего пути между двумя вершинами
    int startX, startY, targetX, targetY;
    printf("Введите координаты начальной вершины (x y): ");
    scanf("%d %d", &startX, &startY);
    printf("Введите координаты конечной вершины (x y): ");
    scanf("%d %d", &targetX, &targetY);
    leeAlgorithm(graph, SIZE, startX, startY, targetX, targetY);

    // Освобождение памяти, выделенной под граф
    freeGraph(graph, SIZE);

    return EXIT_SUCCESS;
}
