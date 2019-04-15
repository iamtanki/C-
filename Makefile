CC=g++
PROG=test
deps=$(shell find ./ -name "*.h")
srcs=$(shell find ./ -name "*.cpp")
obj=$(srcs:%.cpp=%.o)

$(PROG): $(obj)
	$(CC) -o $(PROG) $(obj)

%.o: %.cpp $(deps)
	$(CC) -c $< -o $@

clean:
	rm -rf $(obj) $(PROG) *.[oa] *.out
