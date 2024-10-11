
CC = gcc
BUILD = build
SRC = src
OBJECTS = $(patsubst %.c, %.o, $(subst $(SRC), $(BUILD), $(wildcard $(SRC)/*.c)))



all:$(OBJECTS)
	$(CC) $(OBJECTS) -o superpower
 
# for debug purposes , just ignore that !!!
print:
	echo $(OBJECTS)


$(OBJECTS):$(BUILD)/%.o:$(SRC)/%.c | $(BUILD)
	$(CC) -c $^ -o $@

clean:
	rm -rf $(BUILD)/*.o superpower
