SRC = unity/unity.c\
src/calculator.c\
test/test_calculator.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = calculator.out


# Output directory
BUILD = build


$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME) lm

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME) -lm

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
	


clean:
	rm -rf $(PROJECT_NAME)
$(BUILD):
	mkdir build
