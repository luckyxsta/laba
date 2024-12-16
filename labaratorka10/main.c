#include <stdio.h>
#include "time.h" // Подключаем заголовочный файл

int main() {
    struct Time startTimes[7]; // Массив для времени начала работы за неделю
    struct Time endTimes[7];   // Массив для времени завершения работы за неделю
    struct Time totalWorkingTime = {0, 0}; // Структура для хранения общего времени работы

    printf("Введите время начала и завершения работы прибора за неделю (7 дней):\n");

    for (int i = 0; i < 7; i++) { // Цикл для ввода данных за 7 дней
        printf("День %d:\n", i + 1); // Вывод номера дня
        printf("  Время начала (Часы Минуты): ");
        scanf("%d %d", &startTimes[i].hours, &startTimes[i].minutes); // Вводим время начала работы

        printf("  Время завершения (Часы Минуты): ");
        scanf("%d %d", &endTimes[i].hours, &endTimes[i].minutes); // Вводим время завершения работы
    }

    // Цикл для расчета общего времени работы за неделю
    for (int i = 0; i < 7; i++) {
        struct Time workingTime = calculateWorkingTime(startTimes[i], endTimes[i]); // Вычисляем время работы за день
        totalWorkingTime.hours += workingTime.hours; // Добавляем часы работы
        totalWorkingTime.minutes += workingTime.minutes; // Добавляем минуты работы
    }

    // Приводим общее время работы к корректному формату
    totalWorkingTime.hours += totalWorkingTime.minutes / 60; // Переводим лишние минуты в часы
    totalWorkingTime.minutes %= 60; // Оставляем только минуты

    // Выводим общее время работы за неделю
    printf("Общее время работы прибора за неделю: %d часов и %d минут\n", totalWorkingTime.hours, totalWorkingTime.minutes);

    return 0; // Завершение программы
}