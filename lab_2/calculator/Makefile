# Змінні
CC = gcc                                # Компилятор
CFLAGS = -Iinclude -Wall -Wextra        # Опції компіляції
SRC = src/main.c src/calculator.c       # Вихідні файли
OBJ = $(SRC:.c=.o)                      # Об’єктні файли
TARGET = calculator                     # Ім'я виконуваного файлу
LIB = libcalculator.a                   # Ім'я бібліотеки

# Ціль за замовчуванням
all: $(TARGET)

# Правило для створення виконуваного файлу
$(TARGET): $(OBJ)
    $(CC) $(OBJ) -o $(TARGET)

# Ціль для створення бібліотеки
lib: $(LIB)

# Правило для створення статичної бібліотеки
$(LIB): src/calculator.o
    ar rcs $(LIB) src/calculator.o

# Правило для компіляції об'єктних файлів
src/%.o: src/%.c
    $(CC) $(CFLAGS) -c $< -o $@

# Очищення об’єктних файлів, виконуваного файлу та бібліотеки
clean:
    rm -f src/*.o $(TARGET) $(LIB)
