#include "time.h" // Подключаем заголовочный файл

// Функция для вычисления разницы во времени
struct Time calculateWorkingTime(struct Time start, struct Time end) {
    struct Time workingTime;
    
    int startTotal = start.hours * 60 + start.minutes; // Переводим стартовое время в минуты
    int endTotal = end.hours * 60 + end.minutes; // Переводим конечное время в минуты

    if (endTotal < startTotal) { // Если завершение произошло на следующий день
        endTotal += 24 * 60; // Добавляем 24 часа к конечному времени
    }

    int totalMinutes = endTotal - startTotal; // Общие минуты работы

    workingTime.hours = totalMinutes / 60; // Переводим минуты обратно в часы
    workingTime.minutes = totalMinutes % 60; // Оставшиеся минуты

    return workingTime; // Возвращаем структуру времени работы
}