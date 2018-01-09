main.out: main.o
	g++ -g -Wall $^ -o $@
main.o: main.cpp employee.h map_template.h
	g++ -g -c -Wall $< -o $@
.Phony: clean

clean:
	-rm main.out main.o
