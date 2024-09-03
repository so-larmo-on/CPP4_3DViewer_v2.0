CXX = g++
FLAGS_CXX = -Wall -Wextra -Werror -std=c++17 
SANITIZE=-fsanitize=address -g
TESTFLAGS=-lgtest 
LCOVFLAGS= --ignore-errors inconsistent --ignore-errors mismatch
BACK=$(wildcard back/s21_*.cpp)
OBJ_BACK=$(BACK:.cpp=.o)

all: install
	 
%.o: %.cpp
	@$(CXX) $(FLAGS_CXX) $(SANITIZE) -c $< -o $@

clang-format:
	clang-format -i *.cpp back/*.cpp back/*.h gui/*.cpp gui/*.h back/test/check.cpp

test: clean mkbuild back_lib
	@$(CXX) $(FLAGS_CXX) $(TESTFLAGS) build/back_lib.a back/test/check.cpp -o test 
	@echo "\033[32mTest done \033[0m"

gcov_report: add_coverage_flag test
	./test
	lcov -t "check" -o check.info -c -d ./  --no-external $(LCOVFLAGS)
	genhtml -o report check.info $(LCOVFLAGS)
	open report/index.html

add_coverage_flag:
	$(eval FLAGS_CXX += --coverage)

cmake_desktop:
	cd build && cmake ../  && make qglbegin

clean:
	@rm -rf dist.tar.gz doxygen latex report html test */*.a build rm -rf */*.o  tests/*.o test *.gcno *.gcda *.gcov *.html *.css  *.dSYM */*.a */*.gcno */*.gcda */*.gcov */*.html */*.css  */*.dSYM *.info
	@echo "\033[32mClean done \033[0m"

install: mkbuild back_lib cmake_desktop
	@echo "\033[32m3DViewer install \033[0m"

uninstall: clean
	@echo "\033[31m3DViewer uninstall \033[0m"

mkbuild:
	rm -rf build/
	mkdir build

main: mkbuild back_lib
	$(CC+) $(FLAGS_CXX) build/back_lib.a main.cpp -o main 


back_lib : $(OBJ_BACK) 
	@ar rc build/back_lib.a $^
	@ranlib build/back_lib.a 
	@rm */*.o

dvi:
	@doxygen .Doxyfile
	@open doxygen/html/index.html

dist: install
	@rm -rf dist.tar.gz
	@tar -cvzf dist.tar.gz build/qglbegin.app/Contents/MacOS/qglbegin