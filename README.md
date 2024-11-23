# mysyslog - C logger library

## Описание

libmysyslog — расширяемая библиотека на языке Си, которая сможет выводить данные в журнал в разных форматах

- Поддерживает следующие уровни журналирования: 'DEBUG', 'INFO', 'WARN', 'ERROR', 'CRITICAL'.
- Поддерживает следующие форматы вывода: текстовый формат и JSON.

## Описание директорий

- **libmysyslog**: основная библиотека для логирования.
- **libmysyslog-text**: драйвер для логирования в текстовом формате.
- **libmysyslog-json**: драйвер для логирования в формате JSON.
- **mysyslog-client**: тестовое клиентское приложение для логирования.
- **mysyslog-daemon**: демон для автоматического логирования.

## Makefile FAQ

- make all – собирает все цели;
- make clean – удаляет все временные и объекты файлы;
- make deb – собирает deb-пакет для программы;