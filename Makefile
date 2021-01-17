CXXFLAGS= -Wall

run_tests: google_tests.o Mario.o Character.o Yoshi.o
	g++ $(CXXFLAGS) -o run_tests google_tests.o Mario.o Yoshi.o Character.o googletest-release-1.10.0/build/lib/libgtest.a googletest-release-1.10.0/build/lib/libgtest_main.a -pthread

google_tests.o: google_tests.cpp 
	g++ $(CXXFLAGS) -c google_tests.cpp -o google_tests.o -I googletest-release-1.10.0/googletest/include/ -std=c++11 

Character.o : Character.cpp 
	g++ $(CXXFLAGS) -c Character.cpp -o Character.o 

Yoshi.o : Yoshi.cpp
	g++ $(CXXFLAGS) -c Yoshi.cpp -o Yoshi.o 


Mario.o : Mario.cpp
	g++ $(CXXFLAGS) -c Mario.cpp -o Mario.o 

#précédemment problème de référence indéfinie car pas de main pour la classe Character. 
# au lieu de "g++ $(CXXFLAGS) -o Character.o Character.cpp ", il est nécessaire d'écrire "g++ $(CXXFLAGS) -c Character.cpp -o Character.o"









clean:
	rm google_tests.o run_tests Character.o Mario.o Yoshi.o
