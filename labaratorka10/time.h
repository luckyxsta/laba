#ifndef TIME_H // Защита от повторного включения
#define TIME_H

// Определяем структуру времени
struct Time {
    int hours;   // Часы
    int minutes; // Минуты
};

// Прототип функции calculateWorkingTime
struct Time calculateWorkingTime(struct Time start, struct Time end);

#endif // TIME_H