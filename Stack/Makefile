SRC = stack.c

TEST_SRC = stack_unity.c\
unity/unity.c

coverage:$(SRC) $(TEST_SRC)
	gcc -Iunity -fprofile-arcs -ftest-coverage $^ -o all.out
	./all.out
	gcov -a stack.c

clean:
	rm -rf *.o *.out *.gcd* *.gcno* *.gcov* 


